#pragma once

template <typename T>
class BinOrdTree {
private:
	TNode<T> *root;
	void copyTree(TNode<T>*&, TNode<T>* const&) const;
	void deleteTree(TNode<T>*&);
	void printTree(TNode<T> *) const;

	void add(TNode<T> * &, T const &) const;
	void minTree(T &, BinOrdTree<T> &) const;
public:
	BinOrdTree();
	BinOrdTree(BinOrdTree<T> const&);
	BinOrdTree<T>& operator=(BinOrdTree<T> const&);
	~BinOrdTree();

	void create();
	void createWithData(T const&, BinOrdTree<T> const&, BinOrdTree<T> const&);

	T getRootData() const;
	TNode<T>* getRootPtr() const;
	BinOrdTree<T> getLeftTree() const;
	BinOrdTree<T> getRightTree() const;

	bool isEmpty() const;
	void print() const;

	void addNode(T const &);
	void deleteNode(T const &);
};