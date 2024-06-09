#include <stdio.h>
#include <string.h>

int main (){
    
    int len;
    char origen[]="origen";
    char destino[7];
    strcpy(destino, origen);
    printf ("destino: %s ", destino);
    return 0;

    }