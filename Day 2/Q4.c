#include<stdio.h>
int main()
{
    int num,original num,
    reversed num =0,remainder;
    printf("enter a number:");
    scanf("%d",&num);
    original num=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed num=reversed sum*10+remainder;
        num=num/10;
    }if(original num==reversed num)
    printf("%d is a palindrome number\n",original num);
    else
    printf("%d is not a palindrome number\n",original num);
    return 0;
    
}