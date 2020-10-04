#include <bits/stdc++.h>
using namespace std;
int main() 
{
  long long int y, k, n; cin >> y >> k >> n;

  if(y >= n)
    cout << "-1";
  else
  {
    int upperBound = n/k;
    int lowerBound = (y/k) + 1;

    if(lowerBound > upperBound)
      cout << "-1";
    else
      for(int i = lowerBound; i <= upperBound; i++)
        cout << (k*i) - y << ' ';
  }
  cout << endl;
}
