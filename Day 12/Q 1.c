# include <stdio.h>
int palindrome(intn)
{
    int rev=0,temp=n;
    while(temp>0)
    {
        rev=rev*10+temp%10;
        temp/=10;

    }
    return (rev==n);

}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if("palindrome");
elseprintf("not palindrome");
return 0;
}