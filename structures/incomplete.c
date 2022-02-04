

#include <stdio.h>

struct students{
    char name[50];
    char regnumber[20];
    int credtits;
    char subjects[10][50];
    
    void readdetails()
    {
        printf("Enter the student name: ");
        scanf("%s",name);
        printf("\n");
        printf("Enter the registration number : ");
        scanf("%s",regnumber);
        printf("\n");
        int n;
        printf("How many subjects would you like to register");
        scanf("%d",&n);
        printf("\n");
        credits=4*n;
        for(int j=0;j<n;j++)
        {
            char temporary[50];
            printf("Enter the subject %d you would like to register :",j+1);
            
            
        
            scanf("%d", &temporary);
            for(int j=0;j<credits/4;j++)
            {
                if(strcasecmp(temporary, subjects[j])==0)
                {
                    printf("YOU HAVE ALREADY REGISTERED THE COURSE, TRY AGAIN");
                    
                    
                }
            }
        }
        
    }
    void printdetails()
    {
        printf("Student name: %s", name);
        printf("\n");
        printf("Student number: %s", regnumber);
        printf("\n");
        printf("Student's credits : %s", credits);
        printf("\n");
        for(int j=0;j<n;j++)
        {
            printf("The course %d is %s ", j+1, subjects[j]);
            
            
        }
        printf("\n");
    }
    void withdrawcourse()
    {
        char coursename[50];
        
        
        printf("Enter the course id you want to delete: ")
        scanf("%s",&coursename);
       
        for(int j=0;j<credits/4;j++)
        {
            if (strcasecmp (a, b) == 0) {
        printf ("the same");
    }
        }
        
        
        
    }
    
    
    
    
}

int main()
{
    printf("Hello World");

    return 0;
}
