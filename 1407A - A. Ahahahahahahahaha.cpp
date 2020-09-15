#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
  int T; cin >> T;

  while(T--)
  {
    int freqOne = 0, freqZero = 0;
    int evenOne = 0, oddOne = 0, n; cin >> n;

    int inp[n];
    for(int i = 1; i <= n; i++)
    {
      scanf("%d", &inp[i]);

      if(inp[i])
      {
        i % 2 ? oddOne++ : evenOne++;
        
        freqOne++;
      }
      else
        freqZero++;
    }

    if(evenOne == oddOne)
    {
      cout << n << endl;
      for(int i = 1; i <= n; i++)
        cout << inp[i] << ' ';
    }

    else if(freqZero >= n / 2)
    {
      int temp = n - freqOne;
      cout << temp << endl;
      while(temp--)
        cout << "0 ";
    }

    else
    {
      int temp;
      freqOne % 2 ? temp = freqOne -1 : temp = freqOne;
      cout << temp << endl;
      while(temp--)
        cout << "1 ";
    }

    cout << endl;
  }
}

