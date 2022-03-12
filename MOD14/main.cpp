#include "graph.h"
#include "tree.h"

int main()
{
    cout << "---------------Graph----------------" << endl;

    graph G;

    createGraph(G);

    InsertNewNode(G, 'A');
    InsertNewNode(G, 'B');
    InsertNewNode(G, 'C');
    InsertNewNode(G, 'D');

    cout << "MEMBUAT NODE PADA GRAF" << endl;
    showPeta(G);

    cout << "MEMBUAT EDGE PADA GRAF" <<endl;
    connecting(G, 'A', 'C', 5);
    connecting(G, 'A', 'D', 10);
    connecting(G, 'B', 'D', 7);
    connecting(G, 'D', 'C', 2);

    showPeta(G);

    long long int biaya = biayaPerbaikanJalan(G);

    cout << "Total Biaya : Rp. " << biaya << endl << endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    cout << "---------------Tree----------------" << endl;

    bTree root;
    root = nil;

    adr P;

    int besar;

    insertBTS(root, allocationTree(8));
    insertBTS(root, allocationTree(3));
    insertBTS(root, allocationTree(1));
    insertBTS(root, allocationTree(6));
    insertBTS(root, allocationTree(4));
    insertBTS(root, allocationTree(7));
    insertBTS(root, allocationTree(10));
    insertBTS(root, allocationTree(14));
    insertBTS(root, allocationTree(13));

    inOrder(root);
    cout << endl;
    cout << "-----------------------------------" << endl;
    besar = maxNilai(root);
    cout << "Bilangan terbesar adalah : " << besar << endl;
    cout << "===================================" << endl;
    cout << "Print dan hitung jumlah daun" << endl;
    cout << "-----------------------------------" << endl;
    printLeaves(root);
    cout << endl;
    cout << "Jumlah Daun : " << countLeaves(root) << endl;

    return 0;
}
