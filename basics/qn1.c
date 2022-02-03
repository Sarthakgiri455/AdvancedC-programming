#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter the number of students :");
    int studentnumber;
    float class1002=0;
    float class1003=0;
    float class2002=0;
    float class3001=0;
    
    scanf("%d", &studentnumber);
    int* matrix2=(int*)calloc(studentnumber*4,sizeof(int));
    
    
    
    for(int j=0;j<studentnumber;j++)
    {
        for(int k=0;k<4;k++)
        {
            if(k==0)
            {
                printf("Enter the marks of student is CSE 1002:%d ",j+1);
                scanf("%d", (matrix2+j*4+k));
                class1002+=*(matrix2+j*4+k);
                continue;
            }
            if(k==1)
            {
                printf("Enter the marks of student is CSE 1003:%d ",j+1);
                scanf("%d", (matrix2+j*4+k));
                class1003+=*(matrix2+j*4+k);
                continue;
            }
            if(k==2)
            {
                printf("Enter the marks of student is CSE 2002:%d ",j+1);
                scanf("%d", (matrix2+j*4+k));
                class2002+=*(matrix2+j*4+k);
                continue;
            }
            if(k==3)
            {
                printf("Enter the marks of student is CSE 3001:%d ",j+1);
                scanf("%d", (matrix2+j*4+k));
                class3001+=*(matrix2+j*4+k);
                continue;
            }
        }
        
    }
    printf("Class Averagec of CSE1002 is = %f",class1002/studentnumber);
    printf("\n");
    printf("Class Averagec of CSE1003 is = %f",class1003/studentnumber);
    printf("\n");
    printf("Class Averagec of CSE2002 is = %f",class2002/studentnumber);
    printf("\n");
    printf("Class Averagec of CSE3001 is = %f",class3001/studentnumber);
    printf("\n");
    
}
