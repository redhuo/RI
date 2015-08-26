#include <stdio.h>
#include "agregarDocumento.h"
#include "stdlib.h"
#include "string.h"

//Metodo utilizado para agregar un nuevo documento a RIC
//No tiene entradas
//No tiene salidas

//Metodo utilizado para generar un directorio con los datos de los Archivos
//Entradas: Recibe un puntero de tipo struct llamado Metadatos
//Salida: Genera un archivo txt en la carpeta principal con los datos
int contarArchivos(){
  FILE *directorio;
  directorio = fopen("directorio.txt","a");
  int contador =0 ;
  char caracter;
  while ((caracter = fgetc(directorio))!=EOF){
    if (caracter =='\n'){
      contador++;
    }
  }
  return contador;
}

void agregarUnDocumento(){

  //Se almacena la direccion del archivo
  int flag=0;
  char direction[30];
  char title[30];
  char creator[20];
  char subject[15];
  char description[50];
  char date[9];
  char type[] = "textoplano";
  char languaje[] = "Spa";
  char contributor[10];
  char source[15];
  char relation[15];
  char coverage[15];
  char rights[20];
  float size;
  char direccion[30];
  char new[] = "cp ";
  char var[30];
  char w[20];
  float tamano;
  FILE *archivo;
  FILE *directorio;

  //Prints interaccion con usuario
  printf("\t\t______________________________________________________\n");
  printf("\t\tSeleccionó la operación de Agregar Documento\n");
  printf("\t\t______________________________________________________\n\n");

  printf("\n\t\tINGRESE LA DIRECCION DEL ARCHIVO QUE DESEA AGREGAR.\n");
  printf("\t\tY presione cualquier tecla para continuar.\n\t\tDireccion: ---->");
  scanf("%s\n", &direccion);

  //Abre y cierra el archivo para obtener el tamano del mismo
  archivo = fopen(direccion, "r");
  tamano = ftell(archivo);
  char *format = strchr (direccion, '.');
  fclose(archivo);
  //agrega direccion
  printf("Direccion  %s Tamanooooo %f",direccion, tamano);
  strcpy(direction, direccion);


  //Concatena
  strcat(strcat(new, direccion)," /home/juan/Escritorio/RI");
  system(new);
  printf("\tArchivo agregado...\n");

  //Agrega un titulo
  printf("Agregue el titulo del archivo: ");
  scanf("%s\n", var);
  strcpy(title, var);

  //Agrega nombre del creador
  printf("Agregue el nombre del creador del archivo: ");
  scanf("%s\n", var);
  strcpy(creator, var);

  //Agrega el asunto del archivo
  printf("Agregue el asunto del archivo: ");
  scanf("%s\n", var);
  strcpy(subject, var);

  //Agrega la descripcion
  printf("Agregue el descripcion del archivo: ");
  scanf("%s\n", var);
  strcpy(description, var);

  //Agrega la fecha del archivo
  printf("Agregue la fecha del archivo:\n");
  while (flag==0){
    printf("\t\t\tSeleccione el formato de la fecha que desea:");
    printf("\n\t\t\t\ta: DD/MM/YYYY\n\t\t\t\tb: MM/YYYY\n\t\t\t\tc: YYYY");
    char selec;
    scanf("%c", &selec);
    int dia=1;
    int mes=1;
    int ano=1;
    switch(selec){
      case 'a':
        printf("Ingrese el dia:");
        scanf("%i", &dia);
        printf("Ingrese el mes:");
        scanf("%i", &mes);
        printf("Ingrese el año:");
        scanf("%i", &ano);
        if((dia>=32) || (mes>=13) || (ano>=2015) || (dia<=0) || (mes<0) || (ano<0)){
          printf("Error en el formato de la fecha, vuelva a realizar la seleccion");
          flag = 0;
        }
        else{
          flag = 1;
        }
        break;
      case 'b':
        printf("Ingrese el mes:");
        scanf("%i", &mes);
        printf("Ingrese el año:");
        scanf("%i", &ano);
        if((mes>=13) || (ano>=2015) || (mes<0) || (ano<0)){
          printf("Error en el formato de la fecha, vuelva a realizar la seleccion");
          flag=0;
        }
        else{
          flag = 1;
        }
        break;
      case 'c':
        printf("Ingrese el año:");
        scanf("%i", &ano);
        if((ano>=2015) || (ano<0)){
          printf("Error en el formato de la fecha, vuelva a realizar la seleccion");
          flag=0;
        }
        else{
          flag = 1;
        }
        break;
      default:
        printf("Error, vuelva a realizar la seleccion");
    }
  }
  scanf("%s\n", var);
  strcpy(date, var);

  //Agrega el contribuyente del archivo
  printf("Agregue el nombre de algun contriyente del archivo: ");
  scanf("%s\n", var);
  strcpy(contributor, var);

  //Agrega source del archivojjh
  printf("Agregue la fuente del archivo: ");
  scanf("%s\n", var);
  strcpy(source, var);

  //Agrega la relacion del archivo
  printf("Agregue la relacion del archivo: ");
  scanf("%s\n", var);
  strcpy(relation, var);

  //Agrega la relacion del archivo
  printf("Agregue la coverage del archivo: ");
  scanf("%s\n", var);
  strcpy(coverage, var);

  //Agrega la relacion del archivo
  printf("Agregue los derechos del archivo: ");
  scanf("%s\n", var);
  strcpy(rights, var);

  directorio = fopen("directorio.txt","a");

  sprintf(w, "%i", contarArchivos());
  fputs(w, directorio);
  fputs("=", directorio);
  fputs(direction, directorio);
  fputs("=", directorio);
  fputs(title, directorio);
  fputs("=", directorio);
  fputs(creator, directorio);
  fputs("=", directorio);
  fputs(subject, directorio);
  fputs("=", directorio);
  fputs(description, directorio);
  fputs("=", directorio);
  fputs(date, directorio);
  fputs("=", directorio);
  fputs(type, directorio);
  fputs("=", directorio);
  fputs(format, directorio);
  fputs("=", directorio);
  fputs(languaje, directorio);
  fputs("=", directorio);
  fputs(contributor, directorio);
  fputs("=", directorio);
  fputs(source, directorio);
  fputs("=", directorio);
  fputs(relation, directorio);
  fputs("=", directorio);
  fputs(coverage, directorio);
  fputs("=", directorio);
  fputs(rights, directorio);
  fputs("=", directorio);


  sprintf(w, "%f", size);
  fputs(w, directorio);

  fputs("=", directorio);
  fputs("\n", directorio);

  fclose(directorio);

  ///home/juan/Desktop/asd.txt
}
