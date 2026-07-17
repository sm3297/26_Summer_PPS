#include <string>
#include <vector>
#include <iostream>

using namespace std;


int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;

    vector<int> basket; 
    int n = board.size(); // 격자의 크기

    for (int move : moves) {
        int col = move - 1; 
        for (int row = 0; row < n; ++row) {
            if (board[row][col] != 0) { 
                int doll = board[row][col]; 
                board[row][col] = 0; 
                // 바구니에 인형을 추가
                if (!basket.empty() && basket.back() == doll) {
                    basket.pop_back(); 
                    answer += 2; 
                } else {
                    basket.push_back(doll); 
                }
                break; 
            }
        }
    }
    return answer;
}

int main(){

    vector<vector<int>> board = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 3},
        {0, 2, 5, 0, 1},
        {4, 2, 4, 4, 2},
        {3, 5, 1, 3, 1}
    };
    vector<int> moves = {1, 5, 3, 5, 1, 2, 1, 4};

    int result = solution(board, moves);
    cout << result << endl;

    return 0;

}