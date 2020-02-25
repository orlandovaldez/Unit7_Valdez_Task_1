//Unit7_Valdez_Task_1 DR_T 2-24-2020
//Orlando Valdez
// COSC 1436
// 2-24-20

#include <iostream>
#include "appDate.h"
#include "timeOfDay.h"
#include "event.h"


using namespace std;

void createEvent(timeOfDay t, appDate a, event e)
{
  short h = 0, m = 0, s = 0;
  short mo = 0, d =0;
  int y = 0, decision = 0;
  string urgent = "";
  string eName = "";

  // time of day will be populated 
  cout << "Enter Hour: " ;
  cin >> h;
  t.Hour = h;

  cout << "Enter Minutes: ";
  cin >> m;
  t.Minute = m;

  cout << "Enter Seconds: ";
  cin >> s;
  t.Second = m;

  //appDate
  cout << "Enter Month: ";
  cin >> mo;
  a.month = mo;

  cout << "Enter Day: ";
  cin >> d;
  a.dayOfMonth = d;

  cout << "Enter Year: ";
  cin >> y;
  a.year = y;

  cout << "Enter Event Name: "; 
  cin >> eName;
  e.eventName = eName;

  cout << "Is the event urgent? (1 = yes , 2 = no: )" ;

  cin >> decision;
  if(decision == 1)
  {
    e.isUrgent = true; 
    urgent = "yes";
  }
  else if(decision == 2)
  {
    e.isUrgent = false;
    urgent = "no";
  }
  else 
  {
    cout << "Invalid input";
  }

e.eventDate = a;

e.eventTime = t;

cout <<"\nEVENT DETAILS: "<<endl;
cout << "Event name: " + e.eventName << endl;
cout << "\nIs urgent: " << e.isUrgent << "-->" << urgent << endl;
cout << e.tostring();



}

int main()
{
  event eMain;

  timeOfDay tMain;

  appDate dMain;

  createEvent(tMain, dMain, eMain);



  return 0;
}

