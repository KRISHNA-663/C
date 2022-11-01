#include<stdio.h>
int main()
{
    int i,n,num,sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("\nEnter the number:");
        scanf("%d",&num);
        if(num==0){
            continue;
        }
        sum+=num;
    }
    
        printf("\nSUM: %d",sum);
    return 0;
}
