#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstring>

/*
*   Chen
*   Sep 7, 2018  
*/

using namespace std;


//Definition for singly-linked list.
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* L = new ListNode(0);
        ListNode* currL;
        currL = L;
        int move = 0;
        while (l1 && l2) {
            currL->next = new ListNode(0);
            currL = currL->next;
            move += l1->val+l2->val;
            if (move>9){
                currL->val = (move)%10;
                move = 1;
            }
            else {
                currL->val = move;
                move = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            currL->next = new ListNode(0);
            currL = currL->next;
            move += l1->val;
            if (move>9){
                currL->val = (move)%10;
                move = 1;
            }
            else {
                currL->val = move;
                move = 0;
            }
            l1 = l1->next;
        }
        while (l2) {
            currL->next = new ListNode(0);
            currL = currL->next;
            move += l2->val;
            if (move>9){
                currL->val = (move)%10;
                move = 1;
            }
            else {
                currL->val = move;
                move = 0;
            }
            l2 = l2->next;
        }
        if (move) {
            currL->next = new ListNode(0);
            currL = currL->next;
            currL -> val = 1;
        }
        return L->next;
    }
};

int main(){
	Solution S;
	int n[3] = {9,9,7};
	vector<int> nums(3);
	for (int i=0; i<3; i++) nums[i]=n[i];
	int L1[1] = {1}, L2[2] = {9,9};
	printf("%d %d %d\n", L1[0], L2[1], L2[0]);
	
	ListNode* l1(0);
	ListNode* l2(0);
	l1->val = L1[0];
	l2->val = L2[0];
	l2->next = new ListNode(L2[1]);
	while (l1) {
		printf("123\n");
		printf("%d\n", l1->val);
		l1 = l1->next;
	}
	while (l2) {
		printf("123\n");
		printf("%d\n", l2->val);
		l2 = l2->next;
	}
	ListNode* L = S.addTwoNumbers(l1, l2);
	while (L) {
		printf("123\n");
		printf("%d\n", L->val);
		L = L->next;
	}
	
	return 0;
}