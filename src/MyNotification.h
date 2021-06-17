#ifndef MYNOTIFICATION_H
#define MYNOTIFICATION_H

#include <QString>

class MyNotification
{
public:
    MyNotification() = default;
    ~MyNotification() = default;

    static void Display(const QString& title, const QString& text);
};

#endif // MYNOTIFICATION_H
