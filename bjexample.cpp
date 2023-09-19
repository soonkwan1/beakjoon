#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <deque>
using namespace std;


typedef struct linkNode{
    int data;
    linkNode* link;
}linkNode;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
linkNode* getNode(int data){
    linkNode* temp = new linkNode;
    temp->data = data;
    temp->link = NULL;
    return temp;
}
void addNode(linkNode* ref, linkNode* n){
    linkNode* a = ref;
    while (a->link != NULL){
        a = a->link;
    }
    a->link = n;
}
void freeNode(linkNode* node){
    linkNode* temp;
    while (node->link != NULL){
        temp = node;
        node = node->link;
        delete[] temp;
    }
    delete[] node;
}

void dfs(linkNode** nodes, int* visit, int n){
    visit[n] = 1;

    
}
void INPUT() {
    int n, k;
    cin >> n >> k;
    linkNode** list = new linkNode*[n+1];
    for (int i=0; i<=n; i++){
        list[i] = getNode(i);
    }

    int start, end;
    for (int i=0; i<k; i++){
        cin >> start >> end;
        addNode(list[start], getNode(end));
        addNode(list[end], getNode(start));
    }


    for (int i=0; i<=n; i++){
        freeNode(list[i]);
    }
    delete[] list;
}

int main(){
    INIT();
    INPUT();
    return 0;
}

/*
7
6
1 2
2 3
1 5
5 2
5 6
4 7
*/