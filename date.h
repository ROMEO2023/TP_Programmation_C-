/**
  * @File:     date.h
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Course:   C++ Programming / Validation 3A Informatique Electronique 
  * @Summary:  Methods - Helpers functions
  */

#include <iostream>

#ifndef DATE_H
#define DATE_H

class Date {
public:
   Date(int month=1, int day=1, int year=1970);
   int month() const;
   int day() const;
   int year() const;
   void updateMonth(int month);
   void updateDay(int day);
   void updateYear(int year);
   void next();
   void back();
private:
   int _month;
   int _day;
   int _year;
   
};

bool isDate(int month, int day, int year);
int getDaysInMonth(int month);
int dayOfYear(Date d);
std::string toString(Date d);


#endif // DATE_H

