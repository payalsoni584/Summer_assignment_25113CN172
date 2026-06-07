# include <stdio.h>
int main()
{
    long long num,largest prime fator =1;
    printf("enter a number:");
    scanf("%11d",&num);
    while(num%2==0){
        largest prime factor=2;
        num/=2;

    }
    for(long long i=3;i*i<=num;i+=2){
        while(num%i==0){
            largest prime factor =i;
            num/=i;

        }
    }
    if(num>2)
    {
        largest prime factor =num;
    }
    printf("largest prime factor=%11d\n",largest prime factor);
    return 0;

        
    }