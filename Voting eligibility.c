#include<stdio.h>
int main()
{
    int a,b=18,c,d;
    char integer;
printf("enter the age:");
    scanf("%d",&a);
    c=b-a;
    
 if(a<0)
    {
        printf("age cannot be negative");
    }
 else if(d!=integer)
 {
     printf("\nenter a valid age:");
 }
    else if(a>=b)
    {
        printf("your are eligible for voting");
    }
 else if(a<b)
 {
     printf("\nyou are not eligible for voting");
     printf("\n you have,%d years for voting",c);
 }
  
   
    
 
    return 0;
}
