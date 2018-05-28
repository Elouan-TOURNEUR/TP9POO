#include "publicmessage.h"

PublicMessage::PublicMessage(const string & message)
{
    myContent = message ;
    myDate = Date() ;
}

void PublicMessage::add()
{
    ++myLikers ;
}
