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
void program()
{
typedef struct alumnos alum;
    char nC[10];
    int i;
    alum alumno[20];
    printf("numero de alumnos:");
    int n = atoi(fgets(nC, 10, stdin));

    for (i = 0; i < n; i++)
    {
        printf("Alumno %d", i + 1);

        printf(" Escriba el nombre: ");
        fgets(alumno[i].nombre, 10, stdin);

        printf("Escriba su apellido paterno: ");
        fgets(alumno[i].apellidos, 10, stdin);

        printf("Escriba su no Control: ");
        fgets(alumno[i].noControl, 10, stdin);

        printf("Escriba su telefono: ");
        fgets(alumno[i].telefono, 10, stdin);

        printf("Escriba su calificacion:");
        fgets(alumno[i].calificacion, 10, stdin);

    }

    char mayor[10];
    int may = 0;
    int calif = 0;
    int promedio = 0;
    int menor = 0;
    int desvia = 0;
    int desviaE = 0;
    ;
    for (i = 0; i < n; i++)
    {

        int calif = atoi(alumno[i].calificacion);
        if (calif > may)
        {
            may = calif;
        }
        if (may == calif)
        {
            strcpy(mayor, alumno[i].nombre);
        }

        promedio = promedio + calif;
    }
    promedio = promedio / n;
    for (i = 0; i < n; i++)
    {
        int calif = atoi(alumno[i].calificacion);
        desvia = desvia + pow(2,(calif - promedio));
        desviaE = sqrt(desviaE + (desvia / (n - 1)));

    }

    printf("El nombre  mayor es %s \n", mayor);
    printf("El promedio  es %d \n", promedio);
    printf("La desviacion estandar  es %d \n", desvia);

}

int main()
{
    program();

    return 0;
}
