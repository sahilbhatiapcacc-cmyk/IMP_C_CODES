#include <stdio.h>
int main(){
  int num,r1,r2=0,r3,sign =1;
  scanf("%d",&num);
  r3=num;
  
  if(num>=-1000000 && num<=1000000){
    if(num<0){
      r3=num;
      num=-num;
      sign =-1;
      
    }
    while(num !=0){
      r1=num % 10; //for getting last digit
      r2=r2*10 + r1;
      num=num/10; //for removing last digit  
    }
    r2=r2*sign;
    if(r2==r3){
    printf("%d is a palindrome.");
  }
  else{
    printf("%d is not a palindrome.");
  }
}

  return 0;
  
}
