#include <iostream>
#include <vector>
using namespace std;
int main() {
  int days; cin >> days;
  int arr[days], bowls, plates, count = 0;
  cin >> bowls >> plates;

  for(int i = 0; i < days; i++)
  {
    cin >> arr[i];
    if(arr[i] == 1)
    {
      if(bowls != 0)
        bowls--;
      else
        count++;
    }
    else
    {
      if(plates != 0)
        plates--;
      else if(bowls != 0)
        bowls--;
      else
        count++;
    }
  }
  cout << count << endl;
}
