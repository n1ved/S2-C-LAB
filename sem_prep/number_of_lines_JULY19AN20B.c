#include <stdio.h>

void main(){
    FILE *fp ;
    int count = 0 ;
    fp = fopen("test.txt" , "r");
    while(feof(fp) == 0){
        if(fgetc(fp) == '\n')
            count++;
    }
    fclose(fp)
    printf("%d\n",count);
}