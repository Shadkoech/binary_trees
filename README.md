# 0x1D. C - Binary trees

Binary trees are a form of CS data structure in which each node has at most two children. It is non-linear and contains nodes that are connected via links. This repository contains tasks and exercises on the various key concepts of Binary trees that include:

	- Types of Binary trees
	- Traversal of Binary trees
	- Concept of a Balanced binary trees
| Task | File(s) |
| ---- | ---- |
| 0. New node | [0-binary_tree_node.c](./0-binary_tree_node.c) |
| 1. Insert left | [1-binary_tree_insert_left.c](./1-binary_tree_insert_left.c) |
| 2. Insert right | [2-binary_tree_insert_right.c](./2-binary_tree_insert_right.c) |
| 3. Delete | [3-binary_tree_delete.c](./3-binary_tree_delete.c) |
| 4. Is leaf | [4-binary_tree_is_leaf.c](./4-binary_tree_is_leaf.c) |
| 5. Is root | [5-binary_tree_is_root.c](./5-binary_tree_is_root.c) |
| 6. Pre-order traversal | [6-binary_tree_preorder.c](./6-binary_tree_preorder.c) |
| 7. In-order traversal | [7-binary_tree_inorder.c](./7-binary_tree_inorder.c) |
| 8. Post-order traversal | [8-binary_tree_postorder.c](./8-binary_tree_postorder.c) |
| 9. Height | [9-binary_tree_height.c](./9-binary_tree_height.c) |
| 10. Depth | [10-binary_tree_depth.c](./10-binary_tree_depth.c) |
| 11. Size | [11-binary_tree_size.c](./11-binary_tree_size.c) |
| 12. Leaves | [12-binary_tree_leaves.c](./12-binary_tree_leaves.c) |
| 13. Nodes | [13-binary_tree_nodes.c](./13-binary_tree_nodes.c) |
| 14. Balance factor | [14-binary_tree_balance.c](./14-binary_tree_balance.c) |
| 15. Is full | [15-binary_tree_is_full.c](./15-binary_tree_is_full.c) |
| 16. Is perfect | [16-binary_tree_is_perfect.c](./16-binary_tree_is_perfect.c) |
| 17. Sibling | [17-binary_tree_sibling.c](./17-binary_tree_sibling.c) |
| 18. Uncle | [18-binary_tree_uncle.c](./18-binary_tree_uncle.c) |
| 19. Lowest common ancestor | [100-binary_trees_ancestor.c](./100-binary_trees_ancestor.c) |
| 20. Level-order traversal | [101-binary_tree_levelorder.c](./101-binary_tree_levelorder.c) |
| 21. Is complete | [102-binary_tree_is_complete.c](./102-binary_tree_is_complete.c) |
| 22. Rotate left | [103-binary_tree_rotate_left.c](./103-binary_tree_rotate_left.c) |
| 23. Rotate right | [104-binary_tree_rotate_right.c](./104-binary_tree_rotate_right.c) |
| 24. Is BST | [110-binary_tree_is_bst.c](./110-binary_tree_is_bst.c) |
| 25. BST - Insert | [111-bst_insert.c](./111-bst_insert.c), [0-binary_tree_node.c](./0-binary_tree_node.c) |
| 26. BST - Array to BST | [112-array_to_bst.c](./112-array_to_bst.c), [111-bst_insert.c](./111-bst_insert.c), [0-binary_tree_node.c](./0-binary_tree_node.c) |
| 27. BST - Search | [113-bst_search.c](./113-bst_search.c) |
| 28. BST - Remove | [114-bst_remove.c](./114-bst_remove.c) |
| 29. Big O #BST | [115-O](./115-O) |
| 30. Is AVL | [120-binary_tree_is_avl.c](./120-binary_tree_is_avl.c) |

## Tasks
## 0. New node
* A function that creates a binary tree node
	* Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
	* Where `parent` is a pointer to the parent node of the node to create
	* And `value` is the value to put in the new node
	* When created, a node does not have any child
	* Function must return a poiter to the new node, or `NULL` on failure
## Insert left
* A function that inserts a node as the left-child of another node
	* Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
	* Where `parent` is a pointer to the node to insert the left-child in
	* And `value` is the value to store in the new node
	* Function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
	* If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node
## 2. Insert right
* A function that inserts a node as the right-child of another node
	* Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
	* Where `parent` is a pointer to the node to insert the right-child in
	* And `value` is the value to store in the new node
	* Function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
	* If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node
## 3. Delete
* A function that deletes an entire binary tree
	* Prototype: `void binary_tree_delete(binary_tree_t *tree);`
	* Where `tree` is a pointer to the root of the tree to delete
	* If `tree` is `NULL`, do nothing
## 4. Is leaf
* A function that checks if a node is a leaf
	* Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
	* Where `node` is a pointer to the node to check
	* Your function must return `1` if `node` is a leaf, otherwise `0`
	* If `node` is `NULL`, return `0`
## 5. Is root
* A function that checks if a given node is a root
	* Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
	* Where `node` is a pointer to the node to check
	* Your function must return `1` if `node` is a root, otherwise `0`
## 9. Height
* A function that measures the height of a binary tree
	* Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to measure the height
	* If `tree` is `NULL`, your function must return `0`
## 10. Depth
* A function that measures the depth of a node in a binary tree
	* Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the node to measure the depth
	* If `tree` is `NULL`, your function must return `0`
## 11. Size
* A function that measure the size of a binary tree
	* Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to measure the size
	* If `tree` is `NULL`, the function must return `0`
## 12. Leaves
* A function that counts the leaves in a binary tree
	* Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to count the number of leaves
	* If `tree` is `NULL`, the function must return `0`
	* A `NULL` pointer is not a leaf
