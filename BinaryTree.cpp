#include <iostream>
#include "BinaryTree.h"
using namespace std;

void BinaryTree::insertNode(int insertVal){
	root = insertNodeRecursive(root, insertVal);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue){
	if(currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->val = insertValue;
		return currentRoot;
	}
	if (insertValue < currentRoot->val){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
	}
	return currentRoot;
}
void BinaryTree::inOrder(){
	inOrderRecursive(root);
}
void BinaryTree::inOrderRecursive(Node* currentRoot){
	if(currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->val << ", ";
		inOrderRecursive(currentRoot->right);
	}
}
void BinaryTree::preOrder(){
	preOrderRecursive(root);
}
void BinaryTree::preOrderRecursive(Node* currentRoot){
		if(currentRoot!=NULL){
		cout << currentRoot->val << ", ";
		inOrderRecursive(currentRoot->left);
		inOrderRecursive(currentRoot->right);
	}
}
void BinaryTree::postOrder(){
	postOrderRecursive(root);
}
void BinaryTree::postOrderRecursive(Node* currentRoot){
	if(currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		inOrderRecursive(currentRoot->right);
		cout << currentRoot->val << ",	 ";
	}
}

void BinaryTree::findMax(){
	findMax(root);
}

void BinaryTree::findMaxRecursive(Node* currentRoot) {
	if (currentRoot == NULL) {
		cout << " tree kosong" << endl;
	} 
	else if (currentRoot->right == NULL) {
		cout << currentRoot->data;
	} 
	else {
		currentRoot->right = findMax(currentRoot->right);
	}
	return currentRoot;
}

void BinaryTree::findMin() {
	Node*minNode=findMinRecursive(root);
	if (minNode!= NULL) {
		cout << " Min Value: " << minNode->data << endl;
	} else {
		cout << " Tree kosong" << endl;
	}
}

Node*BinaryTree::findMinRecursive(Node* currentRoot) {
	if (currentRoot==NULL){
		return NULL;
	} else if (currentRoot->left == NULL) {
		return currentRoot;
	} else {
		return findMinRecursive(currentRoot->left);
	}
}

void BinaryTree::searchNode(int nilai) {
	Node* hasil = searchNodeRecursive(root, nilai);
	if (hasil != NULL) {
		cout << "Node dengan nilai " << hasil->data << " ditemukan" << endl;
	} else {
		cout << "Node tidak ditemukan " << endl;
	}
}


Node* BinaryTree::searchNodeRecursive(Node*currentRoot, int nilai){
	
	if (currentRoot == NULL || currentRoot->data == nilai) {
		return currentRoot;
	} else if (nilai < currentRoot->data) {
		return searchNodeRecursive(currentRoot->left, nilai);
	} else {
		return searchNodeRecursive(currentRoot->right, nilai);
	}
	
	return currentRoot;
}