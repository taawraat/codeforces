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
      cout << freqZero << endl;
      
      while(freqZero--)
        cout << "0 ";
    }

    else
    {
      freqOne % 2 ? freqOne-- : freqOne;
      cout << freqOne << endl;
      
      while(freqOne--)
        cout << "1 ";
    }

    cout << endl;
  }
}
