#include <iostream>
#include <vector>
#include <unordered_map>
using namespace::std;
vector<int> findFrequentElements(const vector<int>& arr) {
    unordered_map<int, int> countMap;
    for (int num : arr) {
        countMap[num]++;
    }
    int halfCount = arr.size() / 2;
    std::vector<int> result;
    
    for (const auto& entry : countMap) {
        if (entry.second > halfCount) {
            result.push_back(entry.first);
        }
    }

    return result;
}

int main() {
    std::vector<int> data = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    std::vector<int> result = findFrequentElements(data);

    if (!result.empty()) {
        for (int num : result) {
            std::cout << num;
        }
        std::cout << std::endl;
    } else {
        std::cout << "" << std::endl;
    }

    return 0;
}
