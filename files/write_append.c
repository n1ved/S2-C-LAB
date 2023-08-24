#include <stdio.h>

void main(){
    FILE *fp;

    fp = fopen("textdoc.txt" , "a");

    fprintf(fp , "And appending also works ... probably");

    fclose(fp);
}