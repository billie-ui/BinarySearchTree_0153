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

        // memberi nilai untuk setaip object yang berada dalam prosedur insert.
        node* newNode = new node(element, nullptr, nullptr);
        newNode->info = element;
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        node* parent = nullptr;
        node* currentNode = nullptr;
        search(element, parent, currentNode);

        // membuat conditional statement
        if (parent == nullptr) {
            ROOT = newNode;
            return;
        }

        if (element < parent->info)
        {
            parent->leftchild = newNode;
        }
        else if (element > parent->info)
        {
            parent->rightchild = newNode;
        }
    }

    // Menambahkan fungsi pencarian pada BinaryTree
    void search(string element, node *&parent, node *&currentNode)
    {
        currentNode = ROOT;
        parent = NULL;

        while((currentNode != NULL) &&
            (currentNode->info != element))
            {
                parent = currentNode;

                if (element < currentNode->info)
                    currentNode = currentNode->leftchild;
                else
                    currentNode = currentNode->rightchild;
            }
    }

    // Menambahkan fungsi traversal inorder pada binaryTree
    void inorder(node *ptr)
    {
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != nullptr)
        {
            inorder(ptr->leftchild);
            cout << ptr->info << " ";
            inorder(ptr->rightchild);
        }
    }

    // Menambahkan fungsi traversal preorder pada BinarySearch
    void preorder(node *ptr)
    {
        if (ROOT == nullptr)
        {
            cout <<"Tree is empty" <<  endl;
            return;
        }

        if (ptr != nullptr)
        {
            cout << ptr->info << " ";
            preorder(ptr->leftchild);
            preorder(ptr->rightchild);
        }
    }

    // Menambahkan fungsi traversal postorder pada BinarySearch
     void postorder(node *ptr)
    {
        // perfoms the postorder traveersal of the tree
        if (ROOT == nullptr)
        {
            cout << "Tree is empty" << endl;
            return;
        }

        if (ptr != nullptr)
        {
            postorder(ptr->leftchild);
            postorder(ptr->rightchild);
            cout << ptr->info << " ";
        }
    }

}