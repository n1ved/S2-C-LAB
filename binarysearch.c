#include <stdio.h>

void main(){
  int n,s,flag=-1;
  scanf("%d",&n);
  int arr[n] , f=0 , l=n ,m;
  for(int i=0 ; i<n ;i++){
    scanf("%d",&arr[i]);
  }
  scanf("%d",&s);
  for(int i=0 ; i<n ; i++){
    m = (f+l)/2;
    if(arr[m] == s){
      flag = m;
      break;
    }
    else if(arr[m]>s){
      l = m;
    }
    else
      f=m;
  }

  printf("%d\n",flag);
}
