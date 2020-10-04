#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int T; cin >> T;
   
   while(T--)
   {
     int n; cin >> n;
     int num[n];
     
     for(int i=0; i<n; i++)
       cin >> num[i];
       
      int min = num[n-1], badDays = 0;
      
      for(int i = n-2; i >= 0; i--)
      {
        if(num[i] > min)
          badDays++;
        
        else if(num[i] < min)
          min = num[i];
      }
      cout << badDays << endl;
   }
}
