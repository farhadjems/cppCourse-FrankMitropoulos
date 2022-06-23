#include <iostream>
#include <string>
#include <deque>
#include <cctype>

using namespace std;

bool isPalindrome(const string input)
{
    // this deque will save the reverse of phrase
    deque<char> reversePhrase;
    // check every char if its alphanumeric or not, if its not , it'll be neglected
    for (char c : input)
    {
        if (isalpha(c))
        {
            // if it's alphanumeric, will be saved into new variable in capital case
            reversePhrase.push_front(toupper(c));
        }
        else
        {
            continue;
        }
    }

    // checking if its a palindrome phrase or not
    for (size_t i = 0; i < input.size(); i++)
    {
        if (input[i] != reversePhrase[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input{};
    cout << "Enter a phrase which you think its a palindrome: ";
    getline(cin, input);

    cout << "result of checking if the phrase\"" << input << "\" is palindrome or not\n"
         << boolalpha << isPalindrome(input) << endl;
}