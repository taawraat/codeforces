using namespace std;
int main() 
{
  string remixedSong;
  getline(cin, remixedSong);
 
  int firstPrint = 1;
 
  for(int i = 0; remixedSong[i] != '\0'; i++)
  {
    if(remixedSong[i] == 'W' && remixedSong[i+1] == 'U' && remixedSong[i+2] == 'B')
    {
      if(i != 0 && remixedSong[i+1] != '\0' && !firstPrint)
        cout << " ";
      firstPrint = 1;
      i = i + 2;
      continue;
    }
 
    cout << remixedSong[i];
    firstPrint = 0;
  }
 
  cout << endl;
}
