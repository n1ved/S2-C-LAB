#include <stdio.h>

void main(){
    FILE *fp;

    fp = fopen("textdoc.txt" , "r+");
    fprintf(fp , "Did that replace the entire file ? I hope not "); //It did 😭
    rewind(fp);
    while(feof(fp) == 0){
        printf("%c" , fgetc(fp));
    }
    fclose(fp);
}