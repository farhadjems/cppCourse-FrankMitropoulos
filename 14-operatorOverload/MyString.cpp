#include "MyString.h"

using namespace std;

MyString::MyString()
    : str(nullptr)
{
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *source)
    : str(nullptr)
{
    if (source == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(source) + 1];
        strcpy(str, source);
    }
}

MyString::MyString(const MyString &source)
{
    delete[] str;
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

MyString::MyString(MyString &&source)
    : str(new char[source.length() + 1])
{
    str = source.str;
    source.str = nullptr;
}

MyString::~MyString()
{
    delete[] str;
}

void MyString::display() const
{
    cout << str << endl;
}

int MyString::length() const
{
    return strlen(str);
}

const char *MyString::get_str() const
{
    return str;
}

MyString &MyString::operator=(const MyString &rhs)
{
    if (this == &rhs)
    {
        return *this;
    }

    delete[] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

MyString &MyString::operator=(MyString &&rhs)
{
    if (this == &rhs)
    {
        return *this;
    }

    delete[] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// operators
MyString MyString::operator-() const
{
    MyString result;
    result.str = new char[this->length() + 1];

    for (size_t i = 0; i < this->length(); i++)
    {
        result.str[i] = tolower(this->str[i]);
    }
    return result;
}

MyString MyString::operator+(const MyString &rhs) const
{
    MyString result;
    result.str = new char[this->length() + rhs.length() + 1];
    strcpy(result.str, this->str);
    strcat(result.str, rhs.str);
    return result;
}

bool MyString::operator==(MyString &rhs) const
{
    return (strcmp(this->str, rhs.str) == 0);
}

bool MyString::operator!=(MyString &rhs) const
{
    return (!operator==(rhs));
}
bool MyString::operator<(MyString &rhs) const
{
    return (strcmp(this->str, rhs.str) < 0);
}
bool MyString::operator>(MyString &rhs) const
{
    return (!operator<(rhs));
}

MyString &MyString::operator+=(const MyString &rhs)
{
    *this = *this + rhs;
    return *this;
}

MyString MyString::operator*(int number) const
{
    MyString result;
    result.str = new char[number * this->length() + 1];

    for (int i = 0; i < number; i++)
    {
        result = result + *this;
        // result.str = strcat(result.str, this->str);
    }

    return result;
}

MyString &MyString::operator*=(int number)
{
    *this = *this * number;
    return *this;
}

MyString &MyString::operator++()
{
}
MyString MyString::operator++(int)
{
}
// friend functions and operators
ostream &operator<<(ostream &os, const MyString &obj)
{
    os << obj.str;
    return os;
}
istream &operator<<(istream &is, MyString &obj)
{
    char *input = new char[1000];
    is >> input;
    obj = MyString{input};
    delete[] input;
    return is;
}