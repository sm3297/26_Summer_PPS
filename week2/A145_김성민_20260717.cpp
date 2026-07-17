#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long totalCost = 0;

    for (int i = 1; i <= count; i++) {
        totalCost += price * i; 
    }

    if (totalCost > money) {
        answer = totalCost - money; 
    } 
    else
        answer = 0; 
    return answer;
}

int main() {
    int price = 3;
    int money = 20;
    int count = 4;

    long long result = solution(price, money, count);
    printf("%lld\n", result);

    return 0;
}