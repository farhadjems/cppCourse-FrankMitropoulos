#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers;
    int element = 0;
    int mean = 0;
    int smallestNumber = 0;
    int largestnumber = 0;

    char menuOption = 'A';

    do
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

        if (menuOption == 'A' || 'a')
        {
            cout << " enter a number: ";
            cin >> element;
            numbers.push_back(element);
            element = 0;
        }
        else if (menuOption == 'M' || menuOption == 'm')
        {
            for (size_t i = 0; i < numbers.size(); i++)
            {
                mean += numbers[i];
            }
            mean /= numbers.size();
            cout << " mean of entered numbers is: " << mean << endl;
        }
        else if (menuOption == 'S' || menuOption == 's')
        {
            if (numbers.size() == 1)
            {
                cout << " smallest number is " << numbers[0];
                break;
            }
            if (numbers.size() != 0)
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
        else if (menuOption == 'M' || menuOption == 'm')
        {
            if (numbers.size() == 1)
            {
                cout << " largest number is " << numbers[0];
                break;
            }
            if (numbers.size() != 0)
            {
                largestnumber = numbers[0];
                for (int i = 1; i < numbers.size(); i++)
                {
                    if (largestnumber < numbers[i])
                    {
                        largestnumber = numbers[i];
                    }
                }
                cout << "largest number is: " << largestnumber << endl;
            }
            else
            {
                cout << " there is no number in the list!\n";
            }
        }
        else if (menuOption == 'Q' || menuOption == 'q')
        {
            cout << " Quitting\n";
        }
        else
        {
            cout << " choose an option shown in the menu\n";
        }

    } while (menuOption != 'Q' || menuOption != 'q');
}