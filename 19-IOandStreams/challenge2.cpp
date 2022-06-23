#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void printHeader()
{
    cout << setw(15) << left << "Student" << setw(15) << right << "Score" << endl;
}
void printDash()
{
    for (int i = 0; i < 30; i++)
    {
        cout << "-";
    }
    cout << endl;
}

int checkAnswer(const string &key, const string &answer)
{
    int score = 0;
    for (int i = 0; i < key.size(); i++)
    {
        if (answer[i] == key[i])
        {
            score++;
        }
    }

    return score;
}

void printInfo(const string &name, const int &score)
{
    cout << setw(15) << left << name << setw(15) << right << score << endl;
}

int main()
{
    ifstream inputFile("/home/farhad/Codes/GitHub/CppCourse_FrankMitropoulos/19-IOandStreams/responses.txt");

    if (!inputFile.is_open())
    {
        cerr << " could not open file, exiting...\n";
        return 1;
    }

    string key;
    inputFile >> key;
    cout << " the key is: " << key << endl;

    printHeader();
    printDash();

    string name{};
    string answer{};
    int score = 0;
    int numberOfStudents = 0;
    double averageScore = 0;
    int totalScore = 0;
    while (!inputFile.eof())
    {
        inputFile >> name >> answer;
        numberOfStudents++;
        score = checkAnswer(key, answer);
        totalScore += score;
        printInfo(name, score);
    }

    printDash();
    averageScore = static_cast<double>(totalScore) / numberOfStudents;
    cout << "Average Score of Class is: " << averageScore << endl;

    inputFile.close();
    return 0;
}