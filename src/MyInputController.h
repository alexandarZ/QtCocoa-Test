#ifndef MYINPUTCONTROLLER_H
#define MYINPUTCONTROLLER_H

class MyInputController
{
public:
    MyInputController() = default;
    ~MyInputController() = default;

    static void MoveMouse(const int& x, const int& y);
    static void Keyboard(const char& letter);
};

#endif // MYINPUTCONTROLLER_H
