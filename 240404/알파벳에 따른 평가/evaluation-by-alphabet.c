#include <stdio.h>

int main() {
    char s;
    scanf("%c",&s);
    if(s=='S')
        printf("Superior");
    else if(s=='A')
        printf("Excellent");
    else if(s=='B')
        printf("Good");
    else if(s=='C')
        printf("Usually");
    else if(s=='D')
        printf("Effort");
    else
        printf("Failure");
    // 여기에 코드를 작성해주세요.
    return 0;
}