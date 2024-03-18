#include <bits/stdc++.h>
using namespace std;
int main ()
{
  srand (time (0));
  int randnum = rand () % 100;
  int inputnum = 0;
  int times = 0;
  do
	{
	  times++;
	  cout << "Guess the Number within (1 - 100) : ";
	  cin >> inputnum;
	  cout << endl;
	  if (inputnum == randnum)
		{
		  cout << "CONGRATS! You guess the correct number in " << times <<"th time.";
		}
	  else if (inputnum > randnum)
		{
		  cout << "TOO HIGH!" << endl<<endl;
		}
	  else if (inputnum < randnum)
		{
		  cout << "TOO LOW!" << endl<<endl;
		}

	}
  while (inputnum != randnum);
}
