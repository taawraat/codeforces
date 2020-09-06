#include <iostream>
using namespace std;
int main() 
{
  int total; cin >> total;
  int friends[total];

  for(int i = 1; i <= total; i++)
  {
    int temp; cin >> temp;

    friends[temp] = i;
  }
  
  for(int i = 1; i <= total; i++)
    cout<< friends[i] << " ";
  
  cout << endl;
}
