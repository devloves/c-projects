#include<stdio.h>  

int main()    
{
    int num, r, sum=0, temp;
    printf("Enter Number: ");
    scanf("%d", &num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=(sum*10)+r;
        num=num/10;
    }
    if (temp == sum)
    {
        printf("%d is a palindrome number.", &num);
    }
    else
    {
        printf("%d is not a palindrome number.", &num);
    }

    return 0;
}   