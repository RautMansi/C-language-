#include<stdio.h>
int main()
{
  int m=30;
  int n=10;
  int multi=0;

  multi=m*n;
  printf("m value=%d/n",m);
  printf("n value=%d/n",n);
  printf("multi value=%d/n",multi);

  printf("m address=%d/n",&m);
  printf("n address=%d/n",&n);
  printf("multi address=%d/n",&multi);
  return 0;
}
