#include <stdio.h>
int main(){
  int x;
  scanf("%d\n",&x);
  
  printf("%d\n",x);  //original value
  printf("%d\n",x++);
  printf("%d\n",x); //value after x++
  printf("%d\n",++x); 
  printf("%d\n",x);
  return 0;
  
}
