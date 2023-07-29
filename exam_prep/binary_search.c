#include <stdio.h>

void main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  int f=0,l=n,m, flag = -1,s;
  for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
  scanf("%d",&s);
  for(int i=0;i<n;i++){
    m = (f+l)/2;
    if(arr[m] == s){
      flag = m;
      break;
    }
    else if(arr[m]>s)
      l = m;
    else
      f = m;
  }

  if(flag != -1)
    printf("Found at index %d\n",flag);
  else
    printf("Not found\n");
    
}
