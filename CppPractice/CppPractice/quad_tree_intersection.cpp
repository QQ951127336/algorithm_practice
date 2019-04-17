


// Definition for a QuadTree node.
class Node {
public:
	bool val;
	bool isLeaf;
	Node* topLeft;
	Node* topRight;
	Node* bottomLeft;
	Node* bottomRight;

	Node() {}

	Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
		val = _val;
		isLeaf = _isLeaf;
		topLeft = _topLeft;
		topRight = _topRight;
		bottomLeft = _bottomLeft;
		bottomRight = _bottomRight;
	}
};

class Solution {
public:

	Node* intersect(Node* quadTree1, Node* quadTree2) {
		if (quadTree1->isLeaf == true) {
			if (quadTree1->val) {
				transfer(quadTree1, quadTree2);
			}
			else {
				transfer(quadTree2, quadTree1);
			}
		}
		else if (quadTree2->isLeaf == true) {
			if (quadTree2->val) {
				transfer(quadTree2, quadTree1);
			}
			else {
				transfer(quadTree1, quadTree2);
			}
		}
		else {
			intersect(quadTree1->topLeft, quadTree2->topLeft);
			intersect(quadTree1->topRight, quadTree2->topRight);
			intersect(quadTree1->bottomLeft, quadTree2->bottomLeft);
			intersect(quadTree1->bottomRight, quadTree2->bottomRight);
			if (quadTree1->topLeft->val && quadTree1->topRight->val && quadTree1->bottomLeft->val && quadTree1->bottomRight->val && quadTree1->topLeft->isLeaf && quadTree1->topRight->isLeaf && quadTree1->bottomLeft->isLeaf && quadTree1->bottomRight->isLeaf) {
				quadTree1->val = true;
				quadTree2->val = true;
				quadTree1->isLeaf = true;
				quadTree2->isLeaf = true;
			}
			else if (!quadTree1->topLeft->val && !quadTree1->topRight->val && !quadTree1->bottomLeft->val && !quadTree1->bottomRight->val && quadTree1->topLeft->isLeaf && quadTree1->topRight->isLeaf && quadTree1->bottomLeft->isLeaf && quadTree1->bottomRight->isLeaf) {
				quadTree1->val = false;
				quadTree2->val = false;
				quadTree1->isLeaf = true;
				quadTree2->isLeaf = true;
			}
			else {
				quadTree1->val = false;
				quadTree2->val = false;
			}

		}
		return quadTree1;
	}
	void transfer(Node* quadTree1, Node* quadTree2) {
		quadTree2->val = quadTree1->val;
		quadTree2->isLeaf = quadTree1->isLeaf;
		quadTree2->topLeft = quadTree1->topLeft;
		quadTree2->topRight = quadTree1->topRight;
		quadTree2->bottomLeft = quadTree1->bottomLeft;
		quadTree2->bottomRight = quadTree1->bottomRight;
	}
};