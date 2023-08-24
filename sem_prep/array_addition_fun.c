#include <stdio.h>

void sumMatrix(int m,int n,int p,int q,int a[m][n],int b[p][q]);

void main(){

    int m,n,p,q;
    printf("Enter size of matrix a : ");
    scanf("%d%d",&m,&n);
    printf("Enter size of matrix b : ");
    scanf("%d%d",&p,&q);

    int a[m][n],b[p][q];

    for(int i=0 ; i<m ; i++)
        for(int j=0 ; j<n ; j++)
            scanf("%d",&a[i][j]);

     for(int i=0 ; i<p ; i++)
        for(int j=0 ; j<q ; j++)
            scanf("%d",&b[i][j]);

    sumMatrix(m,n,p,q,a,b);

    for(int i=0 ; i<p ; i++){
        for(int j=0 ; j<q ; j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

}
void sumMatrix(int m,int n,int p,int q,int a[m][n],int b[p][q]){
    for (int i=0 ; i<m ; i++)
        for(int j=0 ; j<n ; j++)
            a[i][j] += b[i][j];
}