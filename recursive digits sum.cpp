#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef  long long ll;
 
ull fun(ull x){
    if(x < 10){
        return x;
    }
    ull ret  = 0;
    while(x > 0){
        ret += (x%10);
        x /= 10;
    }
    return fun(ret);
 
}
 
void solve(){
  string s;
  cin>>s;
  ll k;
  cin>>k;
  ull sum = 0;
  for(int i=0;i<s.size();i++){
    sum += s[i] - '0';
  }
  sum *= k;
  cout<<fun(sum)<<endl;
}
 
int main(){
std::ios::sync_with_stdio(0);
solve();
}  
