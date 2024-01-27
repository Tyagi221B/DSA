#include<bits/stdc++.h>
using namespace std;

bool isPalindromeHelper(const std::string& str, int left, int right) {
    // Base case: If the left and right pointers meet or cross each other, the string is a palindrome.
    if (left >= right) {
        return true;
    }

    // Recursive case: Check if the characters at the left and right pointers are equal.
    if (str[left] == str[right]) {
        // Recurse for the substring by moving the left pointer to the right and the right pointer to the left.
        return isPalindromeHelper(str, left + 1, right - 1);
    }

    // If the characters at the left and right pointers are not equal, the string is not a palindrome.
    return false;
}

bool isPalindrome(const std::string& str) {
    // Call the helper function to perform the recursive palindrome check.
    // Pass the left pointer as 0 and the right pointer as the last index of the string.
    return isPalindromeHelper(str, 0, str.length() - 1);
}
int main() {
    // Example usage:
    std::string inputString = "level";

    if (isPalindrome(inputString)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}