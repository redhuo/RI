#include <stdio.h>
#include "agregarDocumento.h"
#include "stdlib.h"
#include "string.h"

//Metodo utilizado para agregar un nuevo documento a RIC
//No tiene entradas
//No tiene salidas


void agregarUnDocumento(){
  //Se crea un struct
  struct Metadatos{
    char title;
    char creator;
    char subject;
    char description;
    char date;
    char type;
    char format;
    char identifier;
    char languaje;
    char contributor;
    char source;
    char relation;
    char coverage;
    char rights;
    int size;
  };


  //Se almacena la direccion del archivo
  char direccion[80];
  char new[] = "cp ";
  char var[30];
  int tamano;



  //Prints interaccion con usuario
  printf("\t\t______________________________________________________\n");
  printf("\t\tSeleccionó la operación de Agregar Documento\n");
  printf("\t\t______________________________________________________\n\n");

  printf("\n\t\tINGRESE LA DIRECCION DEL ARCHIVO QUE DESEA AGREGAR.\n");
  printf("\t\tY presione cualquier tecla para continuar.\n\t\tDireccion: ---->");
  scanf("%s\n", &direccion);

  strcat(strcat(new, direccion)," /home/juan/Escritorio/RI");
  //lee el archivo y lo cierra
  system(new);

  //variable para cargar los datos del archivo

  printf("\t\tArchivo agregado...\n");


  ///home/juan/Desktop/asd.txt



  printf("\n\n");
}
