#include <iostream>
#include <bitset>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    bitset<100000>A,B;
    cin>>A>>B;

    cout<<(A&B)<<'\n';
    cout<<(A|B)<<'\n';
    cout<<(A^B)<<'\n';
    cout<<(~A)<<'\n';
    cout<<(~B)<<'\n';
}
