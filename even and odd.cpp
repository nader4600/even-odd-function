#include<iostream>
using namespace std;
bool evenoddchecker(int num);
int main()
{
	
	for (int i = 0; i <= 1000; i++)
	{
		bool is_even = evenoddchecker(i);
		if (is_even)
		{
			cout << i << " is even " << endl;
		}
		else
		{
			cout << i << " is odd " << endl;
		}
	}
}
bool evenoddchecker(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	return false;
}