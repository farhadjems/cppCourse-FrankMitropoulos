#include <iostream>
#include <iomanip>
#include <fstream>
#include <set>
#include <map>
#include <vector>

void cleanString(std::string &word)
{
    std::string result;
    for (char c : word)
    {
        if (c == ' ' || c == ',' || c == '.' || c == ';' || c == ':')
        {
            continue;
        }
        else
        {
            result.push_back(c);
        }
    }
    word.clear();
    word = result;
}

int main()
{
    std::vector<std::string> lookupWords{"Aunt", "Dorothy", "Dorothy’s", "Em", "Even", "From"};

    std::ifstream file("/home/farhad/Codes/GitHub/CppCourse_FrankMitropoulos/20-STL/WWO.txt");
    if (!file.is_open())
    {
        std::cout << "Could not open the file, exiting...\n";
        return 1;
    }

    std::map<std::string, int> words;
    std::map<std::string, std::set<int>> wordInLine{};

    int lineNumber = 1;

    while (!file.eof())
    {
        std::string line;
        std::string word;
        std::stringstream sWord;
        std::getline(file, line);

        sWord << line;
        while (sWord >> word)
        {
            cleanString(word);

            // Part 1
            if (words.find(word) == words.end())
            {
                words.insert(std::pair<std::string, int>(word, 1));
            }
            else
            {
                words[word] += 1;
            }

            // Part 2
            if (wordInLine.find(word) == wordInLine.end())
            {
                wordInLine.insert(std::pair<std::string, std::set<int>>(word, {lineNumber}));
            }
            else
            {
                wordInLine[word].insert(lineNumber);
            }

            word.clear();
        }
        line.clear();
        lineNumber++;
    }
    file.close();

    // Printing all the words and their number of occurrences
    std::cout << std::setw(20) << std::left << std::fixed << "Word"
              << std::setw(05) << std::right << std::fixed << "Count" << std::endl
              << "=========================\n";

    for (auto word : words)
    {
        std::cout << std::setw(20) << std::left << std::fixed << word.first
                  << std::setw(05) << std::right << std::fixed << word.second << std::endl;
    }
    std::cout << "=========================\n";

    // Printing all the words and their line numbers
    std::cout << std::setw(20) << std::left << std::fixed << "Word"
              << std::setw(20) << std::right << std::fixed << "Line Number" << std::endl
              << "========================================\n";

    for (auto word : wordInLine)
    {
        std::cout << std::setw(20) << std::left << std::fixed << word.first
                  << std::setw(20) << std::right << std::fixed << "[ ";

        for (auto number : word.second)
        {
            std::cout << number << " ";
        }
        std::cout << " ]" << std::endl;
    }
    std::cout << "========================================\n";

    return 0;
}