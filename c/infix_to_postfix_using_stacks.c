#include <stdio.h>
#include <string.h>

int main() {
    char a[2] = "{}";
    if (a[0] == '{') {
        printf("match");
    }
    else {
        printf("no match");
    }
    printf("\na[0] is %c", a[0]);
    return 0;
}
