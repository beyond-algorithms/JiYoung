#include <cstdio>
#include <cstdlib>

using namespace std;


class MyCircularDeque {
private:
	int* queue;
	int TOTAL_SIZE;
	int size;
	int front;
	int end;
public:

	/** Initialize your data structure here. Set the size of the deque to be k. */
	MyCircularDeque(int k) {
		queue = (int*)malloc(k * sizeof(int));
		TOTAL_SIZE = k;
		size = 0;
		front = -1;
		end = -1;
	}

	/** Adds an item at the front of Deque. Return true if the operation is successful. */
	bool insertFront(int value) {
		if (isFull()) return false;

		if (front < 0) {
			front++;
			end++;
		}
		else {
			front = (front - 1 + TOTAL_SIZE) % TOTAL_SIZE;
		}
		queue[front] = value;
		size++;
		return true;
	}

	/** Adds an item at the rear of Deque. Return true if the operation is successful. */
	bool insertLast(int value) {
		if (isFull()) return false;

		if (front < 0) {
			front++;
			end++;
		}
		else {
			end = (end + 1) % TOTAL_SIZE;
		}
		queue[end] = value;
		size++;
		return true;
	}

	/** Deletes an item from the front of Deque. Return true if the operation is successful. */
	bool deleteFront() {
		if (isEmpty()) return false;

		if (front == end) {
			front = -1;
			end = -1;
		}
		else {
			front = (front + 1) % TOTAL_SIZE;
		}
		size--;
		return true;
	}

	/** Deletes an item from the rear of Deque. Return true if the operation is successful. */
	bool deleteLast() {
		if (isEmpty()) return false;
		if (front == end) {
			front = -1;
			end = -1;
		}
		else {
			end = (end - 1 + TOTAL_SIZE) % TOTAL_SIZE;
		}
		size--;
		return true;
	}

	/** Get the front item from the deque. */
	int getFront() {
		if (size == 0) return -1;
		return queue[front];
	}

	/** Get the last item from the deque. */
	int getRear() {
		if (size == 0) return -1;
		return queue[end];

	}

	/** Checks whether the circular deque is empty or not. */
	bool isEmpty() {
		return size==0;
	}

	/** Checks whether the circular deque is full or not. */
	bool isFull() {
		return size == TOTAL_SIZE;
	}
};

/**
* Your MyCircularDeque object will be instantiated and called as such:
* MyCircularDeque obj = new MyCircularDeque(k);
* bool param_1 = obj.insertFront(value);
* bool param_2 = obj.insertLast(value);
* bool param_3 = obj.deleteFront();
* bool param_4 = obj.deleteLast();
* int param_5 = obj.getFront();
* int param_6 = obj.getRear();
* bool param_7 = obj.isEmpty();
* bool param_8 = obj.isFull();
*/

