#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define name " Morales Tavera Jonatan Arturo "

int isPrime(int numero)
{
    if (numero == 0 || numero == 1)
        return 0;
    if (numero == 4)
        return 0;
    for (int x = 2; x < numero / 2; x++)
    {
        if (numero % x == 0)
            return 0;
    }
    return 1;
}

void principalFunction()
{
    FILE *primeFile;
    int iterator = 0;
    int counter = 0;
    primeFile = fopen("primeNumbers.dat", "wb");
    if (primeFile == NULL)
    {
        exit(1);
    }
    int numero;
    printf("Ingrese un limite maximo: \n");
    scanf("%d", &numero);
    for (int iterator = 0; iterator <= numero; iterator++)
    {
        if (isPrime(iterator))
        {
            fwrite(&iterator, sizeof(int), 1, primeFile);
            counter++;
        }
    }
    fclose(primeFile);
    printData(counter);
}

void printData(int numero)
{
    FILE *primeFile;
    int v1;
    primeFile = fopen("primeNumbers.dat", "rb");
    if (primeFile == NULL)
    {
        exit(1);
    }
    int primeNumber = 0;
    int i = 0;
    while (i <= numero || !feof(primeFile))
    {
        fread(&v1, sizeof(int), 1, primeFile);
        printf("%i\n",v1);
        primeNumber = v1;
        i++;
    }
    fclose(primeFile);
}

void printName()
{
    printf("pon tu nombre aqui");
}

int main()
{
    principalFunction();
    printName();
    return 0;
}
