#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d\n", &temp);
        if (temp%2==1&temp%3==0)
            printf("%d\n",temp);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}