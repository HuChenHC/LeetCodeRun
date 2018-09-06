#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstring>

/*
*   Chen
*   Sep 6, 2018  
*/

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        while (s.back()==' ') s.pop_back();
        if (s.empty()) return 0;
        int cnt = 0;
        while (s.begin()==s.end() || s.back()!=' '){
            cnt++;
            s.pop_back();
			if (s.empty()) return cnt;
        }
        return cnt;
    }
};

int main(){
	Solution S;
	int n[8] = {1,-3,5,-6,-1,5,1,-4};
	vector<int> nums(8);
	for (int i=0; i<8; i++) nums[i]=n[i];
	printf("%d\n",S.lengthOfLastWord("a"));
	return 0;
}