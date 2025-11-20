#include <stdio.h>

int main()

{
	int iRow,iCol;

	printf("enter rows:");
	scanf("%d",&iRow);
	printf("enter column:");
	scanf("%d",&iCol);

	int cont=1;
	         for(int i=0; i<iRow; i++)
	{
		for(int j=0; j<iCol; j++)
		{
			printf("%d\t",cont);
			cont++;
		}
		printf("\n");
	}




	return 0;
}
