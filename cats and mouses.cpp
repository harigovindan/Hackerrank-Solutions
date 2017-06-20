#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while( t-- ) {
        int p, q, r;
        cin >> p >> q >> r;
        puts(abs(p-r) == abs(q-r) ? "Mouse C": ( abs(p-r) < abs(q-r) ? "Cat A" : "Cat B"));
    }
}
