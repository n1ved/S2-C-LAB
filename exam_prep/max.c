#include <stdio.h>
void main(){
  int n;
  scanf("%d" , &n);
  int arr[n];
  for(int i=0 ; i<n ; i++)
    scanf("%d",&arr[i]);

  int l=arr[0];
  for(int i=0 ; i<n ; i++){
    if(arr[i] > l)
      l = arr[i];
  }

  printf("%d\n",l);
}
