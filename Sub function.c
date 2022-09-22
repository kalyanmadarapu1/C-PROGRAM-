#include<stdio.h>
int main()
{
    int sub(int,int);
    int x,n;
    printf("enter the numbers:");
    scanf("%d%d",&x,&n);
    printf("sub=%d",sub(x,n));
    return 0;
}
int sub(int x,int n)
{
    return(x-n);
}
