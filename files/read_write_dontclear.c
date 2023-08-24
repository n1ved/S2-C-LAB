#include <stdio.h>

void main(){
    FILE *fp;
    fp = fopen("textdoc.txt" , "r+");
    // feof(fp); // Wouldn't this seek to eof ? //NO IM JUST STUPID
    fseek(fp , 0 ,SEEK_END); //this works !
    fprintf(fp , "at least this doesn't replace ... maybe this ... now orginal file doesn't even exist"); // it didnt // and it did
    // fseek(fp , 0 , SEEK_SET); //this doesn't work 

    // rewind(fp); //No doesnt work either
    
    //bruh it supposed to read in first place 
    while(feof == 0){
        printf("%c" , fgetc(fp));
    }
    fclose(fp);
}