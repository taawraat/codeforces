#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  long long int num; cin >> num;
  long long int digits = 0, count = 0;
  int whole = 0;
 
  for(int i = 1; i <= num; i = i * 10)
  {  
    if(num >= i * 10)
    {
      whole = (9 * pow(10,count));
      digits += whole * (count + 1);
      count++;
    }
    else
    {
      whole = pow(10,count) - 1; 
      count++;
      digits += (num - whole) * count;
    }
  }
  cout << digits << endl;
}
