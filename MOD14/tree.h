#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(P) P->info
#define left(P) P->left
#define right(P) P->right
#define nil NULL

typedef int infotype;
typedef struct node *adr;

struct node {
    infotype info;
    adr left;
    adr right;
};

typedef adr bTree;

adr allocationTree(infotype X);
adr insertBTS(adr &root, adr n);
void inOrder(adr root);
adr findNode(adr root, infotype X);
int countInternalNode(adr root);
void printLeaves(adr root);
int countLeaves(adr root);
////////////////////////////////
int maxNilai(adr root);


#endif // TREE_H_INCLUDED
