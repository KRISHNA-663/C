/*
        Program to print 
        *
        **
        ***
        ****
        *****
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=5;i++){
        for(j=0;j<i;j++){
            printf("*");    //Take i for rows and j for columns
        }
        printf("\n");
    }
}
