/*
3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
Example 4:

Input: s = ""
Output: 0
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int start=-1, maxlen=0;
        vector<int> v(256, -1);
        
        int i=0;
        while(i<s.length()){
            if(v[s[i]]>start){
                start = v[s[i]];
            }
            v[s[i]] = i;
            maxlen = max(maxlen, i-start);
            i++;
        }
        return maxlen;
        
    }
};
