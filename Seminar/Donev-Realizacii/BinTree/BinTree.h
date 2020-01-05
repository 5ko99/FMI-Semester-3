template <typename T>
class BinTree {
private:
	TNode<T> *root;
	void copyTree(TNode<T>*& , TNode<T>* const&) const;
	void deleteTree(TNode<T>*&);
	void createTree(TNode<T>*&);
	void printTree(TNode<T> *) const;
public:
	BinTree();
	BinTree(BinTree<T> const&);
	BinTree<T>& operator=(BinTree<T> const&);
	~BinTree();

	void create();
	void createWithData(T const&, BinTree<T> const&, BinTree<T> const&);

	T getRootData() const;
	TNode<T>* getRootPtr() const;
	BinTree<T> getLeftTree() const;
	BinTree<T> getRightTree() const;

	bool isEmpty() const;
	void print() const;
};