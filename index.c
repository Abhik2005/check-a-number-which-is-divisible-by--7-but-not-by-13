#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if ((n%7 ==0)&&(n%13 != 0))
    {
    printf("The number %d is of given type.",n);
    }
    else{
    printf("The number %d is not of given type.",n);
    }
    return 0;
}