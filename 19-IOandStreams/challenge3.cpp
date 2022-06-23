#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string searchItem{};
    cout << " enter a word to search in Romeo and juliet: ";
    cin >> searchItem;

    ifstream play("/home/farhad/Codes/GitHub/CppCourse_FrankMitropoulos/19-IOandStreams/RomeoAndJuliet.txt");

    if (!play.is_open())
    {
        cerr << "could not open the play file, exiting...\n";
        return 1;
    }

    int foundItem = 0;

    // string line{};
    // size_t position = 0;
    // while (!play.eof())
    // {
    //     position = 0;
    //     getline(play, line);
    //     while (position != string::npos)
    //     {
    //         position = line.find(searchItem.c_str(), position);
    //         if (position == string::npos)
    //         {
    //             break;
    //         }
    //         position++;
    //         foundItem++;
    //     }
    // }

    string word{};
    size_t wordPlace = 0;
    size_t numberOfWords = 0;
    while (!play.eof())
    {
        play >> word;
        wordPlace = 0;
        wordPlace = word.find(searchItem.c_str());
        numberOfWords++;
        if (wordPlace == string::npos)
        {
            continue;
        }
        else
        {
            foundItem++;
        }
    }

    cout << " number of words in the file: " << numberOfWords << endl;
    cout << " The substring " << searchItem << " is was found " << foundItem << " times\n";

    play.close();
    return 0;
}