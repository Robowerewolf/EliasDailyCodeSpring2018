#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int num;
	int num2;
	int num3;
	int num4;
	int	rem;
	int	temp;
	int	dec = 0;
	int	b = 1;
	cout << "Enter the binary number";
	cin >> num;
	cin >> num2;
	cin >> num3;
	cin >> num4;
	temp = num;
	//while (num > 0)
	//{
	//	rem = temp % 10;
	//	dec = dec + rem * b;
	//	b *= 2;
	//	temp /= 10;
	//}
	cout << "The decimal number is" << num*8 + num2*4+num3*2+num4*1<<endl;
	return 0;
}