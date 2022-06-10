//programa menu
//este programa nos da las opciones numericas y tiene que ser repetitivo 
#include<stdio.h>
int main(){
int select;
do{
printf("Bienvido\n");
printf("Por favor seleccione su opcion\n");
printf("1.Registrar alumnos\n");
printf("2.Borrar alumnos\n");
printf("3.modificar alumno\n");
printf("4.Consultar ALumnos\n");
printf("5.Salir\n");
printf("ponga su opcion: ");
scanf("%d",&select);

switch(select){
case 1:

break;
case 2:

break;
case 3:

break;
case 4:

break;
case 5:

break;
default:
printf("Opcion invalida\n");
break;
}

}while(select != 5);


}

