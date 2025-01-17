/*Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

Example 1:

Input: x = 121
Output: true
*/
class Solution {
public:
    bool isPalindrome(int x) {          // function to return true or false
        
        int temp=x ;           // temp variable to store store x original value of number user entered
       unsigned int reverse=0;  
        if(x<0){        // All values less than 0 are false  e.g. -212 bez palindrome number is  212- bez of '-' symbol 
            return false;
        }
        while(x>0){ // checking for all values greater than 0
            
            reverse = (reverse * 10)+(x % 10);        
            x=x/10;  
            
        }
        return (reverse == temp);      // return true if condition reverse equal to temp variable other wise false 
    }
};
