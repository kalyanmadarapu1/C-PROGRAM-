#include<stdio.h>
int main()
{
    int add(int,int);
    int x,n;
    printf("enter the numbers:");
    scanf("%d%d",&x,&n);
    printf("sum=%d",add(x,n));
    return 0;
}
int add(int x,int n)
{
    return(x+n);
}
