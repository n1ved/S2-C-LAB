#include <stdio.h>

void main(){
        FILE *fp;
        fp = fopen("textdoc.txt" , "r");
        // printf("%s" , fscanf(fp , "%s")); DIDN'T WORK DON'T KNOW WHY
        while(feof(fp) == 0){
            printf("%c" , fgetc(fp));
        }
        fclose(fp);
}