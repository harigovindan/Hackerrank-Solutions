#include <bits/stdc++.h>
#include<assert.h>

using namespace std;

int arr[30];
map<int, bool>mp;

void solution() {

    memset(arr, 0, sizeof(arr));
    mp.clear();

    string str;
    int n, x, len, temp, sum;
    char ch;

    cin>>str;
    len = str.size();
    assert(len>0 && len<=100000);

    for(int i=0, j; i<len; )
    {
       ch = str[i];
       j = i;
       temp = 0;
       while(j<len && str[j] == str[i])
       {
         temp++;
         j++;
       }
       arr[ch-'a'] = max(arr[ch-'a'], temp);
       i = j;
    }

    for(int i=0; i<26; i++)
    {
       sum = 0;
       for(int k=0; k<arr[i]; k++)
       {
         sum = sum+i+1;
         mp[sum] = 1;
       }
    }

    cin>>n;
    assert(n>0 && n<=100000);

    for(int i=0; i<n; i++)
    {
       cin>>x;
       assert(x>0 && x<=3000000);
       if(mp[x])
        printf("Yes\n");
       else
        printf("No\n");
    }
}


int main () {


        solution();


    return 0;
}
