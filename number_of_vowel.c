#include<stdio.h>
void count(char ch[]){
  
  int num=0;

  for(int i=0;ch[i]!='\0';i++){
    if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||
    ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||
    ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||
    ch[i]=='U'){
      num++;
    }
  }
  printf("Number of vowels: %d",num);
}
int main(){
  char str[99];
  fgets(str,sizeof(str),stdin);
  count(str);
  return 0;
  
}
