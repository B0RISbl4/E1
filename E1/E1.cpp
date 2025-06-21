#include <iostream>
#include <vector>

std::vector<int> findPin(int from, int to, int correctPin) {
    std::vector<int> foundPins;
    for (int i = from; i <= to; ++i) {
        if (i == correctPin) {
            foundPins.push_back(i);
        }
    }
    return foundPins;
}

int main() {
    const int correctPin = 12345;
    std::vector<int> foundPin = findPin(0, 999999, correctPin);

    std::cout << "PIN: " << foundPin[0];

    std::cout << "\n";
    return 0;
}