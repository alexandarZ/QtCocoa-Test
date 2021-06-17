#include "MyNotification.h"
#import <Foundation/NSUserNotification.h>
#import <Foundation/NSString.h>

void MyNotification::Display(const QString& title, const QString& text)
{
    NSString*  titleStr = [[NSString alloc] initWithUTF8String:title.toUtf8().data()];
    NSString*  textStr = [[NSString alloc] initWithUTF8String:text.toUtf8().data()];

    NSUserNotification* userNotification = [[[NSUserNotification alloc] init] autorelease];
    userNotification.title = titleStr;
    userNotification.informativeText = textStr;

    [[NSUserNotificationCenter defaultUserNotificationCenter] deliverNotification:userNotification];
}
