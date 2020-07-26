#include <iostream>
#include <strings.h>
#include <stdlib.h>

#include "notes.cpp"

using namespace std;


int main(int argc, char const *argv[])
{
    string activeContainer;
    while (true) {
        string userInput;
        std::cout << "Active Container: " << activeContainer << std::endl;
        std::cin >> userInput;
        
        run(userInput);
    }
    
    return 0;
}
