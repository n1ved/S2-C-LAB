#include <stdio.h>

void main(){
  int n;
  scanf("%d",&n);

  int arr[n],s,flag=-1;

  for(int i=0 ; i<n ;i++){
    scanf("%d",&arr[i]);
  }
  
  scanf("%d",&s);

  for(int i=0;i<n;i++){
    if(arr[i] == s){
      flag = i ;
    }
  }

  if(flag != -1)
    printf("found at index %d\n",flag);
  else
    printf("not found\n");
}
