#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
 int numControl;
 char Ap[50];
 char Am[50];
 char nombre[50];
 char direccion[50];
 char telefono[50];
 char email[50];
}talumno;

void continuar()
{
 printf("Presione una tecla para continuar\n\n");
}

void crear()
{
 FILE *arch;
 arch = fopen("Examen6.dat", "wb");
 if (arch == NULL)
 exit(1);
 fclose(arch);
 continuar();
}

void cargar()
{
 FILE *arch;
 arch = fopen("Examen6.dat", "ab");
 if (arch == NULL)
 exit(1);
 talumno alumno;
 char numControl[50];

 printf("Ingrese el numero de control:");
 fgets(numControl,50,stdin);
 alumno.numControl = atoi(numControl);

 printf("Ingrese el apellido paterno:");
 fgets(alumno.Ap,50,stdin);

 printf("Ingrese el apellido materno:");
 fgets(alumno.Am,50,stdin);

 printf("Ingrese el nombre del alumno:");
 fgets(alumno.nombre,50,stdin);

 printf("Ingrese la direccion del alumno:");
 fgets(alumno.direccion,50,stdin);

 printf("Ingrese el telefono del alumno:");
 fgets(alumno.telefono,50,stdin);

 printf("Ingrese el email del alumno:");
 fgets(alumno.email,50,stdin);

 fwrite(&alumno, sizeof(talumno), 1, arch);
 fclose(arch);
 continuar();
}

void listado()
{
 FILE *arch;
 arch = fopen("Examen6.dat", "rb");
 if (arch == NULL)
 exit(1);
 talumno alumno;
 fread(&alumno, sizeof(talumno), 1, arch);
 while (!feof(arch))
     {
       printf("\n%i \n%s \n%s \n%s \n%s \n%s \n%s\n",alumno.numControl,alumno.Ap,alumno.Am,alumno.nombre,alumno.direccion,alumno.telefono,alumno.email);
       fread(&alumno,sizeof(talumno), 1, arch);
     }
      fclose(arch);
      continuar();
}

void consulta()
{
 FILE *arch;
 arch = fopen("Examen6.dat", "rb");
 if (arch == NULL)
 exit(1);
 printf("Ingrese el codigo de numero de control a consultar:");
 int cod;
 scanf("%i", &cod);

 talumno alumno;
 int existe = 0;
 fread(&alumno, sizeof(talumno), 1, arch);
 while (!feof(arch))
      {
       if (cod == alumno.numControl)
        {
         printf("\n%i \n%s \n%s \n%s \n%s \n%s \n%s\n",alumno.numControl,alumno.Ap,alumno.Am,alumno.nombre,alumno.direccion,alumno.telefono,alumno.email);
         existe = 1;
         break;
        }
       fread(&alumno,sizeof(talumno), 1, arch);
      }
 if (existe == 0)
   printf("No existe un alumno con dicho codigo\n");
 fclose(arch);
 continuar();
}

void modificacion()
{
 FILE *arch;
 arch = fopen("Examen6.dat", "r+b");
 if (arch == NULL)
    exit(1);
 printf("Ingrese el numero de control a modificar:");
 int cod;
 scanf("%i", &cod);
 talumno alumno;
 int existe = 0;
 fread(&alumno, sizeof(talumno), 1, arch);
 while (!feof(arch))
     {
      if (cod == alumno.numControl)
         {
          printf("\n%i \n%s \n%s \n%s \n%s \n%s \n%s\n",alumno.numControl,alumno.Ap,alumno.Am,alumno.nombre,alumno.direccion,alumno.telefono,alumno.email);
          int ch;
          while((ch = getchar()) != '\n' && ch != EOF);

          printf("Ingrese el apellido paterno del alumno:");
          fgets(&alumno.Ap, 50, stdin);

          printf("Ingrese el apellido materno del alumno:");
          fgets(&alumno.Am, 50, stdin);

          printf("Ingrese el nombre del alumno:");
          fgets(&alumno.nombre, 50, stdin);

          printf("Ingrese la direccion del alumno:");
          fgets(&alumno.direccion, 50, stdin);

          printf("Ingrese el telefono del alumno:");
          fgets(&alumno.telefono, 50, stdin);

          printf("Ingrese el email del alumno:");
          fgets(alumno.email,50,stdin);

          int pos = ftell(arch) - sizeof(talumno);
          fseek(arch, pos, SEEK_SET);
          fwrite(&alumno, sizeof(talumno), 1, arch);
          printf("Se modifico el alumno\n");
          existe = 1;
          break;
        }
     fread(&alumno, sizeof(talumno), 1, arch);
    }
    if (existe == 0)
    printf("No existe un numuero de control\n");
    fclose(arch);
    continuar();
}

int main()
{
char opcion[5] = "";
int opcion2 = 0;
do
{
 printf("1 - Crear un archivo binario llamado \"Examen6.dat\"\n");
 printf("2 - Carga de registros de tipo tAlumno\n");
 printf("3 - Listado completo de los alumnos.\n");
 printf("4 - Consulta de un alumno por su numero de control.\n");
 printf("5 - Modificacion del todos los campos de alumno. \n");
 printf("6 - Finalizar\n");
 printf("Ingrese su opcion:\n");
 fgets(&opcion, 5, stdin);
 opcion2 = atoi(opcion);
 switch (opcion2)
       {
        case 1:
         crear();
         break;

        case 2:
         cargar();
         break;

        case 3:
         listado();
         break;

        case 4:
         consulta();
         break;

        case 5:
         modificacion();
         break;
       }
     } while (opcion2 != 6);
 return 0;
}
