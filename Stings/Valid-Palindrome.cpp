// Example 1:

// Input: s = "A man, a plan, a canal: Panama"
// Output: true
// Explanation: "amanaplanacanalpanama" is a palindrome.
// Example 2:

// Input: s = "race a car"
// Output: false
// Explanation: "raceacar" is not a palindrome.
// Example 3:

// Input: s = " "
// Output: true
// Explanation: s is an empty string "" after removing non-alphanumeric characters.
// Since an empty string reads the same forward and backward, it is a palindrome.
 
class Solution {
public:

    bool isAlphaNum(char ch) {
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        }

        return false;
    }

    bool isPalindrome(string str) {

        int start = 0;
        int end = str.length() - 1;

        while (start < end) {

            if (!isAlphaNum(str[start])) {
                start++;
                continue;
            }

            if (!isAlphaNum(str[end])) {
                end--;
                continue;
            }

            if (tolower(str[start]) != tolower(str[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};