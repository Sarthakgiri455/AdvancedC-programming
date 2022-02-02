#include<stdio.h>
#include<stdlib.h>
int* function(int*matrix, int*list, int size)
{
    int k=size/2;
    for(int j=0;j<k;j++)
    {
        matrix[j]=(j+1);
    }
    int q=25-k;
    int s=k;
    for(int j=0;j<k;j++)
    {
        matrix[q]=(s+1);
        s+=1;
        q+=1;
    }
    return matrix;
}
int main()
{
    printf("Enter number of elements, only even input allowed  ");
    int d;
    scanf("%d", &d);
    int list[d];
    int* matrix=(int*)calloc(25,sizeof(int));
    int* matrix2;
    printf("Enter the list elements  :");
    for(int j=0;j<d;j++)
    {
        scanf("%d",&list[j]);
        
    }
    matrix2=function(matrix, list, d);
    for(int j=0;j<5;j++)
    {
        for(int k=0;k<5;k++)
        {
            printf("%d ", *(matrix2+j*5+k));
        }
        printf("\n");
    }
    
    
}
