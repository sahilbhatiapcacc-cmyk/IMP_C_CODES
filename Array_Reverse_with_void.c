#include<stdio.h> 
void arrrev(int arr[]){                //or could use             void arrrev(int *a){
  int temp;
  for(int i=0;i<6/2;i++){
    
    //swaping two extreme numbers in the list
    
    temp=arr[5-i];                     // or could use             temp=a[5-i];
    arr[5-i]=arr[i];
    arr[i]=temp;
    
  }
}
int main(){
  int arr[]={1,2,3,4,5,6};
  printf("ARRAY BEFORE REVERSAL:\n");
  for(int i=0;i<6;i++){
    printf("%d ",arr[i]);
    
  }
    printf("\nARRAY AFTER REVERSAL:\n");

  arrrev(arr);
  for(int i=0;i<6;i++){
    printf("%d ",arr[i]);
    
  }
  
  return 0;
  
  
}
