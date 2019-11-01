#pragma once

class BinarySearchTree
{
public:
	BinarySearchTree();
	void addNode(int data);
	DoubleNode* searchFor(int data);

private:
	DoubleNode* head;
	DoubleNode* BinarySearch(int data, DoubleNode* current);

	void BalanceTree();		
	int BalanceFactor(DoubleNode* node);
	bool IsBalanced(DoubleNode* node);
	int Height(DoubleNode* node);
	
	DoubleNode* Rotate(DoubleNode* node);
	DoubleNode* LLrotate(DoubleNode* node);
	DoubleNode* RRrotate(DoubleNode* node);
	DoubleNode* LRrotate(DoubleNode* node);
	DoubleNode* RLrotate(DoubleNode* node);

	void DfsPostOrder(Stack<DoubleNode*>* Stack, DoubleNode* node);

};
