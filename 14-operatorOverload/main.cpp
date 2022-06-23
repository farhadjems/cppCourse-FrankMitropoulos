#include "MyString.h"

using namespace std;

int main()
{
    cout << boolalpha << endl;
    MyString a{"Frank"};
    MyString b{"frank"};

    cout << (a == b) << endl;
    cout << (a != b) << endl;

    cout << (a > b) << endl;
    cout << (a < b) << endl;

    MyString s1{"FRANK"};
    cout << s1 << endl;
    s1 = -s1;
    cout << s1 << endl;

    s1 = s1 + "**********";
    cout << s1 << endl;

    s1 += "------";
    cout << s1 << endl;

    MyString s2{"12345"};
    s1 = s2 * 3;

    cout << s1 << endl;

    MyString s3{"abcdef"};
    s3 *= 5;
    cout << s3 << endl;
}