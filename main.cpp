//Unit7_Valdez_Task_1 DR_T 2-24-2020
//Orlando Valdez
// COSC 1436
// 2-24-20

#include <iostream>

using namespace std;
//declare structs above int main

struct timeOfDay
{
  short Hour;
  short Minute;
  short Second;
};

struct appDate
{
  short dayOfMonth;
  short month;
  int year;
};

struct event
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //save space here for our toString() override
};


int main()
{
  timeOfDay t; // declare instance of the struct 
  t.Hour = 7; // put data in the struct
  t.Minute = 11;
  t.Second = 17;
  cout << "\nCurrent Time: " << endl; // print current data in struct
  cout << t.Hour << ":" << t.Minute << ":" << t.Second << endl;

  return 0;
}