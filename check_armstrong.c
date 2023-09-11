#include<stdio.h>

int main(){
    
    int num, r;
    int sum=0;
    int temp;
    printf("Enter the number :");
    scanf("%d",&num);
    temp=num;

    while(num>0){
        r = num % 10;
        sum = sum + (r*r*r);
        num = num / 10;
    }

    if(temp == sum){
        printf("yes, %d is armstrong number \n",num);
    }
    else{
        printf("No, %d is not armstrong number \n",num);
    }
    return 0;
}