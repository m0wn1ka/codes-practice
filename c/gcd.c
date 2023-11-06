#include <stdio.h>
int gcd(int x,int y){
    if(x%y==0){
        return y;
    }
    else{
        return gcd(y,x%y);

    }
}
int main(){
    int n=25;
    int m=25;
    int a=gcd(m,n);
    printf("%d is gcd of m,n",a,m,n);
    return 0;
}
