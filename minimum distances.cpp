#include<bits/stdc++.h>
#define ll long long
#define MIN(a, b) a < b ? a : b
#define MAX(a, b) a > b ? a : b
using namespace std;
int arr[1010];
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]);
    }

    int dist = INT_MAX;
    for(int i = 0 ; i < n; i++) {
        for(int j = 0 ; j < i ; j++) {
            if(arr[i] == arr[j]) {
                dist = MIN(dist, abs(i - j));
            }
        }
    }

    if(dist == INT_MAX) {
        dist = -1;
    }

    cout << dist << endl;

    return 0;
}
