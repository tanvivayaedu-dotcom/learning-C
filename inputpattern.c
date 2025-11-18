#include <stdio.h>
int main() 
{
    int num;
    char sym='@';
    
    printf("enter a number for the pyramid;");
    scanf("%d",&num);
    
    //printf("enter a symbol for the pyramid;");
    //scanf("%d",&sym);
    
    
        for (int i=0;i<=num;i++)
        {
             for (int j=0;j<=i;j++)
             {
                 printf("%c",sym);
             };
        printf("\n");
        };
    
    
    
 
 return 0;

}
