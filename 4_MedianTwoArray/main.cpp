#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstring>
#include <cmath>

/*
*   Chen
*   Sep 9, 2018  
*/

using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int L = (int)floor(nums1.size()/2.0+nums2.size()/2.0-0.5);
        int R = (int)ceil(nums1.size()/2.0+nums2.size()/2.0-0.5);
        if (L<0) return 0;
        int c1 = 0, c2 = 0;
        float ans = 0;
        for (int count = 0; count <= R; count++) {
            if (count == L && L!=R) {
                if (c2 == nums2.size() || (c1!=nums1.size() && nums1[c1] < nums2[c2])) {
                    ans = nums1[c1];
                    c1++;
                }
                else {
                    ans = nums2[c2];
                    c2++;
                }
                if (c2 == nums2.size() || (c1!=nums1.size() && nums1[c1] < nums2[c2])) {
                    return (ans+nums1[c1])/2.0;
                }
                else {
                    return (ans+nums2[c2])/2.0;
                }
            }
            else if (count == L && L==R) {
                if (c2 == nums2.size() || (c1!=nums1.size() && nums1[c1] < nums2[c2])) {
                    return nums1[c1];
                }
                else {
                    return nums2[c2];
                }
            }
            if (c2 == nums2.size() || (c1!=nums1.size() && nums1[c1] < nums2[c2])) {
                c1++;
            }
            else {
                c2++;
            }
        }
        return -1;
    }
};

int main(){
	Solution S;
	int n[3] = {1,2,3};
	vector<int> nums1(3,-1);
	vector<int> nums2;
	for (int i=0; i<3; i++) {
		nums1[i] = n[i];
	}
	printf("%f\n", S.findMedianSortedArrays(nums1, nums2));
	return 0;
}