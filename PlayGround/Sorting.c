#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s;
    s=arr[0];
    for(int i=0;i<N;i++)
    {
        if(arr[i]<s)
        {
            s=arr[i];
        }
    }
    printf("%d",s);
    
}
