# include <stdio.h>
# include <string.h>
int main(){
    char str1[100],str2[100];
    int count 1[256 ={0},
    count2[256] = {0};
int i;
printf("enter first string :");
gets(str1);
printf("enter second string:");
gets(str2);
if(strlen(str1)! =strlen(str2)){
    printf("strings are not anagrams.");
    return 0;
}
for(i=0;str1[i] !='\0';i++){
    count1[(unsigned char)str1[i]]++;
    count2[(unsigned char)str2[i] ]++;

}
for(i=0;i<256;i++){
    if(count1[i]!=count2[i]){
        printf("strings are not anagrams.");
        return 0;
    }
}
printf("strings are anagrams.");
return 0;
}
