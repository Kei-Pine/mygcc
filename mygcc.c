#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    if (argc == 3) {
        // Compile the C source file
        char compileCommand[100];
        snprintf(compileCommand, sizeof(compileCommand), "gcc %s", argv[1]);
        system(compileCommand);

        // Rename the compiled output to the desired executable filename
        char moveCommand[100];
        snprintf(moveCommand, sizeof(moveCommand), "move a.exe %s.exe", argv[2]);
        system(moveCommand);

        printf("A file named %s.exe is created\n", argv[2]);
    }
    else if (argc == 2) {
        char exefilename[100];
        puts("Decide filename");
        scanf("%s", exefilename);

        // Compile the C source file
        char compileCommand[100];
        snprintf(compileCommand, sizeof(compileCommand), "gcc %s", argv[1]);
        system(compileCommand);

        // Rename the compiled output to the user-specified executable filename
        char moveCommand[100];
        snprintf(moveCommand, sizeof(moveCommand), "move a.exe %s.exe", exefilename);
        system(moveCommand);

        printf("A file named %s.exe is created\n", exefilename);
    }
    else {
        puts("Usage: mygccc target.c exefilename");
    }

    return 0;
}
