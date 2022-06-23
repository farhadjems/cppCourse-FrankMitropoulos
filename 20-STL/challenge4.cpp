#include <iostream>
#include <stack>
#include <cctype>
#include <vector>
#include <iomanip>

std::string polishPhrase(std::string phrase)
{
    std::string result{};
    for (char c : phrase)
    {
        if (isalpha(c))
        {
            result.push_back(toupper(c));
        }
    }

    return result;
}

void displayStack(std::stack<char> phrase)
{
    while (!phrase.empty())
    {
        std::cout << phrase.top();
        phrase.pop();
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> phrases{
        "a",
        "aa",
        "abba",
        "abbcbba",
        "ab",
        "abc",
        "radar",
        "bob",
        "ana",
        "avid diva",
        "Amore, Roma",
        "A Toyota's a toyota",
        "A Santa at NASA",
        "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-panama!",
        "This is a palindrome",
        "palindrome"};

    bool isPalindrome = true;
    for (auto phrase : phrases)
    {
        std::string polishedPhrase = polishPhrase(phrase);
        std::stack<char> reversePhrase;
        for (char c : polishedPhrase)
        {
            reversePhrase.push(c);
        }

        isPalindrome = true;
        for (char c : polishedPhrase)
        {
            if (c != reversePhrase.top())
            {
                isPalindrome = false;
                break;
            }
            reversePhrase.pop();
        }
        std::cout << std::boolalpha << isPalindrome << '\t' << phrase << std::endl;
    }

    return 0;
}