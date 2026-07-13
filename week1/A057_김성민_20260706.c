#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// cookie_len은 배열 cookie의 길이입니다.
int solution(int cookie[], size_t cookie_len) {
    int answer = -1;

    for (int l = 0; l < cookie_len; l++) {
        int sum1 = 0;
        for (int m = l; m < cookie_len; m++) {
            sum1 += cookie[m];
            int sum2 = 0;
            for (int r = m + 1; r < cookie_len; r++) {
                sum2 += cookie[r];
                if (sum1 == sum2) {
                    answer = (answer < sum1) ? sum1 : answer;
                }
            }
        }
    }
    if (answer == -1) {
        answer = 0; 
    }

    return answer;
}

int main() {
    int cookie[] = {1, 1, 2, 3};
    // int cookie[] = {1, 2, 4, 5};
    size_t cookie_len = sizeof(cookie) / sizeof(cookie[0]);
    
    int result = solution(cookie, cookie_len);
    printf("%d\n", result); 

    return 0;
}