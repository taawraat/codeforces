#include <iostream>
using namespace std;
int main() 
{
  int kirito, levels; cin >> kirito >> levels;
  int canDefeat = 1, previous, dragons[levels][2];
  
  for(int i = 0; i < levels; i++)
    cin >> dragons[i][0] >> dragons[i][1];
  
  for(int i = 0; i < levels - 1; i++)
  {
    for(int j = 0; j < levels - i - 1; j++)
    {
      if(dragons[j][0] > dragons[j+1][0])
      {
        int temp = dragons[j][0];
        dragons[j][0] = dragons[j+1][0];
        dragons[j+1][0] = temp;
        
        temp = dragons[j][1];
        dragons[j][1] = dragons[j+1][1];
        dragons[j+1][1] = temp;
      }
    }
  }
  for(int i = 0; i < levels; i++)
  {
    if(dragons[i][0] >= kirito)
    {
      canDefeat = 0;
      break;
    }
    kirito += dragons[i][1];
  }
  canDefeat ? cout << "YES\n" : cout << "NO\n";
}
