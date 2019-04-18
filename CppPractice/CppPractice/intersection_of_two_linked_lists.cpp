#include <iostream>
#include<map>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		map<int, bool > save;
		while (headA != NULL || headB != NULL) {
			if (headA != NULL) {
				int val = headA->val;
				if (save.count(val)) {
					return headA;
				}
				else {
					save[val] = true;
					headA = headA->next;
				}
			}
			if (headB != NULL) {
				int val = headB->val;
				if (save.count(val)) {
					return headB;
				}
				else {
					save[val] = true;
					headB = headB->next;
				}
			}

		}
		return NULL;
	}
};