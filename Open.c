//#include <stdio.h>
//#include <sys/types.h>
//#include <sys/stat.h>
//#include <unistd.h>

//struct stat st = {0};

//int main(){

/*if (stat(int result = mkdir("/home/jimmy/Desktop/directory", &st) == -1) {
    mkdir("/Desktop/directory";
}*/
//int result = mkdir("/home/jimmy/Desktop/holis");
//return 0;

//Muahahahahahhaahha
//lololoops
//}
/*int main()
{
    FILE *str,*cptr;

    if((str=fopen("hey.pdf","rb"))==NULL)
    {
        fprintf(stderr,"Error\n");
        //return 1;
    }

    if((cptr=fopen("copyno.pdf","wb"))==NULL)
    {
        fprintf(stderr,"Error\n");
        //return 1;
    }

    fseek(str, 0, SEEK_END);
    long size=ftell(str);
    fseek(str, 0, SEEK_SET);
    char b[2];
    int i;
    for(i=0;i<size;i++)
    {
        fread(b,1,1,str);
        fwrite(b,1,1,cptr);
    }

    fseek(cptr, 0, SEEK_END);
    fclose(str);
    fclose(cptr);

    return 0;
}*/
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

int main() {
   char cwd[1024];
   if (getcwd(cwd, sizeof(cwd)) != NULL)
       fprintf(stdout, "Current working dir: %s\n", cwd);
   else
       perror("getcwd() error");
   return 0;
}