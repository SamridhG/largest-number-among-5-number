#include<stdio.h>
#include<stdlib.h>
int pass(int,int,int,int,int);//declaration of pass function
int largest(int,int);//declaration of largest function
int main()
{
  int a,b,c,d,e;
  printf("Enter the five elements:\n");
  scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
  int k=pass(a,b,c,d,e);// calling of function
  printf("\nLargest number among all:%d",k);
}
int pass(int a,int b,int c,int d,int e)// function define
{
      int O=largest(a,largest(b,largest(c,largest(d,e))));//repetation calling 
      return O;
}
int largest(int a,int b)// function define
{
    return a>b?a:b;
}
