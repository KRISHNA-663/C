#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b :");
    scanf("%d%d",&a,&b);
    printf("Bfr swapping value of a:%d and b:%d",a,b); //Just to recognize the swapping
    a=a*b;
    b=a/b;
    a=a/b;
    /*a=a+b;
    b=a-b;    This can also be used!!!
    a=a-b;*/
    printf("\nThe value of a :%d  and b :%d",a,b);
    return 0;
}

