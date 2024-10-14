#include <iostream>
#include <vector>
using namespace std;
 
int T;
vector<pair<int, int>> V;
int Festival[2][7];
 
void Input()
{
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b; cin >> a >> b;
        V.push_back(make_pair(a, b));
    }
}
 
void Setting()
{
    for (int i = 1; i <= 6; i++) Festival[0][i] += Festival[0][i - 1] + i;
    for (int i = 1, A = 1; i <= 5; i++, A *= 2) Festival[1][i] += Festival[1][i - 1] + A;
}
 
int Find_Ranking(int Rank, int Idx)
{
    if (Rank == 0) return 0;
    if (Rank == 1) return 1;
    for (int i = 1; i < 6 - Idx; i++)
    {
        if (Festival[Idx][i] <= Rank && Rank <= Festival[Idx][i + 1]) return i + 1;
    }
    return 0;
}
 
int Find_Money(int Rank, int Idx)
{
    if (Rank == 0) return 0;
    if (Idx == 0)
    {
        if (Rank == 1) return 5000000;
        if (Rank == 2) return 3000000;
        if (Rank == 3) return 2000000;
        if (Rank == 4) return 500000;
        if (Rank == 5) return 300000;
        if (Rank == 6) return 100000;
    }
    else
    {
        if (Rank == 1) return 5120000;
        if (Rank == 2) return 2560000;
        if (Rank == 3) return 1280000;
        if (Rank == 4) return 640000;
        if (Rank == 5) return 320000;
    }
}
 
void Calculate()
{
    for (int i = 0; i < T; i++)
    {
        int A = V[i].first;
        int B = V[i].second;
        
        int Ranking1 = Find_Ranking(A, 0);
        int Prize1 = Find_Money(Ranking1, 0);
        int Ranking2 = Find_Ranking(B, 1);
        int Prize2 = Find_Money(Ranking2, 1);
 
        cout << Prize1 + Prize2 << endl;
    }
}
 
void Solution()
{
    Setting();
    Calculate();
}
 
void Solve()
{
    Input();
    Solution();
}
 
int main(void)
{
    //freopen("Input.txt", "r", stdin);
    Solve();
    return 0;
}
