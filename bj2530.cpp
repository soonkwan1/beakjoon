#include <iostream>
#include <string>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void send(string msg, string from = "noname"){
    cout << from << ": " << msg << "\n";
}

void INPUT(){
    send("Hello, soonkwan", "Professor");
    send("Who are you?");
}

int main(){
    INIT();
    INPUT();
    return 0;
}