/////////////////////////////
//              1
//           /     \
//         -2       -3
//       /   \     /   \ 
//      4    -6  -5     7
//           /           \
//          8             -9
/////////////////////////////

TNode<int>* createTree()
{
	TNode<int> *l4 = new TNode<int>(4), *l8 = new TNode<int>(8), *lm5 = new TNode<int>(-5), *lm9 = new TNode<int>(-9),
		*nm6 = new TNode<int>(-6, l8, nullptr), *n7 = new TNode<int>(7, nullptr, lm9),
		*nm2 = new TNode<int>(-2, l4, nm6), *nm3 = new TNode<int>(-3, lm5, n7),
		*root = new TNode<int>(1, nm2, nm3);

	return root;
}