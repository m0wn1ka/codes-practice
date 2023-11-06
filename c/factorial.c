#include <stdio.h>
int factorial(int x){
    if(x>1){
        x=x*factorial(x-1);
        x--;
    }
    else{
        return x;

    }
}
int main(){
    int n=5;
    int a=factorial(n);
    printf("%d is factorial of n",a,n);
    return 0;
}
