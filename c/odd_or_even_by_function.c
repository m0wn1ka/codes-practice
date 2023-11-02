#include <stdio.h>

int check(int a);

int main(){
    int n;
    scanf("%d", &n);
    int ans = check(n);
    printf("%d is even statement is %d", n, ans);
    return 0; // Return 0 to indicate successful execution of the program
}

int check(int a){
    if(a % 2 == 0){
        return 1; // Return 1 for true (even)
    }
    else{
        return 0; // Return 0 for false (odd)
    }
}

