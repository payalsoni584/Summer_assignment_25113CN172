# include <stdio.h>
int main()
{
    int a[50],b[50],unionarr[100];
    int n1,n2,i,j,k=0,found;
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n1;i++)
    unionarr[k++]=a[i];
    for(i=0;i<n2;i++){
        found =0;
        for(j=0;j<k;j++){
            if(b[i]==unionarr[j]){
                fund = 1;
                break;
            }
        }
        if(!found)
        uniunarr[k++]=b[i];

    }
    printf("union:");
    for(i=0;i<k;i++)
    printf("%d",unionarr[i]);
    return 0;
    
}