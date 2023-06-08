class Node{
	public:
		int val;
		
		Node *left;
		Node *right;
	
	Node (){
		left = right =NULL;
	}
};

class BinaryTree{
	
		public:
		void insertNode(int);
		Node *insertNodeRecursive(Node*, int);
		
		void deleteNode(int);
		
		void preOrder();
		void preOrderRecursive(Node*);
		
		void inOrder();
		void inOrderRecursive(Node*);
		
		void postOrder();
		void postOrderRecursive(Node*);
		
		void searchNode(int);
		Node*searchNodeRecursive(Node*, int);
		
		void findMin();
		Node *findMinRecursive (Node*);
		
		void findMax();
		Node *findMaxRecursive (Node*);
		
		Node *root;
			BinaryTree (){
			root = NULL;
	}
};