#include <stdio.h>
int main(){
  char ch[100];
  int count=0,i=0;
  scanf("%s",ch);
  while(ch[i]!='\0'){
    i++;
    count++;
  }
  printf("Length of the string: %d",count);
  return 0;
}
