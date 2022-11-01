/*
        Nested for loop
        Problem for printing,      

                *****
                *****
                *****
                *****
                *****
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("*");    //Take i for rows and j for columns
        }
        printf("\n");
    }
}

