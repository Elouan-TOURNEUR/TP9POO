#include "date.h"

Date::Date()
{
    time_t t;
    time (& t);
    tm local = * localtime(& t) ;

    Year = local.tm_year + 1900 ;
    Month = local.tm_mon + 1 ;
    Day = local.tm_mday ;
    Hour = local.tm_hour ;
    Minute = local.tm_min ;
    Second = local.tm_sec ;
}

int Date::getYear()
{
    return Year ;
}

int Date::getMonth()
{
    return Month ;
}

int Date::getDay()
{
    return Day ;
}

int Date::getHour()
{
    return Hour ;
}

int Date::getMinute()
{
    return Minute ;
}

int Date::getSecond()
{
    return Second ;
}
