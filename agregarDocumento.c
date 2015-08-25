#include <stdio.h>
#include "agregarDocumento.h"
#include "stdlib.h"
#include "string.h"

//Metodo utilizado para agregar un nuevo documento a RIC
//No tiene entradas
//No tiene salidas

struct Metadatos{
  char title[30];
  char creator[20];
  char subject[15];
  char description[50];
  char date[9];
  char type[5];
  char format[5];
  int identifier;
  char languaje[3];
  char contributor[10];
  char source[15];
  char relation[15];
  char coverage[15];
  char rights[20];
  int size;
};



//Metodo utilizado para generar un directorio con los datos de los Archivos
//Entradas: Recibe un puntero de tipo struct llamado Metadatos
//Salida: Genera un archivo txt en la carpeta principal con los datos
void generarDirectorio(struct Metadatos x){
  printf("Nombre del archivo%s\n", x.title);

}




void agregarUnDocumento(){

  //Se almacena la direccion del archivo
  char direccion[80];
  char new[] = "cp ";
  char var[30];
  int tamano;
  FILE *archivo;

  //Prints interaccion con usuario
  printf("\t\t______________________________________________________\n");
  printf("\t\tSeleccionó la operación de Agregar Documento\n");
  printf("\t\t______________________________________________________\n\n");

  printf("\n\t\tINGRESE LA DIRECCION DEL ARCHIVO QUE DESEA AGREGAR.\n");
  printf("\t\tY presione cualquier tecla para continuar.\n\t\tDireccion: ---->");
  scanf("%s\n", &direccion);

  //Abre y cierra el archivo para obtener el tamano del mismo
  archivo = fopen(direccion, "r");
  tamano = sizeof(archivo);
  fclose(archivo);


  //Concatena
  strcat(strcat(new, direccion)," /home/juan/Escritorio/RI");
  system(new);
  
  //variable para cargar los datos del archivo
  struct Metadatos documento;

  //Agrega un titulo
  printf("Agregue el titulo del archivo");
  scanf("%s\n", var);
  strcpy(documento.title, var);

  //Agrega nombre del creador
  printf("Agregue el nombre del creador del archivo");
  scanf("%s\n", var);
  strcpy(documento.creator, var);

  //Agrega la fecha del archivo
  printf("Agregue la fecha del archivo");
  scanf("%s\n", var);
  strcpy(documento.date, var);

  //Agrega el asunto del archivo
  printf("Agregue el asunto del archivo");
  scanf("%s\n", var);
  strcpy(documento.subject, var);

  //Agrega la descripcion
  printf("Agregue el descripcion del archivo");
  scanf("%s\n", var);
  strcpy(documento.description, var);

  //Agrega el contribuyente del archivo
  printf("Agregue el nombre de algun contriyente del archivo");
  scanf("%s\n", var);
  strcpy(documento.contributor, var);

  //Agrega source del archivo
  printf("Agregue la fuente del archivo");
  scanf("%s\n", var);
  strcpy(documento.source, var);

  //Agrega la relacion del archivo
  printf("Agregue la relacion del archivo");
  scanf("%s\n", var);
  strcpy(documento.relation, var);

  //Agrega la relacion del archivo
  printf("Agregue la coverage del archivo");
  scanf("%s\n", var);
  strcpy(documento.coverage, var);

  //Agrega la relacion del archivo
  printf("Agregue los derechos del archivo");
  scanf("%s\n", var);
  strcpy(documento.rights, var);


  //Llamado a la funcion  que genera el directorio
  generarDirectorio(documento);


  ///home/juan/Desktop/asd.txt
}
