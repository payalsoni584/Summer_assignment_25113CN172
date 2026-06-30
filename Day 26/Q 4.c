# include <stdio.h>
int main()
{
    int ans,score=0;
    printf("Q1.capital of india?\n");
    printf("1.mumbai\n2.delhi\n3.kolkata \n4.chennai\n");
    scanf("%d",&ans);
    if(ans==2)
    score++;
    printf("Q2. 5+3=?\n");
    printf("1.6\n2.7\n3.8\n4.9\n");
    scanf("%d",&ans);
    if(ans==3)
    score++;
    printf("your score =%d/2\n",score);
    return 0;
}