#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int* stack;
int top = -1;

int push(int n, int* index){
    if (*index > n){
        return 0;
    }

    stack[++top] = *index;
    (*index)++;
    return 1;
}

int pop(){
    return stack[top--];
}

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int INPUT(){
    int n, index, res;
    int ref = 0;
    
    index = 1;
    cin >> n;

    stack = new int[n];
    char* value = new char[n*2];
    int* in = new int[n];

    for (int i=0; i<n; i++){
        cin >> in[i];
    }

    for (int i=0; i<n; i++){
        while (push(in[i], &index)){
            value[ref++] = '+';
            if (stack[top] == in[i]){
                break;
            }
        }

        if (stack[top] == in[i]){
            value[ref++] = '-';
            pop();
        }
        else{
            cout << "NO" << "\n";
            return 0;
        }
    }

    for (int i=0; i<ref; i++){
        cout << value[i] << "\n";
    }

    delete[] in;
    delete[] stack;
    delete[] value;
    return 0;
}

int main(){
    INIT();
    INPUT();
    return 0; 
}
