#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
 
    vector<int> answer;
 
    for (int i = -1000; i <= 1000; i++)
    {
        int result = (i * i) + (2 * a * i) + b;
        if (result == 0) answer.push_back(i);
    }
 
    for (int ele : answer) cout << ele << " ";
 
    return 0;
}
