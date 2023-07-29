#include <stdio.h>
#include <math.h>


void main(){
  int a,b,c,d;
  float qroot[2];
  scanf("%d%d%d",&a,&b,&c);
  d = (b*b) - (4*a*c);
  if( d > 0){
    qroot[0] = ((-b) + sqrt(d))/(2.0*a);
    qroot[1] = ((-b) - sqrt(d))/(2.0*a);
    printf("Two Real roots exists \nx = %f\nx=%f\n",qroot[0],qroot[1]);
  }
  else if(d == 0){
    qroot[0] = -b /(2.0*a);
    printf("One Real root exist \nx = %f\n",qroot[0]);
  }
  else{
    d = -d;
    qroot[0] = -b/(2.0 * a);
    qroot[1] = sqrt(d)/(2.0*a);
    printf("No real root exists \nx = %f + i%f\nx = %f - i%f\n",qroot[0],qroot[1],qroot[0],qroot[1]);
  }
}
