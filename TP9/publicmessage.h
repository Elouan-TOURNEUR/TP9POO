#ifndef PUBLICMESSAGE_H
#define PUBLICMESSAGE_H
#include "message.h"


class PublicMessage : message
{
private :
     unsigned myLikers ;
public:
    PublicMessage(const string & message);
        void add() ;
};

#endif // PUBLICMESSAGE_H
