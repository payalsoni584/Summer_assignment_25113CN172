# include <stdio.h>
#include <string.h>
int main(){
    char str 1[100] ,str2[100],temp[200];
    printf("enter first string :");
    scanf("%s", str 1);
    printf("enter second  string:");
    scanf("%s", str2);
    if(strlen(str1) !=strlen(str2)){
        printf("not rotation");
        return 0;

    }
    strcpy(temp ,str1);
    strcat(TEMP , str1);
    if(strstr(temp ,str2))
    printf("rotation");
    else
    printf("not rotation");
    return 0;
}