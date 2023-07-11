// Given an integer number n, return the difference between the product of its digits and the sum of its digits.


// Input: n = 234
// Output: 15 
// Explanation: 
// Product of digits = 2 * 3 * 4 = 24 
// Sum of digits = 2 + 3 + 4 = 9 
// Result = 24 - 9 = 15


class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1 ;
        int sum = 0;
        for (int i = 0 ; n>0 ;i++){
            int digit = n%10;
            product = product * digit;
            sum = sum + digit;
            n= n/10;
        }
        return product - sum;
    }
};
