#include <stdio.h>
int main()
{
    int a=1,*b,n;
    b=&a;
    printf("Enter the limit :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf(" %d",*b*i*2);
    }
    return 0;
}

