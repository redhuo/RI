#include <stdio.h>
#include "string.h"
#include "time.h"
#include <windows.h> // esta libreria es la que nos permite usar Sleep()



/*  - La siguiente funcion se encarga de unir dos archivos pdftk
    - Recibe el nombre de los archivos que se desean concatenar
    - La salida es un nuevo documento pdf.
*/
void PDF_PDF(){

  /*Root es el valor donde se almacenara el comando que posteriormente utilizara
      la funcion del sistema
  */
  
  char root[200] = "pdftk "
  strcat(strcat(root, direccion1), " ");
  strcat(strcat(root, direccion2), " cat output fusion.pdf";
  system(root);
}


//Los siguientes comandos son los que utiliza el sistema para generar el pdf
//enscript -p output.ps /home/juan/Escritorio/caca.txt
//ps2pdf output.ps nuevo.pdf


/*  - La siguiente funcion se encarga de coonvertir archivos en formato txt a pdf
    - Recibe como parametro el archivo de texto que se desea coonvertir
    - La salida de la funcion  es el archivo generado en la carpeta donde se encuentra
        la tarea.
    - Se retorna el nombre del nuevo archivo generado
*/

char* txtPDF(){
  //Variables necesarias para generar un nuevo pdf
  char dirTxt[100] = {"/home/juan/Escritorio/README.txt"};
  char concat[]= {"enscript -p output.ps "};
  char nombre[100], substring[100] = "ps2pdf output.ps ";

  //Se concatena para que la funcion system realice su funcion
  strcat(concat, dirTxt);

  //Se realiza la primer parte del pdf
  system(concat);

  printf("Ingrese el nombre que desea para el nuevo archivo: --->");
  scanf("%s", &nombre);

  //Se agrega la extencion al nombre ingresado
  strcat(nombre, ".pdf");

  strcat(substring, nombre);

  //Se genera la salida deseada
  system(substring);

  return *nombre;
}
//  txtToPDF();
