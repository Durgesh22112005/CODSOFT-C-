#include <iostream>
using namespace std;
int
main ()
{
  cout << "       SIMPLE CALCULATOR" << endl << endl;
  int a, b;
  char s;
  cout << "Enter the number1: ";
  cin >> a;
  cout << endl;
  cout << "Enter the number2: ";
  cin >> b;
  cout << endl;
  cout << "Enter the Operation (+,-,*,/) : ";
  cin >> s;
  cout << endl;
  if (s == '+')
	{
	  cout << "The sum of " << a << " and " << b << " is " << a + b;
	}
  else if (s == '-')
	{
	  cout << "The subtraction of " << a << " and " << b << " is " << a - b;
	}
  else if (s == '*')
	{
	  cout << "The multiplication of " << a << " and " << b << " is " << a *
		b;
	}
  else if (s == '/')
	{
	  cout << "The division of " << a << " and " << b << " is " << a / b;
	}
  else
	{
	  cout << "Enter the correct operator";
	}

}
