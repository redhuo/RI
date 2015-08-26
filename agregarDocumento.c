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
  char date[15];
  char type[25];
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
  scanf(" %s", &direccion);

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
  printf("\n\t\tAgregue el titulo del archivo: ---> ");
  scanf(" %s", var);
  strcpy(title, var);

  //Agrega nombre del creador
  printf("\n\t\tAgregue el nombre del creador del archivo: ---> ");
  scanf(" %s", var);
  strcpy(creator, var);

  //Agrega el asunto del archivo
  printf("\n\t\tAgregue el asunto del archivo: ---> ");
  scanf(" %s", var);
  strcpy(subject, var);

  //Agrega la descripcion
  printf("\n\t\tAgregue el descripcion del archivo: ---> ");
  scanf(" %s", var);
  strcpy(description, var);

  //Agrega la fecha del archivo
  printf("\n\t\tAgregue la fecha del archivo: ---> ");
  while (flag==0){
    printf("\n\t\t\tSeleccione el formato de la fecha que desea:");
    printf("\n\t\t\t\ta: DD/MM/YYYY\n\t\t\t\tb: MM/YYYY\n\t\t\t\tc: YYYY\n\t\t\t\t--->");
    char selec;
    scanf(" %c", &selec);
    int dia=1,mes=1,ano=1;

    switch(selec){
      case 'a':

        printf("\n\t\t\tIngrese el dia:");
        scanf(" %i", &dia);
        printf("\n\t\t\tIngrese el mes:");
        scanf(" %i", &mes);
        printf("\n\t\t\tIngrese el año:");
        scanf(" %i", &ano);

        if((dia>=32) || (mes>=13) || (ano>=2015) || (dia<=0) || (mes<0) || (ano<0)){
          printf("Error en el formato de la fecha, vuelva a realizar la seleccion");
          flag = 0;
        }

        else{
          flag = 1;
        }

        break;
      case 'b':
        printf("\t\t\tIngrese el mes:");
        scanf(" %i", &mes);
        printf("\t\t\tIngrese el año:");
        scanf(" %i", &ano);
        if((mes>=13) || (ano>=2015) || (mes<0) || (ano<0)){
          printf("\t\t\tError en el formato de la fecha, vuelva a realizar la seleccion");
          flag=0;
        }
        else{
          flag = 1;
        }
        break;
      case 'c':
        printf("\t\t\tIngrese el año:");
        scanf(" %i", &ano);
        if((ano>=2015) || (ano<0)){
          printf("\n\n\t\t\tError en el formato de la fecha, vuelva a realizar la seleccion");
          flag=0;
        }
        else{
          flag = 1;
        }
        break;
      default:
        printf("\n\t\t\tError, vuelva a realizar la seleccion");
        break;
    }
  }

  scanf(" %s", var);
  strcpy(date, var);

  printf("\n\t\tAgregue el tipo del archivo:\n ");
  flag = 0;
  int qwe, t=0;

  char *types[]= {"book", "bacherlorThesis","masterThesis","doctoralThesis","article", "report","book","bookPart","review","conferenceObject","lectura","workingPaper","preprint","contributionToPeriodical","patent","other"};

  printf("\n ");
	for(t=0;t<16; t++){
		printf("\n\t\t\t%i. %s ",t, types[t]);
	}

  while(flag==0){
    printf("\n\t\tIngrese el valor del tipo que desea ---> ");
    scanf("%i", &qwe);
      if ((qwe<16)&&(qwe>0)){
        strcpy(type, types[qwe]);
        flag=1;
      }
      else{
        printf("\nError, ha introducido un valor invalido, intentelo de nuevo");
      }

    }

  //Agrega el contribuyente del archivo
  printf("\n\t\tAgregue el nombre de algun contriyente del archivo: ---> ");
  scanf("%s", var);
  strcpy(contributor, var);

  //Agrega source del archivojjh
  printf("\n\t\tAgregue la fuente del archivo: ---> ");
  scanf(" %s", var);
  strcpy(source, var);

  //Agrega la relacion del archivo
  printf("\n\t\tAgregue la relacion del archivo: ---> ");
  scanf(" %s", var);
  strcpy(relation, var);

  //Agrega la relacion del archivo
  printf("\n\t\tAgregue la coverage del archivo: --->");
  scanf(" %s", var);
  strcpy(coverage, var);

  //Agrega la relacion del archivo
  printf("\n\t\tAgregue los derechos del archivo: ---> ");
  scanf(" %s", var);
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
