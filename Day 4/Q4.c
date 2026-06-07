# include <stdio.h>
# include <math.h>
int main()
{
    int start ,end num,temp,rem,digits ;
    int sum;
    printf("enter strting number:");
    scanf("%d",start);
    printf("enter ending nuber:");
    scanf("%d",&end);
    printf(" armstrong numbers between %d and %d are :\n",start,end);
    for(num=start;num<=end;num++);
    {
        temp=num;
        digits=0;
        sum=0;
        while(temp!=0){
            digit++;
            temp/=10;
        

        }
        temp=num;
        while(temp!=0){
            rem=temp%10;
            sum+=pow(rem,digits);
            temp/=10;

        }
        if(sum==num)
        printf("%d\n",num);

    }return0;
    
}