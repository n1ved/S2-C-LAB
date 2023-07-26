#include <stdio.h>
#include <string.h>

void main(){
  char a[100],b[100];
  int alen =0 , blen = 0; //to count lenght

  scanf("%s",a);
  scanf("%s",b);
  
  for(int i=0 ; a[i] != '\0' ; i++)
    alen++;  //count lenght of a

  for(int i=0 ; b[i] != '\0' ; i++)
    blen++; //count lenght of b

  int limit = alen + blen ;


  for(int i=alen ; i<limit ; i++){
    a[i] = b[i-alen];
  }


  a[limit] = '\0';


  printf("%s\n",a);
}
