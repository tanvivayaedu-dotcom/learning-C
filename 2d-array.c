/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[2][3] = {
        {3,5,7},
        {7,8,9}
    };
    
    for (int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
