#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

/*
*   Chen
*   Sep 6, 2018  
*   KMP algorithm
*/

using namespace std;

class Solution {
public:
    void geneTab(string W, vector<int> &T){
        int pos = 1, cnd = 0;
        T[0]=-1;
        for (pos=1; pos<int(W.length()); pos++){
            if (W[pos]==W[cnd]) {
            T[pos]=T[cnd];
            cnd++;
            }
            else {
            T[pos]=cnd;
            cnd=T[cnd];
            while (cnd>=0 && W[pos]!=W[cnd]){
                cnd=T[cnd];
            }
            cnd++;
            }
        }
    }
    int strStr(string haystack, string needle) {
        int LN = needle.length(), LH = haystack.length();
        if (LN==0) return 0;
        vector<int> T(LN);
        geneTab(needle, T);
        int j=0, k=0;
        while (j<LH){
            if (haystack[j]==needle[k]){
                k++;
                j++;
                if (k==LN) return j-k;
            }
            else{
                k=T[k];
                if (k<0) {
                    j++;
                    k++;
                }
            }
        }
        return -1;
    }
};

int main(){
	Solution S;
	printf("%d\n",S.strStr("hello", "llt"));
	return 0;
}