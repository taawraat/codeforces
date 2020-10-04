#include <bits/stdc++.h>
using namespace std;
int main() 
{
  short int T; cin >> T;
  
  while(T--)
  {
    bool exists[100] = {};

    short int n; cin >> n;

    n = 2*n;

    while(n--)
    {
      short int num; cin >> num;

      if(!exists[num]){
        cout << num << ' ';
        exists[num] = true;
      }
    }

    cout << endl;
  }
}
