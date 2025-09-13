#include <stdio.h>
int main(){
    int fact=1,num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
        // continue;
    }
    printf("FINAL FACTORIAL= %d",fact);
    return 0;
    
}
