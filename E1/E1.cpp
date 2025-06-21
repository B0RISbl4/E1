#include <iostream>  
#include <string>
#include <vector>
using namespace std;  

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