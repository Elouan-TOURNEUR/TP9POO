#ifndef MESSAGE_H
#define MESSAGE_H
#include "date.h"
#include <iostream>
using namespace std;

class message
{
protected :
    string myContent ;
    Date myDate ;
public:
    void displayContent() ;
    void displayDate() ;
    void displayHour() ;
    string getContenu() ;
    message(const string & message);
    Date getMyDate() const ;
};



#endif // MESSAGE_H
