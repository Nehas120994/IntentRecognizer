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
        if(!statement.empty()){
            IntentAnalyzer intentAnalyzer;
            std::cout << intentAnalyzer.processForIntent(statement) << std::endl;
        }else{
            std::cout << "Please enter the input to analyze." << std::endl;
        }
    }
    return 0;
}