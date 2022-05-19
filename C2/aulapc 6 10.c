#include <stdio.h>
#include <stdlib.h>


void strcmp(char *string1, char *string2){
    while(*string1){
        if(*string1!=*string2){
            printf("diff");
            return 0;
        }else{
            string1++;
            string2++;
        }
    }
    printf("==");
}

int main(){
    char str1[50],str2[50];
    printf("inform: ");
    scanf("%s",&str1);
    printf("inform: ");
    scanf("%s",&str2);
    strcmp(str1,str2);
    return 0;
}