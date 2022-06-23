#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "vector1[0]: " << vector1.at(0) << endl;
    cout << "vector1[1]: " << vector1.at(1) << endl;
    cout << "vector1 size: " << vector1.size() << endl;

    vector<int> vector2;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "vector2[0]: " << vector2.at(0) << endl;
    cout << "vector2[1]: " << vector2.at(1) << endl;
    cout << "vector2 size: " << vector2.size() << endl;

    vector<vector<int>> vector2D;

    vector2D.push_back(vector1);
    vector2D.push_back(vector2);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << vector2D[i][j] << '\t';
        }
        cout << endl;
    }

    vector1.at(0) = 1000;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << vector2D.at(i).at(j) << '\t';
        }
        cout << endl;
    }
}