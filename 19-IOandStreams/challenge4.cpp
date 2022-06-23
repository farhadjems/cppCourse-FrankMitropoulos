#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

bool isLineEmpty(const string &line)
{
    for (char c : line)
    {
        if (c != ' ')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ifstream inputFile("/home/farhad/Codes/GitHub/CppCourse_FrankMitropoulos/19-IOandStreams/RomeoAndJuliet.txt");
    ofstream outputFile("/home/farhad/Codes/GitHub/CppCourse_FrankMitropoulos/19-IOandStreams/output.txt");

    if (!inputFile.is_open())
    {
        cerr << " could not open the input file, exiting..." << endl;
        return 1;
    }

    if (!outputFile.is_open())
    {
        cerr << " could not open the output file, exiting..." << endl;
        return 1;
    }

    string line{};
    size_t lineNumber = 1;
    while (!inputFile.eof())
    {
        getline(inputFile, line);

        if (!isLineEmpty(line))
        {
            outputFile << setw(10) << left << lineNumber;
            lineNumber++;
        }
        else
        {
            outputFile << setw(10) << left << " ";
        }
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}