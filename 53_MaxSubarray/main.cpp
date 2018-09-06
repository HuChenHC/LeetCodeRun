#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

/*
*   Chen
*   Sep 6, 2018  
*/

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int now = nums[0], max = now;
        for (int i=1; i<(int)nums.size(); i++){
            now = now >0 ? (now+nums[i]) : nums[i];
            max = max>now ? max : now;
        }
        return max;
    }
};

int main(){
	Solution S;
	int n[8] = {1,-3,5,-6,-1,5,1,-4};
	vector<int> nums(8);
	for (int i=0; i<8; i++) nums[i]=n[i];
	printf("%d\n",S.maxSubArray(nums));
	return 0;
}