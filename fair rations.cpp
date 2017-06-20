#include<bits/stdc++.h>
using namespace std;
int arr[1010];
int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i = 0 ; i < n ;i++) {
        sum += arr[i];
    }

    if(sum & 1) {
        printf("NO\n");
    }
    else {
        int count = 0;
        for(int i = 0 ; i < (n-1) ; i++) {
            if(arr[i] & 1) {
                arr[i]++;
                arr[i+1]++;
                count += 2;
            }
        }
        cout << count << endl;
    }

    return 0;
}
