#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstring>

/*
*   Chen
*   Sep 9, 2018  
*/

using namespace std;

/* class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        unordered_map<char, int> m;
        int left = -1, ans = 0;
        for (int i=0; i<s.size(); i++) {
            if (m.find(s[i])!=m.end() && m[s[i]]>left){
                left = m[s[i]];
            }
            m[s[i]] = i;
            ans = max(ans, i-left);
        }
        
        return ans;
    }
}; */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        vector<int> m(256,-1);
        int left = -1, ans = 0;
        for (int i=0; i<s.size(); i++) {
            if (m[s[i]]>left){
                left = m[s[i]];
            }
            m[s[i]] = i;
            ans = max(ans, i-left);
        }
        return ans;
    }
};

int main(){
	Solution S;
	int n[3] = {9,9,7};
	vector<int> nums(3);
	for (int i=0; i<3; i++) nums[i]=n[i];
	int L1[1] = {1}, L2[2] = {9,9};
	printf("%d\n", S.lengthOfLongestSubstring("aaa"));
	return 0;
}