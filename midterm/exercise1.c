#include<stdio.h>
int main(){
    printf("please input a chain of chracters(no more than 50)\n");
    char a[50];
    int i = 0;
    int amount = 0;
    int k = 0;
    while((a[i]= getchar()) != '\n'){
        i++;
    }
    for(k = 0;k<i;k++){
        if(a[k]>='A'&&a[k]<='Z')
    }
    printf("the number of wordis: %d\n",amount);
    return 0;
}