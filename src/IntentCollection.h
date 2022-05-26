#include <vector>
/*Having this collection allows us to add to the knowledge base.
  Adding to this knowlwdge base can extend the capability,
  to detect and analyze intent for broader set of inputs.*/
class IntentCollection
{
public:
    const std::vector<std::string> INTEREST{
        "weather", "fact"};
    const std::vector<std::string> CITY{
        "paris", "london", "munich"};
    /*Idea is borrowed from the NLP toolkit
      The set below has been taken from https://gist.github.com/sebleier/554280?permalink_comment_id=3094328#gistcomment-3094328
      To understand the stop words better further https://kavita-ganesan.com/what-are-stop-words/#.Yo9LdKjP02w
    */
    const std::vector<std::string> STOPWORDS{
        "i", "me", "my", "myself", "we", "our", "ours", "ourselves", "you", "your", "yours", "yourself", "yourselves", "he", "him", "his", "himself", "she", "her", "hers", "herself", "it", "its", "itself", "they", "them", "their", "theirs", "themselves", "what", "which", "who", "whom", "this", "that", "these", "those", "am", "is", "are", "was", "were", "be", "been", "being", "have", "has", "had", "having", "do", "does", "did", "doing", "a", "an", "the", "and", "but", "if", "or", "because", "as", "until", "while", "of", "at", "by", "for", "with", "about", "against", "between", "into", "through", "during", "before", "after", "above", "below", "to", "from", "up", "down", "in", "out", "on", "off", "over", "under", "again", "further", "then", "once", "here", "there", "when", "where", "why", "how", "all", "any", "both", "each", "few", "more", "most", "other", "some", "such", "no", "nor", "not", "only", "own", "same", "so", "than", "too", "very", "s", "t", "can", "will", "just", "don", "should", "now"};
    //Having this can help us identify words used to denote time in english language.
    // const std::vector<std::string> TIME{
    // "today", "tomorrow", "Evening"
    // }
};
