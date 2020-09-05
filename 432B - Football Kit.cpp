#include <iostream>
using namespace std;
int main()
{
  int teams; cin >> teams;
  int home, away[teams];
  int frequency[1000000] = {};
 
  for(int i = 0; i < teams; i++)
  {
    cin >> home >> away[i];
 
    frequency[home]++;
  }
 
  for(int i = 0; i < teams; i++)
  {
    int same = frequency[away[i]];
    int homeGame = (teams - 1) + same;
    int awayGame = (teams - 1) - same;
 
    cout << homeGame << " " << awayGame << endl;
  }
}