## 13. Nodes
* A function that counts the nodes with at least 1 child in a binary tree
	* Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to count the number of nodes
	* If `tree` is `NULL`, the function must return `0`
	* A `NULL` pointer is not a node
## 14. Balance factor
* A function that measures the balance factor of a binary tree
	* Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to measure the balance factor
	* If `tree` is `NULL`, return `0`
## 15. Is full
* A function that checks if a binary tree is full
	* Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* If `tree` is `NULL`, your function must return `0`
## 16. Is perfect
* A function that checks if a binary tree is perfect
	* Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* If `tree` is `NULL`, function must return `0`
## 17. Sibling
* A function that finds the sibling of a node
	* Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
	* Where `node` is a pointer to the node to find the sibling
	* Your function must return a pointer to the sibling node
	* If `node` is `NULL` or the parent is `NULL`, return `NULL`
	* If `node` has no sibling, return `NULL`
## 18. Uncle
* A function that finds the uncle of a node
	* Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
	* Where `node` is a pointer to the node to find the uncle
	* Your function must return a pointer to the uncle node
	* If `node` is `NULL`, return `NULL`
	* If `node` has no uncle, return `NULL`
## 19. Lowest common ancestor
* A function that finds the lowest common ancestor of two nodes
	* Prototype: `binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);`
	* Where `first` is a pointer to the first node
	* And `second` is a pointer to the second node
	* Your function must return a pointer to the lowest common ancestor node of the two given nodes
	* If no common ancestor was found, function must return `NULL`
## 20. Level-order traversal
* A function that goes through a binary tree using level-order traversal
	* Prototype: `void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));`
	* Where `tree` is a pointer to the root node of the tree to traverse
	* And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function
	* If `tree` or `func` is `NULL`, do nothing
## 21. Is complete
* A function that checks if a binary tree is complete
	* Prototype: `int binary_tree_is_complete(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* If `tree` is `NULL`, your function must return `0`
## 22. Rotate left
* A function that performs a left-rotation on a binary tree
	* Prototype: `binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to rotate
	* Your function must return a pointer to the new root node of the tree once rotated
## 23. Rotate right
* A function that performs a right-rotation on a binary tree
	* Prototype: `binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to rotate
	* Function must return a pointer to the new root node of the tree once rotated
## 24. Is BST
* A function that checks if a binary tree is a valid [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
	* Prototype: `int binary_tree_is_bst(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* Function must return `1` if `tree` is a valid BST, and `0` otherwise
	* If `tree` is `NULL`, return `0`
* Properties of a Binary Search Tree:
	* The left subtree of a node contains only nodes with values less than the node’s value
	* The right subtree of a node contains only nodes with values greater than the node’s value
	* The left and right subtree each must also be a binary search tree
	* There must be no duplicate values
## 25. BST - Insert
* A function that inserts a value in a Binary Search Tree
	* Prototype: `bst_t *bst_insert(bst_t **tree, int value);`
	* Where `tree` is a double pointer to the root node of the BST to insert the value
	* And `value` is the value to store in the node to be inserted
	* Function must return a pointer to the created node, or `NULL` on failure
	* If the address stored in `tree` is `NULL` the created node must become the root node
	* If the value is already present in the tree, it must be ignored
* File [0-binary_tree_node.c](./0-binary_tree_node.c ) will be compiled during the correction
## 26. BST - Array to BST
* A function that builds a Binary Search Tree from an array
	* Prototype: `bst_t *array_to_bst(int *array, size_t size);`
	* Where `array` is a pointer to the first element of the array to be converted
	* And `size` is the number of elements in the array
	* Function must return a pointer to the root node of the created BST, or `NULL` on failure
	* If a value of the array is already present in the tree, this value must be ignored
* Files [111-bst_insert.c](./111-bst_insert.c) and [0-binary_tree_node.c](./0-binary_tree_node.c) will be compiled during the correction
## 27. BST - Search
* A function that searches for a value in a Binary Search Tree
	* Prototype: `bst_t *bst_search(const bst_t *tree, int value);`
	* Where `tree` is a pointer to the root node of the BST to search
	* And `value` is the value to search in the tree
	* Function must return a pointer to the node containing a value equals to `value`
	* If `tree` is `NULL` or if nothing is found, function must return `NULL`
## 28. BST - Remove
* A function that removes a node from a Binary Search Tree
	* Prototype: `bst_t *bst_remove(bst_t *root, int value);`
	* Where `root` is a pointer to the root node of the tree where you will remove a node
	* And `value` is the value to remove in the tree
	* Once located, the node containing a value equals to `value` must be removed and freed
	* If the node to be deleted has two children, it must be replaced with its first `in-order successor`(not predecessor)
	* Function must return a pointer to the new root node of the tree after removing desired value
## 29. Big O #BST
* What are the averages time complexities of those operations on a Binary Search Tree(one answer per line):
	* Inserting the value `n`
	* Removing the node with the value `n`
	* Searching for a node in a BST of size `n`
## 30. Is AVL
* A function that checks if a binary tree is a valid [AVL Tree](https://en.wikipedia.org/wiki/AVL_tree)
	* Prototype: `int binary_tree_is_avl(const binary_tree_t *tree);`
	* Where `tree` is a pointer to the root node of the tree to check
	* Function must return `1` if `tree` is a valid AVL Tree, and `0` otherwise
	* If `tree` is `NULL`, return `0`
* Properties of an AVL Tree:
	* An AVL Tree is a BST
	* The difference between heights of left and right subtrees cannot be more than one
	* The left and right subtrees must also be AVL trees
