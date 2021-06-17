#include "MyInputController.h"
#import <ApplicationServices/ApplicationServices.h>

void MyInputController::MoveMouse(const int &x, const int &y)
{
    CGPoint point = CGPointMake(x,y);
    CGEventRef event = CGEventCreateMouseEvent(NULL, kCGEventMouseMoved, point, kCGMouseButtonCenter);
    CGEventPost(kCGHIDEventTap,event);
}

void MyInputController::Keyboard(const char &letter)
{
    CGEventRef letterEvent;
    letterEvent = CGEventCreateKeyboardEvent (NULL, (CGKeyCode)letter, true);
    CGEventPost(kCGHIDEventTap, letterEvent);

    letterEvent = CGEventCreateKeyboardEvent (NULL, (CGKeyCode)letter, false);
    CGEventPost(kCGHIDEventTap, letterEvent);
}
