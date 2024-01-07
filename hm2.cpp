#include <iostream>
#include <vector>

void separatePositiveAndNegative(std::vector<int>& arr) {
    std::vector<int> negativeNumbers, positiveNumbers;

    for (int num : arr) {
        num < 0 ? negativeNumbers.push_back(num) : positiveNumbers.push_back(num);
    }

    arr.clear();
    arr.insert(arr.end(), negativeNumbers.begin(), negativeNumbers.end());
    arr.insert(arr.end(), positiveNumbers.begin(), positiveNumbers.end());
}

int main() {
    std::vector<int> data = {7, -3, 5, -1, -8, 6, 2, -4};
    
    separatePositiveAndNegative(data);

    std::cout << "หลังแยก: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
