# include<stdoi.h>
int sumDigits(int n)
{
    if(n==0)
    return 0;
    return n%10+subdigits(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sumDigits(n));
    return 0;

}
