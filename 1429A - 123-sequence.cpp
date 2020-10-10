#include <bits/stdc++.h>
using namespace std;

int greatest(int num1,int num2, int num3){
  if (num1 >= num2){
    if (num1 >= num3)
      return num1;
    else
      return num3;
  }
  else if (num2 >= num3)
    return num2;
  else
    return num3;
}

int main(){
  int freq[5] = {0,0,0,0,0};
  int n; cin >> n;

  for(int i=0; i<n; i++){
    int num; cin >> num;
    freq[num]++;
  }

  cout << n - greatest(freq[1],freq[2],freq[3]) << endl;
  return 0;
}
