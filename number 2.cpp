#include <iostream>
#include <vector>
using namespace std;

bool isArithmeticOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=');
}
void extractOperators(const string& input, vector<char>& operators) {
    for (char ch : input) {
        if (isArithmeticOperator(ch)) {
            operators.push_back(ch);
        }
    }
}
int main() {
  string userInput;
    vector<char> operators;

    cout << "Enter an expression: ";
    getline(cin, userInput);

    extractOperators(userInput, operators);

    if (!operators.empty()) {
       cout << "Operators found " << endl;
        for (size_t i = 0; i < operators.size(); ++i) {
            cout << "operator" << i + 1 << ": " << operators[i] <<endl;
        }
    } else {
        cout << "No operators found " << endl;
    }

    return 0;
}

