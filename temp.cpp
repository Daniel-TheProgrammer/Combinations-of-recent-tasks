#include <iostream>
using namespace std;
int main()
{

cout << "Program to convert Celsius temperatures to Fahrenheit.\n";
double tempCelsius, // Celsius temperature
tempFahrenheit; // Fahrenheit temperature
cout <<"\nEnter a Celsius temperature (< -273.15 to stop): ";
cin >> tempCelsius;

while (tempCelsius >= -273.15)
{
tempFahrenheit = 1.8 * tempCelsius + 32;
cout << tempCelsius << " degrees Celsius is equivalent to "
<< tempFahrenheit << " degrees Fahrenheit\n";
cout <<"\nEnter a Celsius temperature (< -273.15 to stop): ";
cin >> tempCelsius;
}
}
