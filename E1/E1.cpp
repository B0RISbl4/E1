#include <iostream>  
#include <string>
#include <vector>
using namespace std;  

/*
//1 point

int main()
{
	const string correctPin = "012345";
	int attempts = 3;
	string inputPin;

	while(attempts > 0) {
		cout << "PIN: ";
		cin >> inputPin;
		if (inputPin == correctPin) {
			cout << "OK\n";
			return 0;
		} else {
			attempts--;
			cout << "NE OK\n";
		}
	}
	return 0;
}
*/

/*
//2 point

int main()
{
	const string correctPin = "000000";
	string foundPin;
	
	for (int i = 0; i <= 999999; i++) {
		foundPin = to_string(i);
		while (foundPin.length() < 6) {
			foundPin = "0" + foundPin;
		}
		foundPin == correctPin ? void(cout << "PIN: " << foundPin) : void();
	}

	cout << "\n";
	return 0;
}
*/