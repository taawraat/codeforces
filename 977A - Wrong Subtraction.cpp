#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num, sub; cin >> num >> sub;
  
  while(sub--)
    num % 10 ? num-- : num /= 10;

  cout << num << endl;
}
