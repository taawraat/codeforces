#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int T; cin >> T;

  while(T--)
  {
    int n,x; cin >> n >> x;

    if(n == 1 || n == 2)
      cout << '1';
    else
      cout << ceil((float)(n-2)/x) + 1;
    cout << endl;
  }
}
