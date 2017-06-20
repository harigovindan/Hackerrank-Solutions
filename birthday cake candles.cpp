#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int height_i = 0;height_i < n;height_i++){
       cin >> a[height_i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    int c=1,temp=a[0];
    for(int i=1;i<n;i++)
        {
        if(a[i]==temp){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}

