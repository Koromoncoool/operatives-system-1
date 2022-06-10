#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct alumnos
{
    char nombre[10];
    char noControl[10];
    char apellidos[10];
    char telefono[10];
    char calificacion[10];
};

int main(void)
{
    typedef struct alumnos alum;
    char nC[10];
    int i;
    alum alu[20];
    printf("Cuantos alumnos quieres? ");
    int n = atoi(fgets(nC, 10, stdin));

    for (i = 0; i < n; i++)
    {
        printf(">>> Alumno %d <<< \n", i + 1);

        printf(">>> %d. Escriba su Nombre: ", i + 1);
        fgets(alu[i].nombre, 10, stdin);

        printf(">>> %d. Escriba sus apellidos: ", i + 1);
        fgets(alu[i].apellidos, 10, stdin);

        printf(">>> %d. Escriba su no Control: ", i + 1);
        fgets(alu[i].noControl, 10, stdin);

        printf(">>> %d. Escriba su telefono: ", i + 1);
        fgets(alu[i].telefono, 10, stdin);

        printf(">>> %d. Escriba su calificacion: ", i + 1);
        fgets(alu[i].calificacion, 10, stdin);

        printf("\n");
    }

    char mayor[10];

    int may = 0, cali = 0, promedio = 0, menor = 0, desv = 0, desvR = 0;
    ;
    for (i = 0; i < n; i++)
    {

        int cali = atoi(alu[i].calificacion);
        if (cali > may)
        {
            may = cali;
        }
        if (may == cali)
        {
            strcpy(mayor, alu[i].nombre);
        }

        promedio = promedio + cali;
    }
    promedio = promedio / n;
    for (i = 0; i < n; i++)
    {
        int cali = atoi(alu[i].calificacion);
        desv = desv + pow(2, (cali - promedio));
        desvR = sqrt(desvR + (desv / (n - 1)));

    }

    printf("El nombre  mayor es %s \n", mayor);
    printf("El promedio  es %d \n", promedio);
    printf("La desviacion estandar  es %d \n", desvR);

    return 0;
}
