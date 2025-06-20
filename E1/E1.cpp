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
	const string correctPin = "012345";
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


//3 point
string formatPin(int pin) {
	string formattedPin = to_string(pin);
	while (formattedPin.length() < 6) {
		formattedPin = "0" + formattedPin;
	}
	return formattedPin;
}

vector<int> findPin(int from, int to, const string correctPin) {
	vector<int> foundPins;
	for (int i = from; i <= to; i++) {

		string curPin = formatPin(i);
		if (curPin == correctPin) {
			foundPins.push_back(i);
		}
	}
	return foundPins;
}

	int main()
{
	const string correctPin = "012345";
	vector<int> foundPin = findPin(0, 999999, correctPin);
	string formattedFoundPin = formatPin(foundPin[0]);

	formattedFoundPin == correctPin ? void(cout << "PIN: " << formattedFoundPin) : void();

	cout << "\n";
	return 0;
}