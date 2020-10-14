#include <bits/stdc++.h>
#define sc scanf
#define t1(t) scanf("%d", &t)
#define FOR(x) for(int i = 0; i < x; i++)
#define pf printf
#define wh(n) while(n--)
#define ll long long
using namespace std;

void solve(){
  int res = 0,a,b,c,d; sc("%d%d%d%d", &a,&b,&c,&d);

  if(a == b || a == c || a==d)
    res++;
  if(b == c || b == d)
    res++;
  if(c == d)
    res++;

  pf("%d\n", res);
}

int main(){
  solve();
}
