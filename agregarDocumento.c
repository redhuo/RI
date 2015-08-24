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
  printf("\t\tLa direccion del archivo ingresado es:");

  strcat(strcat(new, direccion)," /home/juan/Escritorio/RI");
  //lee el archivo y lo cierra
  system(new);

  //variable para cargar los datos del archivo
  FILE *archivo;
  archivo = fopen(direccion, "r");
  tamano = sizeof(archivo);
  fclose(archivo);

  printf("\t\tArchivo agregado...";

  struct Metadatos datosDeArchivo;


  printf("\n\t\tIngrese el título del archivo:");
  scanf("%s\n", &datosDeArchivo.title);

  printf("\n\t\tIngrese el nombre del creador del archivo:");
  scanf("%s\n", &datosDeArchivo.creator);

  printf("\n\t\tIngrese el asunto del archivo:");
  scanf("%s\n", &datosDeArchivo.subject);

  printf("\n\t\tIngrese la descripcion archivo:");
  scanf("%s\n", &datosDeArchivo.description);

  printf("\n\t\tIngrese la fecha del archivo:");
  scanf("%s\n", &datosDeArchivo.date);

  printf("\n\t\tIngrese el tipo del archivo:");
  scanf("%s\n", &datosDeArchivo.type);

  printf("\n\t\tIngrese el formato del archivo:");
  scanf("%s\n", &datosDeArchivo.format);

  printf("\n\t\tIngrese el lenguaje del archivo:");
  scanf("%s\n", &datosDeArchivo.languaje);

  printf("\n\t\tIngrese algún contribuyente del archivo:");
  scanf("%s\n", &datosDeArchivo.contributor);

  printf("\n\t\tIngrese la raiz del archivo:");
  scanf("%s\n", &datosDeArchivo.source);

  printf("\n\t\tIngrese la relacion del archivo:");
  scanf("%s\n", &datosDeArchivo.relation);

  printf("\n\t\tIngrese el lenguaje del archivo:");
  scanf("%s\n", &datosDeArchivo.coverage);

  printf("\n\t\tIngrese el lenguaje del archivo:");
  scanf("%s\n", &datosDeArchivo.coverage);

  printf("\n\t\tIngrese el derechos del archivo:");
  scanf("%s\n", &datosDeArchivo.rights);


  ///home/juan/Desktop/asd.txt



  printf("\n\n");
}
