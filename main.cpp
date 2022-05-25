#include <iostream>
#include <thread>
#include "src/IntentAnalyzer.h"

int main()
{
    std::cout << "Intent Recognizer app" << std::endl;
    std::string statement;
    std::cout << "Enter Input:" << std::endl;
    while (std::getline(std::cin, statement))
    {
        IntentAnalyzer intentAnalyzer;
        std::cout << intentAnalyzer.processForIntent(statement) << std::endl;
    }
    return 0;
}