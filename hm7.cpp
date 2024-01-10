#include <iostream>
#include <unordered_map>
#include <algorithm>

int longestSubstringWithKDistinctChars(const std::string& s, int k) {
    int n = s.length();
    std::unordered_map<char, int> charCount;
    int start = 0, maxLength = 0;

    for (int end = 0; end < n; ++end) {
        charCount[s[end]]++;
        
        while (charCount.size() > k) {
            charCount[s[start]]--;
            if (charCount[s[start]] == 0) charCount.erase(s[start]);
            start++;
        }

        maxLength = std::max(maxLength, end - start + 1);
    }

    return maxLength;
}

int main() {
    std::string s = "ababcaaadc";
    int k = 2;
    int result = longestSubstringWithKDistinctChars(s, k);
    
    std::cout << "Result = " << result << std::endl;

    return 0;
}
