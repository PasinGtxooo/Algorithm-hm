#include <iostream>
#include <vector>

bool checkANEqualsN(const std::vector<int>& arr) {
    int n = arr.size();
    return arr[n - 1] == n;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    bool result = checkANEqualsN(arr);

    std::cout << (result ? "True":"False") << std::endl;

    return 0;
}
