#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    string input_buffer;

    while (true) {
        cout << "NanoDB > ";

        //handles ctrl+d & ctrl+c
        if (!getline(cin, input_buffer)) {
            cout << "\n";
            break;
        }

        // exit command & handles unknown command!
        if (line == ".exit") {
            break;
        }
        else{
            cout << "Unknown command!" << endl;
        }

        if (line.empty()) {
            continue;
        }
    }

    return 0;
}
