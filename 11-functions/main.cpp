#include <iostream>
#include <vector>

using namespace std;

void displayMenu(char &menuOption);
void addElement(vector<int> &numbers);
void averageElements(vector<int> &numbers);
void smallestElement(vector<int> &numbers);
void largestElement(vector<int> &numbers);
void quitMessage();
void runApplication(vector<int> &numbers, char &menuOption);

int main()
{
    vector<int> numbers;
    char menuOption = {};
    do
    {
        displayMenu(menuOption);
        runApplication(numbers, menuOption);

    } while (menuOption != 'Q');
}

void displayMenu(char &menuOption)
{
    cout << "---------------------------\n"
         << " choose one of the below items\n"
         << "A. Add a number\n"
         << "M. Display mean of the numbers\n"
         << "S. Display smallest number\n"
         << "L. Display the largest number\n"
         << "Q. Quit\n"
         << "---------------------------\n\n";
    cin >> menuOption;
    menuOption = toupper(menuOption);
    while (menuOption != 'A' && menuOption != 'M' && menuOption != 'S' && menuOption != 'L' && menuOption != 'Q')
    {
        cout << " bad input! choose one the available options in the menu\n";
        displayMenu(menuOption);
    }
}

void addElement(vector<int> &numbers)
{
    cout << " enter a number: ";
    int number = 0;
    cin >> number;
    numbers.push_back(number);
}

void averageElements(vector<int> &numbers)
{
    int average = 0;
    for (int number : numbers)
    {
        average += number / numbers.size();
    }
    cout << " Average of inserted numbers is: " << average << '\n';
}

void smallestElement(vector<int> &numbers)
{
    int smallestNumber = 0;
    if (numbers.size() == 1)
    {
        cout << " smallest number is " << numbers[0];
    }
    else if (numbers.size() != 0)
    {
        smallestNumber = numbers[0];
        for (int i = 1; i < numbers.size(); i++)
        {
            if (smallestNumber > numbers[i])
            {
                smallestNumber = numbers[i];
            }
        }
        cout << "smallest number is: " << smallestNumber << endl;
    }
    else
    {
        cout << " there is no number in the list!\n";
    }
}

void largestElement(vector<int> &numbers)
{
    int largestNumber = 0;
    if (numbers.size() == 1)
    {
        cout << " largest number is " << numbers[0];
    }
    else if (numbers.size() != 0)
    {
        largestNumber = numbers[0];
        for (int i = 1; i < numbers.size(); i++)
        {
            if (largestNumber < numbers[i])
            {
                largestNumber = numbers[i];
            }
        }
        cout << " largest number is: " << largestNumber << endl;
    }
    else
    {
        cout << " there is no number in the list!\n";
    }
}

void quitMessage()
{
    cout << " Quitting...\n\n";
}

void runApplication(vector<int> &numbers, char &menuOption)
{
    switch (menuOption)
    {
    case 'A':
        addElement(numbers);
        break;
    case 'M':
        averageElements(numbers);
        break;
    case 'S':
        smallestElement(numbers);
        break;

    case 'L':
        largestElement(numbers);
        break;

    case 'Q':
        quitMessage();
        break;
    default:
        cout << " error has occurred in runApplication(), char is: " << menuOption << '\n';
        break;
    }
}