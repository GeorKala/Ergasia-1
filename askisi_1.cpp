#include <iostream>
using namespace std;
unsigned short count_ones(unsigned int a);

int main()
{
	
	cout << count_ones(9); 
	cout << count_ones(8);
	cout << count_ones(13);  
}
unsigned short count_ones(unsigned int a)
{
	int ones = 0;
	while (a>0)
	{
		if(a & 1)
			{
				ones++;
			}
		a = a >> 1;	
	}
	return ones;
}