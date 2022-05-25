#include <string>

class IntentAnalyzer
{
public:
    std::string processForIntent(std::string);
    void analyzeTokenForIntent(std::string &token, std::string &intent);
    bool isStopWord(std::string &token);
    bool isInterest(std::string &token);
    bool isCity(std::string &token);
    std::string getCleanedToken(std::string token);
    bool toBeRemoved(char c);
};