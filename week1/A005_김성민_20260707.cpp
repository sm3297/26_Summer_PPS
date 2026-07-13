#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.

int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int answer = 0;

    for (size_t i = 0; i < skill_trees_len; i++) {
        const char* tree = skill_trees[i];
        int skill_index = 0; 
        bool is_valid = true; 

        for (size_t j = 0; tree[j] != '\0'; j++) {
            char current_skill = tree[j];
            if (skill[skill_index] == current_skill) {
                skill_index++; 
            } else if (strchr(skill, current_skill) != NULL) {
                is_valid = false;
                break;
            }
        }

        if (is_valid) {
            answer++; 
        }
    }

    return answer;
}

int main() {
    const char* skill = "CBD";
    const char* skill_trees[] = {"BACDE", "CBADF", "AECB", "BDA"};
    size_t skill_trees_len = sizeof(skill_trees) / sizeof(skill_trees[0]);

    int result = solution(skill, skill_trees, skill_trees_len);
    printf("%d\n", result); // Expected output: 2

    return 0;
}