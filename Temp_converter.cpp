#include <iostream>
using namespace std;
double fahrenheitToCelsius(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
  return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
  char ch;

  cout << "\nEnter 'f' to convert Fahrenheit to Celsius ";
  cout <<  "\nEnter'c' to convert Celsius to Fahrenheit ";
  cin >> ch;

  double temp;
  cout << "Enter the temperature to be converted: ";
  cin >> temp;

 switch(ch){
  case 'f':
    cout << "The converted temperature is: "<<fahrenheitToCelsius(temp);
    break;
   case 'c':
    cout << "The converted temperature is: "<<celsiusToFahrenheit(temp);
    break;
    default:cout << "Invalid conversion direction. Please try again." << endl;
   
  }

  return 0;
 }
 