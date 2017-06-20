//cpp
#include <bits/stdc++.h>
using namespace std;

unsigned long long msb(unsigned long long n) {
    for(int idx = 63; idx >= 0; idx--) {
        if((n & (1ll<<idx)) != 0)
            return 1ll << idx;
    }
    return 0;
}

bool win(unsigned long long n) {
    assert(n > 0);
    if(n == 1)
        return false;
    unsigned long long nextStep = ((n&(n-1)) == 0 ? n>>1 : n-msb(n));
    return !win(nextStep);
}


int main()
{
    unsigned long long num;

    int test;
    cin >> test;
    while(test--) {
        cin >> num;
        assert(num >= 1);
        cout << (win(num)?"Louise": "Richard");
        cout << "\n";
    }



    return 0;
}
