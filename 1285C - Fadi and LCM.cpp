#include <bits/stdc++.h>
#define sc scanf
#define inp(t) scanf("%lld", &t)
#define FOR(x) for(int i = 0; i < x; i++)
#define pf printf
#define wh(n) while(n--)
#define ll long long
using namespace std;

int main(){
  ll n; inp(n);
  bool flag = false;
  
  for(ll i = sqrt(n); i >=2; i--){
    if(!(n%i))
      if(__gcd(i, n/i) == 1){
        flag = true;
        cout << n/i << ' ' << i << endl;
        break;
      }
  }

  if(!flag)
    cout << 1 << ' ' << n << endl;
}
