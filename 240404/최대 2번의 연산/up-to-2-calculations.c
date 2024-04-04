#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%2==0)
        a /= 2;
    if(a%2!=0)
        a = (a+1)/2;

    
    printf("%d",a);
    // 여기에 코드를 작성해주세요.
    return 0;
}