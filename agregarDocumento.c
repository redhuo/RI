#include <stdio.h>
#include "agregarDocumento.h"
#include "stdlib.h"

//Metodo utilizado para agregar un nuevo documento a RIC
//No tiene entradas
//No tiene salidas


void agregarUnDocumento(){
  //Se almacena la direccion del archivo
  char direccion[20];

  //variable para cargar los datos del archivo
  FILE *archivo;

  //Prints interaccion con usuario
  printf("\t\t______________________________________________________\n");
  printf("\t\tSeleccionó la operación de Agregar Documento\n");
  printf("\t\t______________________________________________________\n\n");

  printf("\n\t\tINGRESE LA DIRECCION DEL ARCHIVO QUE DESEA AGREGAR.\n");
  printf("\t\t Y presione cualquier tecla para continuar.\n\t\tDireccion: ---->");
  scanf("%s\n", &direccion);
  printf("\t\tLa direccion del archivo ingresado es: %s\n", direccion);

  //lee el archivo y lo cierra
  system("cp /home/jimmy/Desktop/hola.txt /home/jimmy/Desktop/RI");
  printf("Archivo agregado...");


  printf("\n\n");
}
