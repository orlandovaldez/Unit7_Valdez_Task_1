#ifndef EVENT_H
#define EVENT_H
#include <sstream>

struct event 
{
    string eventName;
    timeOfDay eventTime;
    appDate eventDate;
    bool isUrgent;

    string tostring()
    {
      short dayOfMonth = eventDate.dayOfMonth;
      short month = eventDate.month;
      int year = eventDate.year;
      short Hour = eventTime.Hour;
      short Minute = eventTime.Minute;
      short Second = eventTime.Second;

      stringstream ss;
      ss << month << "/" << dayOfMonth << "/" << year;

      stringstream ss2;
      ss2 << Hour << ":" << Minute << ":" << Second;

      string date = ss.str();
      string time = ss2.str();

      return ("Date: " + date + "\nTime: " + time);
    }
};

ostream& operator<< (ostream& outs, event* obj )
{
  return outs << obj->tostring();
}

#endif