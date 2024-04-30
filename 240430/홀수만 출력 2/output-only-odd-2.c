#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &b, &a);
    for (int i = b; i >=a; i--){
        if (i%2==1){
            printf("%d ", i);
        }      
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}