#include <iostream>
using namespace std;
unsigned short checksum(unsigned int a);

int main()
{
	cout << checksum(1254)<<endl;
	cout << checksum(3091)<<endl;
	cout << checksum(515151);
	
}
unsigned short checksum(unsigned int a)
{	
	int sum = 0;
	int counter = 1;
	int digit;
	int temp1;
	int temp2;
	while (a > 0)
	{
		int digit = a%10;
		a = a/10;
		if(counter%2 == 0)
			{
				digit = digit*2;
				temp1 = digit%10;
				temp2 = digit/10;
				digit = temp1 + temp2;
						
			}
		
		sum = sum + digit;
		counter ++;
		
	}
	return sum;
	
}