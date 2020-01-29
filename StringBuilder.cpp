#include <iostream>
#include <string>
using namespace std;

// Pass by reference and append to the input string
void append(string & inputString, string appendValue) {
    inputString = inputString + appendValue;
}

int main() {
    string finishedString = "";

    append(finishedString, "Hello");
    append(finishedString, " this");
    append(finishedString, " is");
    append(finishedString, " my");
    append(finishedString, " appended");
    append(finishedString, " string.");

    cout << "String is: " << finishedString << endl;

    return 0;
}