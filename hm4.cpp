#include <iostream>
#include <vector>
#include <numeric>

int findMissingNumber(const std::vector<int>& A) {
    int n = A.size() + 1; 
    int expectedSum = (n * (n + 1)) / 2; 
    int actualSum = std::accumulate(A.begin(), A.end(), 0);  
    return expectedSum - actualSum; 
}

int main() {
    const int N = 5;
    std::vector<int> A = {3, 1, 2, 4, 6, 5, 9, 8}; 

    int missingNumber = findMissingNumber(A);

    std::cout << missingNumber << std::endl;

    return 0;
}
