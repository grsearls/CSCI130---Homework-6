/*
Garrett Searls
CSCI 130
Homework 6
Problem 4 - Astrological Sign
*/
#include <iostream>
#include <string>

using namespace std;

int main() {

  int n; // number of classmates
  cin >> n;

  
}

//Function to determine the sign of each classmate
void Sign()
{
  int D; //Day of birth
  string M; // month of birth
  int Mconvert; // months converted to a number 1-12

  // turn each month into a number 1-12
  if (M == "Jan")
    Mconvert = 1;
  if (M == "Feb")
    Mconvert = 2;
  if (M == "Mar")
    Mconvert = 3;
  if (M == "Apr")
    Mconvert = 4;
  if (M == "May")
    Mconvert = 5;
  if (M == "Jun")
    Mconvert = 6;
  if (M == "Jul")
    Mconvert = 7;
  if (M == "Aug")
    Mconvert = 8;
  if (M == "Sep")
    Mconvert = 9;
  if (M == "Oct")
    Mconvert = 10;
  if (M == "Nov")
    Mconvert = 11;
  if (M == "Dec")
    Mconvert = 12;
    

  switch(Mconvert)
    {
      case 1:
        if (D >= 21)
          cout << "Aquarius";
        else
          cout << "Capricorn";
        break;

      case 2:
        if (D >= 20)
          cout << "Pisces";
        else
          cout << "Aquarius";
        break;

      case 3:
        if (D >= 21)
          cout << "Aries";
        else
          cout << "Pisces";
        break;

      case 4:
        if (D >= 21)
          cout << "Taurus";
        else
          cout << "Aries";
        break;

      case 5:
        if (D >= 21)
          cout << "Gemini";
        else
          cout << "Taurus";
        break;

      case 6:
        if (D >= 22)
          cout << "Cancer";
        else
          cout << "Gemimi";
        break;

      case 7:
        if (D >= 23)
          cout << "Leo";
        else
          cout << "Cancer";
        break;

      case 8:
        if (D >= 23)
          cout << "Virgo";
        else
          cout << "Leo";
        break;

      case 9:
        if (D >= 22)
          cout << "Libra";
        else
          cout << "Virgo";
        break;

      case 10:
        if (D >= 23)
          cout << "Scorpio";
        else
          cout << "Libra";
        break;

      case 11:
        if (D >= 23)
          cout << "Sagittarius";
        else
          cout << "Scorpio";
        break;

      case 12:
        if (D >= 22)
          cout << "Capricorn";
        else
          cout << "Sagittarius";
        break;
    }

  cout << endl;

  return;
}