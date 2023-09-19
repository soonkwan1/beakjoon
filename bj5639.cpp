#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

typedef struct treeNode* treePointer;
typedef struct treeNode{
    treePointer leftChild, rightChild;
    int data;
} treeNode;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

treeNode* getNode(int data){
    treeNode* tmp = new treeNode;
    tmp->data = data;
    tmp->leftChild = NULL;
    tmp->rightChild= NULL;
    return tmp;
}

void freeNode(treeNode* t){
    if (t->leftChild){
        freeNode(t->leftChild);
    }
    if (t->rightChild){
        freeNode(t->rightChild);
    }
    delete[] t;
}

treeNode* insertTree(treeNode* t, int data){
    if (t == NULL){
        treeNode* tmp = getNode(data);
        return tmp;
    }
    else if (t->data > data){
        t->leftChild = insertTree(t->leftChild, data);
    }
    else if (t->data < data){
        t->rightChild = insertTree(t->rightChild, data);
    }
    return t;
}

void postOrder(treeNode* t){
    if (t->leftChild){
        postOrder(t->leftChild);
    }
    else if (t->rightChild){
        postOrder(t->rightChild);
    }
    cout << t->data << "\n";
}

void INPUT(){
    int n;
    treeNode* t;
    while (cin >> n){
        if (n == 1000) break;
        t = insertTree(t, n);
    }
    postOrder(t);
    freeNode(t);
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
50
30
24
5
28
45
98
52
60
*/