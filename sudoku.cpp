#include<bits/stdc++.h>
using namespace std;

int grid[9][9];

bool isValid(int row, int col, int num) {
    // kiểm tra hàng
    for(int i = 0; i < 9; i++)
        if(grid[row][i] == num)
            return false;

    // kiểm tra cột
    for(int i = 0; i < 9; i++)
        if(grid[i][col] == num)
            return false;

    // kiểm tra ô 3x3
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(grid[startRow + i][startCol + j] == num)
                return false;

    return true;
}

bool solve() {
    for(int row = 0; row < 9; row++) {
        for(int col = 0; col < 9; col++) {

            if(grid[row][col] == 0) {

                for(int num = 1; num <= 9; num++) {

                    if(isValid(row, col, num)) {
                        grid[row][col] = num;

                        if(solve())
                            return true;

                        grid[row][col] = 0; // backtrack
                    }
                }

                return false; 
            }
        }
    }

    return true; 
}

int main() {

    cout << "Nhap Sudoku (0 la o trong):\n";

    for(int i = 0; i < 9; i++)
        for(int j = 0; j < 9; j++)
            cin >> grid[i][j];

    if(solve()) {
        cout << "\nSudoku sau khi giai:\n";
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++)
                cout << grid[i][j] << " ";
            cout << endl;
        }
    }
    else {
        cout << "Khong co loi giai!\n";
    }

    return 0;
}