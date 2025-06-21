#include <iostream>
#include <vector>
using namespace std;

vector<int> findPin(int from, int to, int correctPin) {
    vector<int> foundPins;
    for (int i = from; i <= to; i++) {
        if (i == correctPin) {
            foundPins.push_back(i);
        }
    }
    return foundPins;
}

int main() {
    const int correctPin = 12345;
    vector<int> foundPin = findPin(0, 999999, correctPin);

    cout << "PIN: " << foundPin[0];

    cout << "\n";
    return 0;
}
