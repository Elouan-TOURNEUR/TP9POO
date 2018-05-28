#ifndef DATE_H
#define DATE_H
#include <ctime>


class Date : public tm
{

private :

    int Year;
    int Month;
    int Day;
    int Hour;
    int Minute;
    int Second;

public:
    Date();
    int getYear() ;
    int getMonth () ;
    int getDay() ;
    int getHour () ;
    int getMinute() ;
    int getSecond() ;

};

#endif // DATE_H
