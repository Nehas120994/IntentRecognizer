#include <string>

class IntentAnalyzer
{
public:
    std::string processForIntent(std::string);
private:
    void analyzeTokenForIntent(std::string &token, std::string &intent);
    bool isStopWord(const std::string &token);
    bool isInterest(const std::string &token);
    bool isCity(const std::string &token);
    void cleanToken(std::string &token);
    bool toBeRemoved(const char &c);
};