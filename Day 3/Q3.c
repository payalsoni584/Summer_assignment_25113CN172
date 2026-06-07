# include <stdio.h>
int main()
{
    int a,b,gdc,lcm,temp1,temp2;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    temp1=a;
    temp2=b;
    while(temp2!=0)
    {
        int rem=temp1%temp2;
        temp1=temp2;
        temp2=rem;
    }
gdc=temp1;
lcm=(a*b)/gdc;
printf("LCM=%d\n",lcm);
return0;
}