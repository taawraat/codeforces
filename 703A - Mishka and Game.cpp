#include <bits/stdc++.h>
using namespace std;
int main() 
{
  short int rounds; cin >> rounds;
  short int mishkaWon = 0,chrisWon = 0;

  while(rounds--)
  {
    short int mishka,chris; cin >> mishka >> chris;

    if(mishka == chris) continue;
    else if(mishka > chris) mishkaWon++;
    else chrisWon++;
  }

  if(mishkaWon == chrisWon)
    cout << "Friendship is magic!^^";
  else if(mishkaWon > chrisWon)
    cout << "Mishka";
  else
    cout << "Chris";
  
  cout << endl;
}
