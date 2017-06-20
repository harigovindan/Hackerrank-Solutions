#include <bits/stdc++.h>
using namespace std;
int main() { 
    int N,M,S,T;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> N >> M >> S;
        if(!((M+S-1)%N))cout << N << endl;
        else cout << (M+S-1)%N << endl;
    }
    return 0;
}
