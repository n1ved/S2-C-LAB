#include <stdio.h>

void main(){
  int n;
  scanf("%d" , &n);
  int arr[n] , flag = 0;

  for(int i=0 ; i<n ; i++)
    scanf("%d",&arr[i]);

  int l=arr[0];

  for(int i=0 ; i<n ; i++){
    if(arr[i] > l){
      l = arr[i];
      flag = i;
    }
  }

  int sl = (flag == 0) ? arr[1] : arr[0] ;
  
  for(int i=0 ; i<n ; i++){
    if(arr[i] == l)
      continue;
    if(arr[i] > sl)
      sl = arr[i];
  }

  printf("%d\n" , sl);
  
}
