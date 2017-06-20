#include <iostream>
#include <set>
#include <map>
#include<vector>
#include <algorithm>

using namespace std;

int row, col, k;
map<int, vector<pair<int, int>>> in;


long long len(vector<pair<int, int>> & v) {
    sort(v.begin(), v.end());
    auto it = v.begin();

    int a = it->first;
    int b = it->second;
    long long r = 0;
    it++;

    for (; it != v.end(); it++) {
        if (it->first <= b) {
            b = max(b, it->second);
        }
        else {
            r += (b - a + 1);
            a = it->first;
            b = it->second;
        }
    }
    r += (b - a + 1);

    return r;
}

int main() {
    cin >> row >> col >> k;
    while (k--) {
        int r, a, b; cin >> r >> a >> b;
        in[r].push_back(make_pair(a, b));
    }

    long long res = (long long)row * col;

    for (auto &it : in) {
        res -= len(it.second);
    }
    cout << res << endl;
    return 0;
}
