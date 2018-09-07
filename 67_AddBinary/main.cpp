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
    string addBinary(string a, string b) {
        int sizeA = a.size(), sizeB = b.size(), C=0;
        string str = "";
        while (sizeA>0 || sizeB>0) {
            int A = sizeA>0 ? (a[--sizeA] - '0'): 0;
            int B = sizeB>0 ? (b[--sizeB] - '0' ): 0;
			C = A+B+C;
            if (C > 1) {
                str.insert(str.begin(),('0'+C-2));
				C = 1;
            }
            else {
                str.insert(str.begin(),('0'+C));
                C = 0;
            }
        }
        if (C == 1) str.insert(str.begin(),'1');
        return str;
    }
};

int main(){
	Solution S;
	int n[3] = {9,9,7};
	vector<int> nums(3);
	for (int i=0; i<3; i++) nums[i]=n[i];
	printf("%s\n",S.addBinary("11","1").c_str());
	return 0;
}