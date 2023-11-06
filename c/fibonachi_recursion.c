#include <stdio.h>
int fib(int x){
    if(x==0 || x==1){
        return 1;
    }
    return fib(x-1)+fib(x-2);
}
int main(){
    int n=5;
    int i=0;

    printf("printfin\n");
    for(i=0;i<n;i++){
        printf("%d\t",fib(i));
    }
    return 0;
}
