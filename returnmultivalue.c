#include<stdio.h>

void doworkforme(int a, int b, int *sum, int *prod, int *avg);
int main(){
    int x = 3 ;
    int y = 5 ;
    int sum, prod, avg;
    doworkforme(x,y,&sum,&prod,&avg);
    printf("Sum = %d , prod = %d , avg = %d \n",sum,prod,avg);
    
    return 0;
}

void doworkforme(int a, int b, int *sum, int *prod, int *avg){
    *sum = a + b ;
    *prod = a * b ;
    *avg = (a + b)/2;
}