#include <stdio.h>

int main() {
    int a=5, b=6, c=7, temp, temp2;
    temp = b;
    b = a;
    temp2 = c;
    c = temp;
    a = temp2;
    printf("%d\n%d\n%d",a,b,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}