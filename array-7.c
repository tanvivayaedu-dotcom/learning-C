/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/*FINAL : 
Accept a the size of array from user; 
take that many elements from user in array; 
print all elements of this new array
*/

#include <stdio.h>

int main()
{
    int x=0;
    
    printf("enter a range for array: ");
    scanf("%d", &x);
    
    if(x>0)
    {
        
        int arr[x];
        for(int i=0; i<x; i++)
        {
            int temp = 0;
            printf("Enter the %d elements of the array:", i);
            scanf("%d", &temp);
            arr[i] = temp;
        }
        
        for(int j=0; j<x; j++)
        {
            printf("%d \n", arr[j]);
        }
    }
    else{
        printf("Who makes an array without any elements ?!");
    }
    
    return 0;
}
