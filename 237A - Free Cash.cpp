#include <iostream>
using namespace std;
int main() 
{
  int customers; cin >> customers;
  int freeCashes = 1, count = 1, previousHour = -1, previousMinute = -1;
 
  while(customers--)
  {
    int hour,minute; cin >> hour >> minute;
 
    if(previousHour == hour && previousMinute == minute)
    {
      count++;
      if(count > freeCashes)
        freeCashes++;
    }
    else
    {
      previousHour = hour;
      previousMinute = minute;
      count = 1;
    }
  }
 
  cout << freeCashes << endl;
}
