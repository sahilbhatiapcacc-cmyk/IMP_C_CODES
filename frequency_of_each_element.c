#include<stdio.h>
int main(){
    int x,count;
    printf("enter number of element in array:");
    scanf("%d",&x);
    int arr[x];
    printf("enter elements:\n");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    printf("array that you enetered:\n");
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    count=0;
    for(int i=0;i<x;i++){
        if(arr[i]==0){
            count++;
        }
    }
    if(count>0){
        printf("\nthe frequency of 0: %d",count);
    }
    
    //logic start from here....
    
    for(int i=0;i<x;i++){
        if(arr[i]!=0){
            count=1;
            for(int j=i+1;j<x;j++){
                if(arr[j]==arr[i]){
                    count++;
                    arr[j]=0;
                    
                    }
            }
            printf("\nthe frequency of %d: %d\n",arr[i],count);
        }
    }
    
    return 0;
   
