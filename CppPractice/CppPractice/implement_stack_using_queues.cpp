#include<queue>

using namespace std;

class MyStack {
public:
	/** Initialize your data structure here. */
	queue<int> save;
	queue<int> mid;
	MyStack() {
		while (!save.empty()) {
			save.pop();
		}
		while (!mid.empty()) {
			mid.pop();
		}
	}

	/** Push element x onto stack. */
	void push(int x) {
		save.push(x);
	}

	/** Removes the element on top of the stack and returns that element. */
	int pop() {
		int result;
		while (!save.empty()) {
			if (save.size() != 1) {
				mid.push(save.front());
				save.pop();
			}
			else {
				result = save.front();
				save.pop();
			}
		}
		while (!mid.empty()) {
			save.push(mid.front());
			mid.pop();
		}

		return result;
	}

	/** Get the top element. */
	int top() {
		int result;
		while (!save.empty()) {
			if (save.size() == 1) {
				result = save.front();
			}

			mid.push(save.front());
			save.pop();
		}
		while (!mid.empty()) {
			save.push(mid.front());
			mid.pop();
		}

		return result;
	}

	/** Returns whether the stack is empty. */
	bool empty() {
		return save.empty();
	}
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */