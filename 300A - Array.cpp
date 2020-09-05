#include <iostream>
#include <vector>
using namespace std;
int main() 
{
  int numbers; cin >> numbers;
  int inp;
  vector<int> positive, negative, zero;
  
  for(int i = 0; i < numbers; i++)
  {
    cin >> inp;
 
    if(inp > 0)
    {
      positive.push_back(inp);
    }
    else if(inp < 0)
    {
      negative.push_back(inp);
    }
    else
    {
      zero.push_back(inp);
    }
  }
  int temp;
 
  if(positive.size() == 0)
  {
    positive.push_back(negative[negative.size() - 1]);
    negative.pop_back();
    positive.push_back(negative[negative.size() - 1]);
    negative.pop_back();
  }
  if(negative.size() % 2 == 0)
  {
    zero.push_back(negative[negative.size() - 1]);
    negative.pop_back();
  }
  cout << negative.size() << " ";
  for(int i = 0; i < negative.size(); i++)
  {
    cout << negative[i];
    if(i+1 != negative.size())
      cout << " ";
  }
  cout << endl << positive.size() << " ";
  for(int i = 0; i < positive.size(); i++)
  {
    cout << positive[i];
    if(i+1 != positive.size())
      cout << " ";
  }
  cout << endl << zero.size() << " ";
  for(int i = 0; i < zero.size(); i++)
  {
    cout << zero[i];
    if(i+1 != zero.size())
      cout << " ";
  }
  cout << endl;
}
