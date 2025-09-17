#include <stdio.h>
int main(){
  int i,j,o,k;
  scanf("%d %d",&i,&j);
  for(o=0;o<i;o++){
    for(k=0;k<j;k++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
  
}
