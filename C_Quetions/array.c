#include<stdio.h>
int main(){
    int arr[4];
    int sum=0;
    
    printf("enter four numbers :");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    printf("sum of four numbers is :%d",sum);
    return 0;
}