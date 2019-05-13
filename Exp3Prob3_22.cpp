#include <iostream>
#include <string>
#include 
<conio.h>
using namespace std;
int main()
{
	char arr[30];
	int pos;

	cout << "Please enter a code: ";
	cin >> arr;
	cout << endl;
	
	pos =0;
	while(arr[pos] !='\0')
		pos++;
	cout << "Reversed version of the entered code: ";
		for(int a=pos-1;a>=0;a--)
		{
			cout << arr[a];
		}
	cout << endl;
	cout<< "\nSize of the array: "<< pos;

	getch();
	return 0;
}

