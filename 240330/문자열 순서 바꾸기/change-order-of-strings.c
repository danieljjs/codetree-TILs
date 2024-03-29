#include <stdio.h>

int main() {
    char s [100];
    char t [100];
    char temp[100];
    scanf("%s\n%s",&s,&t);
    temp[100]=s[100];
    s[100]=t[100];
    t[100]=temp[100];
    printf("%s\n%s",t,s);
    // 여기에 코드를 작성해주세요.
    return 0;
}