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
        for(int i=2;i<=(num/2);i++){
            if("num%i==0"){
                factors+=1;
                break;
                
            }
            
        }
        if(factors){
            printf("%d is non prime.",num);
            
        }
        else{
            printf("%d is prime.",num);
            
        }
    return 0;
    }
}
