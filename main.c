#include <stdio.h>
#include "agregarDocumento.h" 


void main(){
  int operacion;

  printf("\n\n");
  printf("\t\t//////////////////////////////////////////////////////////\n");
  printf("\t\t///////////////////// MENU PRINCIPAL /////////////////////\n");
  printf("\t\t//////////////////////////////////////////////////////////\n");
  printf("\n\t\t Seleccione la operacion que desea realizar:\n\n");
  printf("\t\t (1) - Agregar Documento\n");
  printf("\t\t (2) - Consultar Documento\n");
  printf("\t\t (3) - Buscar Documento\n");
  printf("\t\t (4) - Exportar Metadatos\n");
  printf("\t\t (5) - Recuperar Archivos\n");
  printf("\t\t (6) - Salir\n\t\t ---> ");
  scanf("%i", &operacion);

  switch(operacion){
    case 1:
      agregarUnDocumento();
      break;
    case 2:
      printf("\t\t Selecciono la operacion de Consultar Documento\n");
      break;
    case 3:
      printf("\t\t Selecciono la operacion de Buscar Documento\n");
      break;
    case 4:
      printf("\t\t Selecciono la operacion de Exportar Metadatos\n");
      break;
    case 5:
      printf("\t\t Selecciono la operacion de Recuperar Archivos\n");
      break;
    case 6:
      printf("\t\t Terminando programa...\n");
      break;

  }

}
