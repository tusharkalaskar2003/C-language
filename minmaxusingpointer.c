#include<stdio.h>

void minmax(int a, int b, int *max,int *min);
int main(){
    int a = 10;
    int b =10;
    int max, min;
    minmax(a,b,&max,&min);
    printf("max = %d , min = %d \n",max,min);
    
    return 0;
}

void minmax(int a, int b, int *max,int *min){
    if(a>b){
        *max = a ;
        *min = b ;
    }
    else if(b>a){
        *max = b;
        *min = a;
    }
    else{
        *min = *max = a;
    }
}
