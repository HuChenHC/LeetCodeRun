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
    int climbStairs(int n) {
        int size = n, m = 2;
        int temp = 0;
        vector<int> solu(m, 0);
        while (n--) {
            for (int i = 0; i < (min(m, size-n)-1); i++) {
                temp += solu[i];
            }
            if ((size-n)<=m) {
                temp++;
            }
            else {
                temp += solu[m-1];
            }
            solu.pop_back();
            solu.insert(solu.begin(),temp);
            temp = 0;
        }

        return solu[0];
    }
};

int main(){
	Solution S;
	int n[3] = {9,9,7};
	vector<int> nums(3);
	for (int i=0; i<3; i++) nums[i]=n[i];
	printf("%d\n",S.climbStairs(34));
	return 0;
}