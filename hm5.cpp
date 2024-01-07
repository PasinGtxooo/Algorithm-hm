#include <iostream>
#include <vector>

bool findNumber(const std::vector<std::vector<int>>& A, int x) {
    int n = A.size();
    int row = 0;
    int col = n - 1; 

    while (row < n && col >= 0) {
        if (A[row][col] == x) {
            return true;  
        } else if (A[row][col] > x) {
            col--; 
        } else {
            row++;  
        }
    }

    return false;  
}

int main() {
    const int n = 4;
    std::vector<std::vector<int>> A = {
        {1, 2, 8, 9},
        {2, 4, 9, 12},
        {4, 7, 10, 13},
        {6, 8, 11, 15}
    };

    int x = 0;
    bool found = findNumber(A, x);

    if (found) {
        std::cout << x << " Find in A" << std::endl;
    } else {
        std::cout << x << " Not find in A" << std::endl;
    }

    return 0;
}
