#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
 
        int team1 = 0, team2 = 0;
        int temp;
        // 간달프
        for (int j = 0; j < 6; j++) {
            cin >> temp;
            if (j == 0) {
                team1 += 1 * temp;
            }
            else if (j == 1) {
                team1 += 2 * temp;
            }
            else if (j == 2) {
                team1 += 3 * temp;
            }
            else if (j == 3) {
                team1 += 3 * temp;
            }
            else if (j == 4) {
                team1 += 4 * temp;
            }
            else if (j == 5) {
                team1 += 10 * temp;
            }
        }
 
        // 사우론
        for (int j = 0; j < 7; j++) {
            cin >> temp;
            if (j == 0) {
                team2 += 1 * temp;
            }
            else if (j == 1) {
                team2 += 2 * temp;
            }
            else if (j == 2) {
                team2 += 2 * temp;
            }
            else if (j == 3) {
                team2 += 2 * temp;
            }
            else if (j == 4) {
                team2 += 3 * temp;
            }
            else if (j == 5) {
                team2 += 5 * temp;
            }
            else if (j == 6) {
                team2 += 10 * temp;
            }
        }
 
        cout << "Battle " << i + 1 << ": ";
 
        if (team1 > team2) {
            cout << "Good triumphs over Evil\n";
        }
        else if (team1 < team2) {
            cout << "Evil eradicates all trace of Good\n";
        }
        else {
            cout << "No victor on this battle field\n";
        }
    }
 
    return 0;
}
 
