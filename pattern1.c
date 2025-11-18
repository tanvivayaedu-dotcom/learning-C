#include <stdio.h>

int main()
{

	int iNum = 5;

	for (int i=1; i<=iNum; i++)
    {
        for(int j=1;j<=i; j++)
        {
           // printf("%d",j);
           printf("*");
        }
        
        printf("\n");
	}


	return 0;
}
