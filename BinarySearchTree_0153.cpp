#include <iostream>
using namespace std;

//Membuat class node
class node{

    // memberi akses modifier serta mendeklarasi variable dan object node.
public :
    string info;
    node* leftchild;
    node* rightchild;


    // Membuat constructor untuk class node.
    node(string i, node* l, node* r) {
        // memberi nilai parameter ke variabel.
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

//membuat class binary tree
class BinaryTree {

    // memberi akses modifier dan deklarasi object.
public :
    node* ROOT;

    // membuat constructor dan memberi nilai kepada object root
    BinaryTree(){
        ROOT = nullptr;
    }

    // membuat prosedur insert.
    void insert (string element) {

        // memberi nilai untuk setaip object yang berada dalam prosedur insert
        node* newNode = new node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        node* parent = nullptr;
        node* currentNode = nullptr;
        search(element, parent, currentNode);

        // membuat conditional statement
    }
}