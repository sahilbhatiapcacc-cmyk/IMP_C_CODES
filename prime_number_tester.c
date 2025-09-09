#include <stdio.h>
int main(){
    int num,factors=0;
    printf("ENTER YOUR NUMBER: ");
    scanf("%d",&num);
    
    if(num<=1){
        printf("%d is non prime.",num);
        
    }
    else if(num==2){
        printf("%d is prime.",num);
        
    }
    else {
        for(int i=2;i<=num;i++){ //we write i=2 to check divisibility by 2 
            if(num%i==0){
                factors++; //or factors+=1;
                // break;  🚨 exit the loop immediately
            }
            
        }
        if(factors==1){
            printf("%d is prime",num);
        }
        else{
            printf("%d is non prime.",num);
        }
    }
    return 0;
    
}
