#include <stdio.h>
int counter = 0;

void increamentcounter(){
  counter++;
}


int main(){
  int n;
  scanf("%d",&n);
  
  for (int i=0 ;i < n; i++){
    increamentcounter(); //that is called storing a function LOCALLY.
  }
  
  printf("Final counter: %d",counter);
  return 0;
  
}
