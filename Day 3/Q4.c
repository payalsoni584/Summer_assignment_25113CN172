#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    while(b!=0)
    {temp=b;
    b=b%a;
a=temp;
    }
printf("GDC=%d\n",a);
return0;
}

