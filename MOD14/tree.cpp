#include "tree.h"

adr allocationTree(infotype X) {
    adr P = new node;

    info(P) = X;
    left(P) = nil;
    right(P) = nil;

    return P;
}

adr insertBTS(adr &root, adr n) {
    if (root == nil) {
        root = n;

    } else {
        if (info(n) < info(root)) {
            left(root) = insertBTS(left(root), n);
        } else {
            right(root) = insertBTS(right(root), n);
        }
    }

    return root;
}

void inOrder(adr root) {
    if (root != nil){
        inOrder(left(root));

        cout << info(root) << " ";

        inOrder(right(root));
    }
}

adr findNode(adr root, infotype X) {
    if (root == nil || info(root) == X) {
        return root;
    }
    else if (X > info(root)) {
        findNode(right(root), X);
    }
    else if (X < info(root)) {
        findNode(left(root), X);
    }
}

int countInternalNode(adr root) {
    int internalNode = 0;

    if (root != nil && (left(root) != nil || right(root) != nil)) {
        internalNode = 1 + countInternalNode(left(root)) + countInternalNode(right(root));
    }

    return internalNode;
}

void printLeaves(adr root) {
    if (root != nil) {
        if (left(root) == nil && right(root) == nil) {
            cout << info(root) << ' ';
        } else {
            if (left(root) != nil) {
                printLeaves(left(root));
            }
            if (right(root) != nil) {
                printLeaves(right(root));
            }
        }
    }
}

int countLeaves(adr root) {
    int leaves = 0;

    if (root != nil) {
        if (left(root) == nil && right(root) == nil) {
            leaves = 1;
        } else {
            leaves = countLeaves(left(root)) + countLeaves(right(root));
        }
    }

    return leaves;
}


int maxNilai(struct node* node) {
    struct node* current = node;

    while (current->right != nil)
        current = current->right;

    return (current->info);

}
