#include <stdio.h>

int main()

{
	int sum = 0;
	int iNum=6;
	for (int i = 1; i<iNum; i++)
	{
		if (iNum%i == 0)
		{
			sum=sum+i;
		}

	}
	printf("%d\n",sum);
    
    if (sum==iNum)
	{
		printf("the number is a perfect number");
	}
    else
    {
        printf("the number is not perfect");
    }
	return 0;
}
