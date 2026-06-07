# include <stdio.h>
int main()
{
    int num,originalnum,remainder,digits=0;
    double result =0.0;
    printf("enter a number:");
scanf("%d",&num);
original num=num;
while(original num!=0){
    original num/=10;
    digits++;

}
original num=num;
while(original num!=0){
    remainder=original num%10;
    result+=pow(remainder,digits);
    original num/=10;
    if((int)result==num);
    else printf("%dis an armstrong number",num);
    else printf("%d is not an armstrong number",num);
    return0;
}
}