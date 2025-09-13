#include <stdio.h>
int main(){
  int a=0,b=1,next,num;
  scanf("%d",&num);
  if(num>=1 && num<=50){
    printf("Fibonacci Series: ");
    for(int i=0;i<num;i++){
      printf("%d ",a);
      next=a+b;
      a=b;
      b=next;
      
    }
  }
  else {
    return 0;
    
  }
  return 0;
  
}
