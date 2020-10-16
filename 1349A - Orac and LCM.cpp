#include <bits/stdc++.h>
#define sc scanf
#define t1(t) scanf("%d", &t)
#define FOR(x) for(int i = 0; i < x; i++)
#define pf printf
#define wh(n) while(n--)
#define ll long long
using namespace std;

// returns LCM of x,y
ll LCM(ll x, ll y){ return x * (y / __gcd(x,y)); }

int main(){
  ll result = 0, prev,N, n, temp;
  cin >> n >> prev;
  
  FOR(n-1){
    cin >> N;
    temp = LCM(N,prev);
    result = __gcd(temp,result);
    prev = __gcd(prev,N);
  }
  cout << result << endl;
}
