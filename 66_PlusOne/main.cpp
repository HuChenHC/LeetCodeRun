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
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        while (size--) {
            if (digits[size]++ != 9) {
                return digits;
            }
            digits[size] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int main(){
	Solution S;
	int n[3] = {9,9,2};
	vector<int> nums(3);
	for (int i=0; i<3; i++) nums[i]=n[i];
	printf("%d %d %d\n",S.plusOne(nums).at(0),S.plusOne(nums).at(1),S.plusOne(nums).at(2));
	return 0;
}