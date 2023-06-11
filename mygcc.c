#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    if(argc==3){
    char command[100];
    sprintf(command, "gcc %s",argv[1]);
    system(command);
    sprintf(command, "move a.exe %s.exe",argv[2]);
    system(command);
    printf("a file : %s.exe is created\n",argv[2]);
    }

    else if (argc==2){
               
        char exefilename[100];
        puts("decide filename");
        scanf("%s",&exefilename);

        char command[100];
        sprintf(command, "gcc %s",argv[1]);
        system(command);
 
        sprintf(command, "move a.exe %s.exe",exefilename);
        system(command);

         printf("a file : %s.exe is created\n",exefilename);
    }

    else puts("Usage:mygccc target.c exefilename ");
    



    return 0;
}