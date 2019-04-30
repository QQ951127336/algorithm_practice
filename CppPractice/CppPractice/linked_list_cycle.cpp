#include<stdio.h>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	bool hasCycle(ListNode *head) {
		if (head == NULL)
			return false;
		ListNode *slow = head, *fast = head;
		if (head->next == NULL || head->next->next == NULL)
			return false;
		slow = head->next;
		fast = head->next->next;
		while (slow != fast) {
			if (slow->next == NULL || fast->next == NULL || fast->next->next == NULL)
				return false;
			slow = slow->next;
			fast = fast->next->next;
		}
		return true;
	}
};