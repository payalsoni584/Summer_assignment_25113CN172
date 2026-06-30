# include <stdio.h>
# include <stdio.h>
int main(){
    char str[100];
    int i,j,len;
    printf("enter a string :");
    gets(str);
    len= strlen(str);
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(str[i]==str [j]){
                printf("first repeating character :%c",str[i])
                    return 0;
                }
            }
        }
        printf("no repeating character found ");
        return 0;

    }
