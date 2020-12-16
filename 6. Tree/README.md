# TREE

A tree is a nonlinear hierarchical data structure that consists of nodes connected by edges. It is an Undirected graph which follows any of the following properties :

-> An acyclic connected Graph. (No cycles are present)

-> graph has **N** nodes and **N-1** edges.

-> in which any two **Vertices** are connected by one path.


## Why Tree Data Structure ?
-> Different tree data structures allow quicker and easier access to the data as it is a non-linear data structure.

-> It offers an efficient search and insertion procedure.

-> The trees are flexible. This allows subtrees to be relocated with minimal effort.


## Basic Tree Terminologies :

![Tree Terminologies](../images/tree.jpg)

**Node :** A node is an entity that contains a key or value and pointers to its child nodes.

**Edge :** It is the link between any two nodes.

**Root Node :** The root node is the topmost node in the tree hierarchy. In other words, the root node is the one which doesn't have any parent.

**Leaf Node :** The node of tree, which doesn't have any child node, is called leaf node. Leaf node is the bottom most node of the tree.

**Degree :** Degree of a node is equal to number of children, a node have.

**Subtree :** Subtree represents the descendants of a node. Also known as **_Forest_**.

**Height of a Tree :** The height of a Tree is the height of the root node or the depth of the deepest node.


## Types of Trees
![Types of trees](../images/tree2.jpg)


### 1. General Tree
If no constraint is placed on the hierarchy of the tree, a tree is called a general tree. Every node may have infinite numbers of children in General Tree. The tree is the super-set of all other trees.


### 2. Binary Tree
A Binary Tree is a tree for which every node has **atmost two child nodes**.

![Binary tree](../images/tree3.png)

Types of Binary Tree :

**a) Full Binary Tree :** A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

**b) Perfect Binary Tree :** A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

**c) Complete Binary Tree :** A Binary Tree is a complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible.

![Full - Perfect - Complete Binary Tree](../images/tree4.jpg)

**d) Balanced Binary Tree :** A binary tree is balanced if the height of the tree is O(Log n) where n is the number of nodes. And the difference between the left and the right subtree for each node is either 0 or 1. Balanced Binary Search trees are performance-wise good as they provide O(log n) time for search, insert and delete. 

**e) Degenerate or Pathological Tree :** A degenerate or pathological tree is the tree having a single child either left or right.

**f) Skewed Binary Tree :** A skewed binary tree is a pathological/degenerate tree in which the tree is either dominated by the left nodes or the right nodes. Thus, there are two types of skewed binary tree: **_left-skewed binary tree_** and **_right-skewed binary tree_**.

![Balanced - Degenerate - Pathological](../images/tree5.jpg)
