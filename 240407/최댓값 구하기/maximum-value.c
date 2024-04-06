#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d",a);
    else if (b>a && b>c)
        printf("%d",b);
    else
        printf("%d",c);
    // 여기에 코드를 작성해주세요.
    return 0;
}