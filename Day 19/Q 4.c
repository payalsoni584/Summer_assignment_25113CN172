# include <stdio.h>
int main(){
    int a[10][10];
    int n,i,j,sum=0;
    printf("enter order of square matrix:");
    scanf("%d",&n);
    printf("enter matrix elements:\n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);

    for(i=0;i<n;i++)
    sum+=a[i][j];
    printf("diagonal sum=%d",sum);
    return 0;
}