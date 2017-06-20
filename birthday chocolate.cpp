#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; i++){
       cin >> c[i];
    }
    int d;
    int m;
    cin >> d >> m;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if (i + m - 1 < n){
            int sum = 0;
            for (int j = i; j <= i + m - 1; j++){
                sum = sum + c[j];
            }
            if (sum==d) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
