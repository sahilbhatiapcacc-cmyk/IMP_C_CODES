#include <stdio.h>
int factorial(int number){
    if (number ==1 || number ==0){
        return 1;
    }
    else {
        return (number*factorial(number-1)); 
    }
}
    int main(){
        int num;
        scanf("%d",&num);
        printf("factorial= %d",factorial(num));

    
    return 0;
    
}
