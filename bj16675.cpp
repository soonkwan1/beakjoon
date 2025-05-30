#include <iostream>

using namespace std;

int calc(char a, char b)
{//0, 1, 2 이김, 짐, 비김
    if (a == 'R')
    {
        if(b == 'S') return 0;
        else if (b == 'R') return 2;
        else return 1;
    }
    if (a == 'S')
    {
        if(b == 'P') return 0;
        else if (b == 'S') return 2;
        else return 1;
    }
    if (a == 'P')
    {
        if(b == 'R') return 0;
        else if (b == 'P') return 2;
        else return 1;
    }
}

int main()
{
    char mr, ml, tr, tl;
    int m = 0, t = 0;

    cin >> mr >> ml >> tr >> tl;

    if (calc(mr, tr) == 0) m++;
    if (calc(mr, tr) == 1) t++;

    if (calc(mr, tl) == 0) m++;
    if (calc(mr, tl) == 1) t++;

    if (calc(ml, tr) == 0) m++;
    if (calc(ml, tr) == 1) t++;

    if (calc(ml, tl) == 0) m++;
    if (calc(ml, tl) == 1) t++;

    if (mr != ml && tr != tl)
    {
        if (m > 0 && t > 0)
            cout << "?" << endl;
        if (m == 4)
            cout << "MS" << endl;
        if (t == 4)
            cout << "TK" << endl;
    }
    else
    {
        if (mr == ml && t > 0)
            cout << "TK" << endl;
        else if (tr == tl && m > 0)
            cout << "MS" << endl;
        else
            cout << "?" << endl;
    }
}
