#include <stdio.h>



int sum_array(int sum1, int num){
    return sum1 + num;
}

int main()
{
    int arr [5]={5,10,15,20,25};
     
    int sum = 0; 
    for(int i=0; i<5; i ++)
    {
        printf("the elements of the array are: %d\n", arr[i]);
        sum = sum_array(sum, arr[i]);
    }
    
    printf("%d", sum);

    return 0;
}
