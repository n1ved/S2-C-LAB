#include <stdio.h>

void main(){
    FILE *fp;

    //Open in Write (w) mode
    fp = fopen("textdoc.txt" , "w") ;

    //Write using fprintf(pointer , format , vars)
    fprintf(fp , "Yeah this works hopefully" );

    //Aaand close that
    fclose(fp);
}