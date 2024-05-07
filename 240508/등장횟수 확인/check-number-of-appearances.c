#include <stdio.h>

int main() {
    int cnt=0, temp;
    for (int i = 1; i <= 5; i++){
        scanf("%d\n", &temp);
        if (temp%2==0)
            cnt++;
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}