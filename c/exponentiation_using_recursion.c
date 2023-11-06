#include <stdio.h>
int exp(int x,int y){
    if(y==0){
        return 1;
    }
    else{
        return x*exp(x,y-1);

    }
}
int main(){
    int n=3;
    int m=2;
    int a=exp(m,n);
    printf("%d is exp of %d,%d",a,m,n);
    return 0;
}
