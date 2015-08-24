#include <stdio.h>
#include "agregarDocumento.h"
#include "stdlib.h"
#include "string.h"
#include <errno.h>
#include <unistd.h>

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

void agregarUnDocumento(){

  //Se almacena la direccion del archivo
  char direccion[80];
  char new[] = "cp ";
  char var[30];
  char newDos[]=" ";
  int tamano;

  char cwd [100];
  if (getcwd(cwd, sizeof(cwd)) != NULL){
      fprintf(stdout, "Current working dir: %s\n", cwd);
  }
  else{
      perror("getcwd() error");
      return;
  }
  strcat(cwd,"\\");
  strcat(cwd,"RIDIR");
  mkdir(cwd);


  //Prints interaccion con usuario
  printf("\t\t______________________________________________________\n");
  printf("\t\tSeleccionó la operación de Agregar Documento\n");
  printf("\t\t______________________________________________________\n\n");

  printf("\n\t\tINGRESE LA DIRECCION DEL ARCHIVO QUE DESEA AGREGAR.\n");
  printf("\t\tY presione cualquier tecla para continuar.\n\t\tDireccion: ---->");
  scanf("%s\n", &direccion);


  strcat(strcat(new, direccion),strcat(newDos, cwd));

  //lee el archivo y lo cierra
  printf("el new es %s\n",new);
  system(new);
  printf("\t\tArchivo agregado...\n");


  //variable para cargar los datos del archivo
  struct Metadatos documento;


  char date[9];
  char type[5];
  char format[5];
  int identifier;
  char languaje[3];

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


  ///home/juan/Desktop/asd.txt



  printf("\n\n");
}
