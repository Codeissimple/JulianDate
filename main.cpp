#include <iostream>

using namespace std;

const long JAN = 1;
const long FEB = 2;
const long MAR = 3;
const long APR = 4;
const long MAY = 5;
const long JUN = 6;
const long JUL = 7;
const long AUG = 8;
const long SEP = 9;
const long OCT = 10;
const long NOV = 11;
const long DEC = 12;

const string month_names[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

struct date {
   long   year ;
   long   month ;
   long   day ;
} ;

//Prototypes here
long query_for_integer(string);
long return_year(long julian_value); 
long return_month(long julian_value);
long return_day(long julian_value);
date *return_date(long julian_value);

//Program starts here

long query_for_integer(string prompt) {
long answer = 0;

  cout << prompt;
  cin >> answer;

  return answer;
}

long return_year(long julian_value){
  long year = 0;
  long year_value = 0;

  for (long year; julian_value - year_value < 365; year++){
    if (year % 4 == 0){
      year_value = julian_value - 366;
    }
    else{
      year_value = julian_value - 365;
    }
  }
return year;
}


int main() {
  long julian_value = query_for_integer("Enter a Julian value: ") ;
  
  long year =  return_year(julian_value);
  cout << year;

return 0;
}