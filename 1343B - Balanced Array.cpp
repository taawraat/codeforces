#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int T; cin >> T;

  while(T--)
  {
    long long int evenSum = 0, oddSum = 0,num; cin >> num;

    if((num/2) & 1)
    {
      cout << "NO\n";
      continue;
    }
    cout << "YES\n";
    for(int i = 2; i <= num; i += 2)
    {
      cout << i << ' ';
      evenSum += i;
    }
    int lastPos = num/2, count = 1;
    for(int i = 1; ; i += 2)
    {
      if(count == lastPos)
      {
        cout << evenSum - oddSum;
        break;
      }
      cout << i << ' ';
      oddSum += i;
      count++;
    }
    cout << endl;
  }
}
