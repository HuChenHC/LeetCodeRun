#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <math.h>       /* ceil */

/*
*   Chen
*   Sep 6, 2018
*   binary search
*/

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
		int mid = (int)ceil((left+right)/2.0);
		while (left<=right){
			if (nums[mid] == target) return mid;
			else if (nums[mid] > target) right = mid-1;
			else left = mid+1;
			mid = (int)ceil((left+right)/2.0);
			printf("%d %d %d %f\n", left, mid, right,ceil((left+right)/2.0));
		}
		return mid;
    }
};

int main(){
	Solution S;
	int n[4] = {1,3,5,6};
	vector<int> nums(4);
	for (int i=0; i<3; i++) nums[i]=n[i];
	printf("%d\n",S.searchInsert(nums, 4));
	return 0;
}