#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <iostream>

using namespace std;

#define idNode(p) (p)->idNode
#define nextNode(p) (p)->nextNode
#define firstEdge(p) (p)->firstEdge
#define id(p) (p)->id
#define jarak(p) (p)->jarak
#define nextEdge(p) (p)->nextEdge
#define first(G) (G).first
#define nil NULL

typedef struct Node *adrNode;
typedef struct Edge *adrEdge;

struct Node{
    char idNode;
    adrNode nextNode;
    adrEdge firstEdge;
};

struct Edge{
    char id;
    int jarak;
    adrEdge nextEdge;
};

struct graph{
    adrNode first;
};

void createNode(char X, adrNode &p);
void createGraph(graph &G);
void showPeta(graph G);
void InsertNewNode(graph &G, char idNode);
adrNode FindNode(graph G, char id_Node);
void connecting(graph &G, char Node1, char Node2, int jarak);
long long int biayaPerbaikanJalan(graph G);


#endif // GRAPH_H_INCLUDED
