#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int primo(int numero)
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

void EsPrimo()
{
    FILE *arch;
    int validacion = 0;
    int cont = 0;
    arch = fopen("numerosPrimos.dat", "wb");
    if (arch == NULL)
    {
        exit(1);
    }
    int numero;
    printf("Ingrese un numero entero: \n");
    scanf("%d", &numero);
    for (int validacion = 0; validacion <= numero; validacion++)
    {
        if (primo(validacion))
        {
            fwrite(&validacion, sizeof(int), 1, arch);
            cont++;
        }
    }
    fclose(arch);
    imprimir(cont);
}

void imprimir(int numero)
{
    FILE *arch;
    int v1;
    arch = fopen("numerosPrimos.dat", "rb");
    if (arch == NULL)
    {
        exit(1);
    }
    int numPrimo = 0;
    int i = 1;
    for (int i = 0; i < numero; i++)
    {
        fread(&v1, sizeof(int), 1, arch);
        printf("%i\n",v1);
        numPrimo = v1;
    }
    fclose(arch);
}

int main()
{
    EsPrimo();
    printf("Ramos de la Torre Juan\n");
    return 0;
}
