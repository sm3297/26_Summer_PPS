#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* number, int k) {
    int len = strlen(number);
    char* stack = (char*)malloc(len + 1);  
    int top = 0; 

    for (int i = 0; i < len; i++) {
        char current = number[i];
        while (k > 0 && top > 0 && stack[top - 1] < current) {
            top--;
            k--;
        }
        stack[top++] = current;
    }

    top -= k;

    char* answer = (char*)malloc(top + 1);
    strncpy(answer, stack, top);
    answer[top] = '\0';

    free(stack);
    return answer;
}

int main() {
    // const char* number = "1924";
    // int k = 2;
    // const char* number = "1231234";
    // int k = 3;
    const char* number = "4177252841";
    int k = 4;

    char* result = solution(number, k);
    printf("%s\n", result);

    free(result); // 동적 할당된 메모리 해제
    return 0;
}