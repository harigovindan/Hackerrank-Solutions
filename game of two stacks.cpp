#include <iostream>
#include <vector>
#define repeat(i,n) for (int i = 0; (i) < int(n); ++(i))
using ll = long long;
using namespace std;
template <class T> void setmax(T & a, T const & b) { if (a < b) a = b; }
int main() {
    int games; cin >> games;
    while (games --) {
        int na, nb, x; cin >> na >> nb >> x;
        vector<int> a(na); repeat (i,na) cin >> a[i];
        vector<int> b(nb); repeat (j,nb) cin >> b[j];
        int result = 0;
        int i = 0;
        ll acc = 0;
        while (i < na and acc + a[i] <= x) {
            acc += a[i];
            ++ i;
        }
        int j = 0;
        while (true) {
            while (j < nb and acc + b[j] <= x) {
                acc += b[j];
                ++ j;
            }
            setmax(result, i + j);
            if (i == 0) {
                break;
            } else {
                -- i;
                acc -= a[i];
            }
        }
        cout << result << endl;
    }
    return 0;
}
