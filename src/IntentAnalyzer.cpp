#include "IntentAnalyzer.h"
#include "IntentCollection.h"
#include <vector>
#include <sstream>
#include <algorithm>
#include <iostream>

std::string IntentAnalyzer::processForIntent(std::string userInput)
{
    std::vector<std::string> tokens;
    std::stringstream stream(userInput);
    std::string token;
    std::string intent = "Intent: Get";
    while (std::getline(stream, token, ' '))
    {
        std::string cleanedToken = getCleanedToken(token);
        analyzeTokenForIntent(cleanedToken, intent);
    }
    return intent;
}

std::string IntentAnalyzer::getCleanedToken(std::string token)
{
    std::for_each(token.begin(), token.end(), [](char &c)
                  { c = ::tolower(c); });
    token.erase(std::remove_if(token.begin(), token.end(), [this](unsigned char c){return this->toBeRemoved(c);}), token.end());
    return token;
}

bool IntentAnalyzer::toBeRemoved(char c)
{
    switch (c)
    {
    case '(':
    case ')':
    case '-':
    case '.':
    case '?':
        return true;
    default:
        return false;
    }
}

void IntentAnalyzer::analyzeTokenForIntent(std::string &token, std::string &intent)
{
    if (isStopWord(token))
    {
        return;
    }
    else if (isInterest(token))
    {
        token[0] = std::toupper(token[0]);
        intent += " " + token;
    }
    else if (isCity(token))
    {
        intent += " City";
    }
    return;
}

bool IntentAnalyzer::isStopWord(std::string &token)
{
    IntentCollection intentCollection;
    return std::find(intentCollection.STOPWORDS.begin(), intentCollection.STOPWORDS.end(), token) != intentCollection.STOPWORDS.end();
}

bool IntentAnalyzer::isInterest(std::string &token)
{
    IntentCollection intentCollection;
    return std::find(intentCollection.INTEREST.begin(), intentCollection.INTEREST.end(), token) != intentCollection.INTEREST.end();
}

bool IntentAnalyzer::isCity(std::string &token)
{
    IntentCollection intentCollection;
    return std::find(intentCollection.CITY.begin(), intentCollection.CITY.end(), token) != intentCollection.CITY.end();
}