#include <stdio.h>

void main(){
  int m,n,k,sum;
  scanf("%d%d%d",&m,&n,&k);
  int a[m][n],b[n][k],c[m][k];

  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);

  for(int i=0; i<n;i++)
    for(int j=0; j<k;j++)
      scanf("%d",&b[i][j]);

  for(int i=0;i<m;i++){
    for(int j=0;j<k;j++){

       sum=0;
       for(int d=0;d<n;d++){
         sum += a[i][d]*b[d][j];
       }
       c[i][j] = sum;
    }
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<k;j++){
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }

}
