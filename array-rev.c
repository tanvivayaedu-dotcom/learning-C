/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr [5]={5,10,15,20,25};
     
    for(int i=4; i>=0; i --)
    {
        printf("the elements of the array in reverse are: %d\n", arr[i]);
    }

return 0;
}
