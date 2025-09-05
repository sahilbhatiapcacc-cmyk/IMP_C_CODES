#include <stdio.h>
int globalcounter=0;

void democounter(){ //local function
  
  static int staticcounter=0;
  
  int autocounter=0;
  
  
  globalcounter++;
  staticcounter++;
  autocounter++;
  
  printf("Global: %d\nStatic: %d\nAuto: %d\n\n"
  , globalcounter, staticcounter , autocounter);
}


int main(){
  int n;
  scanf("%d",&n);
  for (int i=0;i<n;i++){
    printf("Call %d\n",i+1); //(have to print call later on because it has value of "i")
    democounter();
  }
  return 0;
  
}
