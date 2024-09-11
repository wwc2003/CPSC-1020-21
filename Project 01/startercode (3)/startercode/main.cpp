#include "Date.h"
#include "calcDays.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main( int argc , char* argv[] ){
  string a = "yes";
  string b = "no";
  string user_input = "";
  int dayPositive, monthPositive, yearPositive;
  int dayExposed, monthExposed, yearExposed;
  int daySecondDose, monthSecondDose, yearSecondDose;



cout << "Have you tested positive (yes/no)? ";
cin >> user_input;
if(user_input == a)
{
  cout << "What date did you test positive? ";  
  cin >> monthPositive >> dayPositive >> yearPositive;
  Date exposed(dayPositive, monthPositive, yearPositive);
  Date exposed2(dayPositive + 5, monthPositive, yearPositive);

  fprintf( stdout , "You must quaratine from %s to %s.\n", exposed.showDate().c_str() , exposed2.showDate().c_str() );
}  
else if(user_input == b)
{
  cout << "Were you exposed (yes/no)? ";
  cin >> user_input;
  if(user_input == a)
  {
    cout << "Have you recieved both vaccines (yes/no)? ";
    cin >> user_input;
    if(user_input == a)
    {
      cout << "When did you recieve your second vaccine? ";
      cin >> monthSecondDose >> daySecondDose >> yearSecondDose;
      cout << "When were you exposed? ";
      cin >> monthExposed >> dayExposed >> yearExposed;
      

      Date vaccine1(daySecondDose, monthSecondDose, yearSecondDose);
      Date exposed1(dayExposed, monthExposed, yearExposed);

      if(calcDays(vaccine1, exposed1) < 14)
      {
        cout << "You have only been vaccinated for " << calcDays(vaccine1, exposed1) << " days." << endl;
        cout << "You must quarantine for 10 days." << endl;
      } 
      else 
    {
        cout << "You have been vaccinated for " << calcDays(vaccine1, exposed1) << " days." << endl;
        cout << "You must quarantine for 5 days." << endl;
    }
      
    }
  else if(user_input == b)
  {
    cout << "You must quarantine for 10 days." << endl;
  }
  }
  else if(user_input == b)
  {
    cout << "You do not need to quaratine." << endl;
  }
}




  cout << (a == b) << endl;
  
  return 0;
}
