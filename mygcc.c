#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    char command[256];
    sprintf(command, "gcc %s",argv[1]);
    system(command);
    sprintf(command, "move a.exe %s.exe",argv[2]);
    system(command);
    return 0;
}
