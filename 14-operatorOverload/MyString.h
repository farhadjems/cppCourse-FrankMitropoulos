#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

class MyString
{
private:
    char *str;

public:
    // constructors
    MyString();                               // default constructor
    MyString(const char *source);             // overload constructor
    MyString(const MyString &source);         // copy constructor
    MyString(MyString &&source);              // move constructor
    MyString &operator=(const MyString &rhs); // copy assignment
    MyString &operator=(MyString &&rhs);      // move assignment
    // destructors
    ~MyString();
    // methods
    void display() const;
    int length() const;
    const char *get_str() const;
    // operators
    MyString operator-() const;
    MyString operator+(const MyString &rhs) const;
    bool operator==(MyString &rhs) const;
    bool operator!=(MyString &rhs) const;
    bool operator<(MyString &rhs) const;
    bool operator>(MyString &rhs) const;
    MyString &operator+=(const MyString &rhs);
    MyString operator*(int number) const;
    MyString &operator*=(int number);
    MyString &operator++();
    MyString operator++(int);
    // friend functions and operators
    friend std::ostream &operator<<(std::ostream &os, const MyString &obj);
    friend std::istream &operator<<(std::istream &is, MyString &obj);
};

#endif