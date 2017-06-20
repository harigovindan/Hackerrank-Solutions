#include <iostream>
#include <algorithm>
using namespace std;
 
 
// It is NOT mandatory to use the provided template. You can handle the IO section differently.
 
int main() {
    /* The code required to enter n,k, candies is provided*/
 
    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++){
        cin >> candies[i];
    }
 
    sort(candies, candies + N);
 
    unfairness = candies[N-1] - candies[0];
    
    for(int i = 0; i < (N - K - 1); i++){
        int compareUnfair = candies[i + K - 1] - candies[i];
        if(unfairness > (compareUnfair)){
            unfairness = compareUnfair;
        }
    }
 
    // for(int i = 0; i < N; i++){
    //     cout << candies[i] << endl;
    // }
 
    cout << unfairness << "\n";
    return 0;
}

