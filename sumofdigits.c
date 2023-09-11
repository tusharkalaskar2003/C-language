#include<stdio.h>

int main(){
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    int sum=0;
    int temp = N;
    int arr[8];
    while(temp>0){
        int r = temp % 10;
        sum = sum + r;
        temp = temp / 10;
    }
    printf("The sum of the digits of the number %d is %d ",N,sum);
    return 0;
}