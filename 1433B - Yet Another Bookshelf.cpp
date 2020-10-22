#include <bits/stdc++.h>
#define sc scanf
#define inp(t) scanf("%d", &t)
#define FOR(n,x) for(int i = n; i < x; i++)
#define FOR2(N,X) for(int j = N; j < X; j++)
#define pf printf
#define wh(n) while(n--)
#define ll long long
using namespace std;

int main(){
  int n;
  inp(n);
  wh(n){
    int x; inp(x);
    bool leftFound = false, rightFound = false;
    int num, count = 0, zero = 0;

    FOR(0,x){
      inp(num);
      if(num == 1)
        leftFound = true;
      
      else if(leftFound && !num)
        zero++;
      
      if(leftFound && num){
        count += zero;
        zero = 0;
      }
    }
    cout << count << endl;
  }
}
