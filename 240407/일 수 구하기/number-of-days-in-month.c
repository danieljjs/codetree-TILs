#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if (n!=2)
        if (n%2==0)
            printf("30");
        else
            printf("31");
    else    
        printf("28");
    // 여기에 코드를 작성해주세요.
    return 0;
}