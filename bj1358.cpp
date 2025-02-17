#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

bool isRecRange(double nx, double ny, double xs, double xe, double ys, double ye){
    if (nx < xs || nx > xe) return false;
    if (ny < ys || ny > ye) return false;
    return true;
}
void INPUT(){
    double w, h, x, y, p; cin >> w >> h >> x >> y >> p;
    double x_start = x; double y_start = y;
    double x_end = x_start + w; double y_end = y_start + h;

    double rad = h / 2;
    double r1x = x_start; double r2x = x_start + w;
    double r1y = y_start + rad; double r2y = y_start + rad;

    int ans = 0;
    for (int i=0; i<p; i++){
        double nx, ny; cin >> nx >> ny;
        if (isRecRange(nx ,ny, x_start, x_end, y_start, y_end)){
            ans++;
        }
        else{
            double tmp1 = sqrt(pow(r1x - nx, 2) + pow(r1y - ny, 2));
            double tmp2 = sqrt(pow(r2x - nx, 2) + pow(r2y - ny, 2));
            if (tmp1 <= rad || tmp2 <= rad) ans++;
        }
    }
    cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}