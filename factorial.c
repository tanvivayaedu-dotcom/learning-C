#include <stdio.h>
int factorial (int num)
{
 if (num<=1)
  {
      return 1;
  }
 else
   {
       return num*factorial (num-1);
   }
}

int main()

{
    int num = 1;
    printf("enter a number for the factorial: ");
    scanf("%d", &num);
    
    if (num <= 0)
    {
         printf("Factorial not defined");
    }
    else
    {
    printf("factorial of number %d is: %d" , num, factorial(num) );
    
    }    
}
