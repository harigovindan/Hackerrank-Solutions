#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,N,C,M,ans = 0;
    cin >> T;
    while(T--){
        cin >> N >> C >> M;
        int tmp = ans = N/C;
        while(tmp >= M){
            ans++;
            tmp-=M;
            tmp++;
        }
        cout << ans << endl;
    }
    return 0;
}
