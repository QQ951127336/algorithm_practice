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
		  map<ListNode*, bool > save;
		  while (headA != NULL || headB != NULL) {
			  if (headA != NULL) {
				  int val = headA->val;
				  if (save.count(headA)) {
					  return headA;
				  }
				  else {
					  save[headA] = true;
					  headA = headA->next;
				  }
			  }
			  if (headB != NULL) {
				  int val = headB->val;
				  if (save.count(headB)) {
					  return headB;
				  }
				  else {
					  save[headB] = true;
					  headB = headB->next;
				  }
			  }

		  }
		  return NULL;
	  }
  };