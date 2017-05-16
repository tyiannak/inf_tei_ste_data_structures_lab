#include <stdio.h>
#include <stdlib.h>
#include "libs/mybinsearchtree.h"

int main()
{
    bst_node *tree;
    tree = bst_init();    
    tree = bst_insert(tree, 6);
    tree = bst_insert(tree, 2);
    tree = bst_insert(tree, 1);
    tree = bst_insert(tree, 4);
    tree = bst_insert(tree, 3);
    tree = bst_insert(tree, 5);
    tree = bst_insert(tree, 7);
    tree = bst_insert(tree, 9);
    tree = bst_insert(tree, 8);
    print_tree(tree, 5);

    printf("ordered:\n");
    bst_printOrdered(tree);
    printf("preordered:\n");
    bst_printPreOrdered(tree);
    printf("postordered:\n");
    bst_printPostOrdered(tree);    

    return 0;
}


