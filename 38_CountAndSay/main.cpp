#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <math.h>       /* ceil */

/*
*   Chen
*   Sep 6, 2018  
*/

using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
		n--;
		while (n--){
			string tmp;
			char first = s[0];
			int cnt = 0;
			while (!s.empty()){
				s.erase(s.begin());
				cnt++;
				if (s.empty()){
					tmp+=to_string(cnt)+first;
					break;
				} 
				else if (s[0]!=first){
					tmp+=to_string(cnt)+first;
					cnt = 0;
					first = s[0];
				}
			}
			s = tmp;
		}
		return s;
    }
};

int main(){
	Solution S;
	int n[4] = {1,3,5,6};
	vector<int> nums(4);
	for (int i=0; i<3; i++) nums[i]=n[i];
	printf("%s\n",S.countAndSay(5).c_str());
	return 0;
}