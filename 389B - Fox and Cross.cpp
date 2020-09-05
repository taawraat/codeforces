#include <iostream>
using namespace std;
int main() 
{
  int size; cin >> size;
  string matrix[size];

  long long int totalHash = 0, count = 0;

  for(int i = 0; i < size; i++)
  {
    cin >> matrix[i];
    
    for(int j = 0; j < size; j++)
    {
      if(matrix[i][j] == '#') totalHash++;
    }
  }

  if(!totalHash || !(totalHash % 5))
  {
    if(!totalHash)
      cout << "YES\n";
    else
    {
      for(int i = 0; i < size; i++)
      {
        for(int j = 0; j < size; j++)
        {
          if(i < size-2 && matrix[i][j] == '#' && matrix[i+1][j] == '#' && matrix[i+2][j] == '#' && matrix[i+1][j-1] == '#' && matrix[i+1][j+1] == '#')
          {
            matrix[i][j] = '.';
            matrix[i+1][j] = '.';
            matrix[i+2][j] = '.';
            matrix[i+1][j-1] = '.';
            matrix[i+1][j+1] = '.';
            count++;
          }
        }
      }

      totalHash / 5 == count ? cout << "YES\n" : cout << "NO\n";
    }
  }
  else
    cout << "NO\n";
}
