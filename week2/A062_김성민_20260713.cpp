#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char) * 4);

    // 2016.1.1 : 금요일, 1월 1일을 기준
    int daysInMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30}; 
    int totalDays = 0;
    for (int i = 1; i < a; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += b;

    int dayOfWeek = (totalDays - 1) % 7;
    switch (dayOfWeek) {
        case 0: strcpy(answer, "FRI"); break;
        case 1: strcpy(answer, "SAT"); break;
        case 2: strcpy(answer, "SUN"); break;
        case 3: strcpy(answer, "MON"); break;
        case 4: strcpy(answer, "TUE"); break;
        case 5: strcpy(answer, "WED"); break;
        case 6: strcpy(answer, "THU"); break;
    }

    return answer;
}

int main() {
    int a = 5; 
    int b = 24; 
    char* result = solution(a, b);
    printf("%s\n", result); 
    free(result); 
    return 0;
}