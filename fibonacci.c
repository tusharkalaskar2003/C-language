#include <stdio.h>

int fibonacci(int N){
    if(N==1){
        return 0;
    }
    if(N==2){
        return 1;
    }
    int fibo = fibonacci(N-1) + fibonacci(N-2) ;
    return fibo;
}
int main(){
    int N;
    printf("Enter the numbers: ");
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++){
        printf(" %d",fibonacci(i));
    }
    return 0;
}