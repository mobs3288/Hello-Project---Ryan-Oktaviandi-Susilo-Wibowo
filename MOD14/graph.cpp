#include "graph.h"

void createNode(char X, adrNode &P) {
    P = new Node;

    idNode(P) = X;
    nextNode(P) = nil;
    firstEdge(P) = nil;
}

void createGraph(graph &G) {
    first(G) = nil;
}

void showPeta(graph G) {
    adrNode N = first(G);
    adrEdge E;

    if (N !=  nil){
        while (N != nil){
            cout << idNode(N) <<endl;
            E = firstEdge(N);
            while (E != nil){
                cout << idNode(N)<<" ke " << id(E) << " : " << jarak(E) << "km" << endl;
                E = nextEdge(E);
            }
            cout << endl;
            N = nextNode(N);
        }
    } else {
        cout << "GRAF KOSONG"<< endl;
    }
}

void InsertNewNode(graph &G, char idNode) {
    adrNode P;
    createNode(idNode, P);

    if (first(G)==nil){
        first(G) = P;

    } else {
        adrNode Q = first(G);

        while (nextNode(Q) != nil){
            Q = nextNode(Q);
        }
        nextNode(Q) = P;
    }
}

adrNode FindNode(graph G, char id_Node) {
    adrNode P = first(G);

    while (P != nil){
        if (idNode(P) == id_Node){
            return P;
        }
        P = nextNode(P);
    }

    return nil;
}

void connecting(graph &G, char Node1, char Node2, int jarak) {
    adrEdge E = new Edge;

    id(E) = Node2;
    jarak(E) = jarak;
    nextEdge(E) = nil;

    adrNode P = FindNode(G, Node1);

    if (firstEdge(P) == nil){
        firstEdge(P) = E;
    } else {
        adrEdge Q = firstEdge(P);

        while (nextEdge(Q) != nil){
            Q = nextEdge(Q);
        }
        nextEdge(Q) = E;
    }
}

long long int biayaPerbaikanJalan(graph G) {
    adrNode N = first(G);
    adrEdge E;

    int total = 0;
    long long int meter = 0;
    long long int biaya = 0;

    while (N != nil){
        E = firstEdge(N);

        while (E != nil){
            total = total + jarak(E);
            E = nextEdge(E);
        }
        N = nextNode(N);
    }

    meter = total * 1000;
    biaya = meter * 1000000;

    return biaya ;
}
