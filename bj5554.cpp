#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

long long calculate(long long a[], long long n, int size){
    long long tmp = 0;
    for (int i=0; i<size; i++){
        if (a[i] <= n) continue;
        tmp += a[i] - n;
    }
    return tmp;
}

void binarySearch(long long a[], long long s, long long e, int size, int t){
    long long mid, res, length;
    length = 0;

    while (s <= e){
        mid = (s + e) / 2;
        res = calculate(a, mid, size);
        
        // 아직 개수가 모자름 -> 자르는 높이를 낮춰야함
        if (res < t){
            e = mid - 1;
        }
        // 많이 남았을 때 -> 자르는 높이를 더 위로
        else if (res >= t){
            if (mid > length){
                length = mid;
            }
            s = mid + 1;
        }
    }
    cout << length << "\n";
}

void INPUT(){
    int n;
    long long m, mx = -1;
    cin >> n >> m;
    long long* list = new long long[n];
    for (int i=0; i<n; i++){
        cin >> list[i];
        if (list[i] > mx){
            mx = list[i];
        }
    }
    binarySearch(list, 1, mx, n, m);

    delete[] list;
}

int main(){
    INIT();
    INPUT();
    return 0;
}