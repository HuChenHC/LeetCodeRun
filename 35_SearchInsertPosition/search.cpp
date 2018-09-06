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
    int searchInsert(vector<int>& nums, int target) {
        int j=0;
		while (nums[j]<target && j < int(nums.size())){
			j++;
		}
		return j;
    }
};

int main(){
	Solution S;
	int n[4] = {1,3,5,7};
	vector<int> nums(4);
	for (int i=0; i<3; i++) nums[i]=n[i];
	printf("%d\n",S.searchInsert(nums, 9));
	return 0;
}