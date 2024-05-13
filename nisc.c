#include<stdio.h>
#include<conio.h>
void main()
{
  float average;
  int v,sum,n;
  sum=0;n=0;
  Jump:
  v=1;
  if(v<20)
  {
    sum=sum+v;
    v=v+2;
    n++;
    goto Jump;
  }
  average=sum/n;
  printf("average=%f",average);
  getch();
}