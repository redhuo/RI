#include "stdio.h"
void main(){
  ///home/juan/Escritorio/YGotayCortes1212.pdf
  FILE *archivo;

  archivo = fopen("/home/juan/Escritorio/YGotayCortes1212.pdf", "r");
  char caracter[100];

  printf("Agregando los valores del pdf\n\n");
  while(!feof(archivo)){
    fgets(caracter, 150, archivo);
    printf("%s", caracter);
  }

    printf("Terminando los valores del pdf\n\n");
    fclose(archivo);
}
