#include <iostream>
#include <fstream>
#include <strings.h>

using namespace std;

class fileObject {
    public:
    string readFile(string dir) {
        string line, contents;

        ifstream myfile("./containers/" + dir + ".txt");
        if (myfile.is_open()) {
            while (getline(myfile,line)) {
                contents += (line + '\n');
            }
            
            // close file and return all file text
            myfile.close();
            return contents;
        }

        else cout << "Unable to read container\n";
        return "";
    }

    void writeFile(string container, string text) {
        // get existing container text
        string currentText = readFile(container);

        // open container file
        ofstream activeContainer("./containers/" + container + ".txt");
        
        // append to file
        if (activeContainer.is_open()) {
            activeContainer << currentText << text;
            activeContainer.close();
        } else {
            // unable to write or open file
            cout << "Unable to write to container";
        }
    }
} files;

class screenObject {
    public:
    void clearScreen() {
        cout << "\033[2J\033[1;1H";
    }
} screen;