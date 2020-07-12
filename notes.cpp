#include <iostream>
#include <strings.h>
#include "fun.cpp"

void run(string container) {
    fileObject files;
    screenObject screen;

    string userInput;
    do
    {
        // print out the current file to screen
        std::cout << "---" << container << "---" << std::endl;
        std::cout << files.readFile(container) << std::endl;

        // get user input for next line of file
        std::cout << ":";
        std::cin >> userInput;

        // write next line to file
        files.writeFile(container, userInput);

        screen.clearScreen();
    } while (true);
}