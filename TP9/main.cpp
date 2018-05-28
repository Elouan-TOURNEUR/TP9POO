#include <iostream>
#include "date.h"
#include "message.h"
#include "publicmessage.h"

using namespace std;


void testDate (void)
{
    Date date;
    cout << "Aujourd'hui nous sommes le : "
         << date.getDay () << ' ' << date.getMonth () << ' ' << date.getYear ()
         << " et il est " << date.getHour () << "h " << date.getMinute ()
         << "mn et " <<date.getSecond () << 's' << endl;

} // testDat

void testMessage (void)
{
    message message ("salut");
    message.displayContent ();
    cout << " posté le : ";
    message.displayDate ();
    cout << " à ";
    message.displayHour ();
    cout << endl;

} // testMessage()}


void testPublicMessage (void)
{
    PublicMessage message ("salut");
    message.displayContent ();
    cout << " posté le : ";
    message.displayDate ();
    cout << " à ";
    message.displayHour ();
    cout << endl;
    for (unsigned i(0); i < 5; ++i)
        message.add ();
    cout << "Nb de likers : " << message.getNbLikers (); << endl;

} // testPublicMessage()
int main()
{
    testMessage();
}

