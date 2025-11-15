/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
     
    for(int i=0; i<10; i++)
    {
        
         if ( i%2 ==0)
        {
            printf("the elements of the array are: %d\n", arr[i]);
        }
    }

return 0;
}
