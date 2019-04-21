#include<iostream>

using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		if (head == NULL)
			return NULL;
		while (head->next != NULL && head->next->val == val) {
			head->next = head->next->next;
		}
		removeElements(head->next, val);
		if (head->val == val)
			return head->next;
		return head;
	}
};