# C - Binary trees

Binary Tree is a special datastructure used for data storage purposes. A binary tree has a special condition that each node can have a maximum of two children. A binary tree has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.
We are learning this datastructure in C.  
This is a group project.


## Requirements
* All files were compiled on Ubuntu 20.04 LTS using gcc,  using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* This code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl


## Data Structure and types for binary trees

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

__Binary Search Tree__
```
typedef struct binary_tree_s bst_t;
```
__AVL Tree__
```
typedef struct binary_tree_s avl_t;
```
__Max Binary Heap__

```
typedef struct binary_tree_s heap_t;
```

## Tasks
__0. __  

File: 

## Repo
* GitHub repository: holbertonschool-binary_trees

