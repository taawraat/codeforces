#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num; cin >> num;

  int sub; cin >> sub;

  while(sub--)
  {
    if(num % 10 == 0)
      num /= 10;
    else
      num--;
  }
  cout << num << endl;
}
