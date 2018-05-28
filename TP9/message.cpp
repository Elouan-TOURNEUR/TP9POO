#include "message.h"
#include <iostream>


void message::displayContent()
{
cout << "Message :" << myContent ;
}

void message::displayDate()
{
    cout << myDate.getDay () << ' ' << myDate.getMonth () << ' ' << myDate.getYear ();
}

void message::displayHour()
{
    cout << myDate.getHour () << "h " << myDate.getMinute ()
         << "mn et " <<myDate.getSecond () << 's';
}

string message::getContenu()
{
    return myContent ;
}

Date message::getMyDate() const
{
 return myDate ;
}

message::message(const string & message)
{
 myDate = Date() ;
 myContent = message ;
}
