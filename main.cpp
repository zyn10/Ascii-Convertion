#include <iostream>
using namespace std;
int main()
{
	int num1;
	char c;
	
	
	cout << "Pleasae enter an integer between 0 and 35" << endl;
	cin >> num1;
	c = num1 + 55;         //Ascii code representation
	cout << c << endl;
	

	
	if (num1 <= 9) 
		cout << num1;
	else
		cout << c << endl;

return 0;

}
