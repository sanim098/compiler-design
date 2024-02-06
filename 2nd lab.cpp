#include <iostream>
#include <sstream>
using namespace std;

bool isNumericConstant(const string& input) {
   istringstream stream(input);
    double value;

    if (stream >> value) {
        return stream.eof();
    }

    return false;
}
int main() {
   string userInput;

    cout << "Enter a value: ";
    getline(cin, userInput);

    if (isNumericConstant(userInput)) {
      cout << "numeric constant." << endl;
    } else {
        cout << " not numeric constant" << endl;
    }

    return 0;
}
