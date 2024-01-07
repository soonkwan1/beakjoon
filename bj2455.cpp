#include<iostream>
#include<vector>
 
#define endl "\n"
using namespace std;
 
vector<pair<int, int>> V[4];
 
void Input()
{
    for (int i = 0; i < 4; i++)
    {
        int a, b;
        cin >> a >> b;
        V[i].push_back(make_pair(a, b));
    }
}
 
void Solution()
{
    int Total = 0;
    int Max = 0;
    for (int i = 0; i < 4; i++)
    {
        int Out = V[i].front().first;
        int In = V[i].front().second;
        
        Total = Total - Out;
        Total = Total + In;
 
        if (Max < Total) Max = Total;
    }
 
    cout << Max << endl;
 
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    //freopen("Input.txt", "r", stdin);
    Solve();
 
    return 0;
}
