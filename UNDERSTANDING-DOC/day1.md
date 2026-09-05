## Day 1 - Simple REPL setup

Today I just write a simple program for REPL. REPL stands for read-eval-print loop. It is just a simple interactive language shell that takes user input, execute that and return the result. 

### Main Function
`
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

`

It just loops infinitely and prints "NanoDB > "; and takes input `input_buffer`. 
Now only one command is added which is `.exit`, which just break the loop and terminates the program.
