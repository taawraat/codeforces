#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n, k, goodNum = 0; 
  scanf("%d%d\n", &n,&k);

  while(n--)
  {
    int exists[10] = {};
    bool isGood = false;
    int count = 0;
    string num; cin >> num;

    for(int i = 0; num[i] != '\0'; i++)
    {
      int digit = num[i] - 48;
      if(!exists[digit] && digit <= k)
      {
        exists[digit] = 1;
        count++;
      }
      if(count == (k+1))
      {
        isGood = 1;
        break;
      }
    }
    if(isGood)
      goodNum++;
  }
  cout << goodNum << endl;
}
