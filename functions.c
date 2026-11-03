#include "functions.h"

void celcius_to_fahrenheit(double *celcius)
{
    double f = (*celcius) * (9 / 5.0) + 32;
    *celcius = f;
}
void fahrenheit_to_celcius(double *fahrenheit)
{
    double f = (*fahrenheit - 32) * (5 / 9.0);
    *fahrenheit = f;
}

void kelvin_to_celcius(double *kelvin)
{
    double f = *kelvin - 273.15;
    *kelvin = f;
}
void celcius_to_kelvin(double *celcius)
{
    double f = *celcius + 273.15;
    *celcius = f;
}
void fahrenheit_to_kelvin(double *fahrenheit)
{
    double f = (*fahrenheit - 32) * (5 / 9.0) + 273.15;
    *fahrenheit = f;
}
void kelvin_to_fahrenheit(double *kelvin)
{
    double f = (*kelvin - 273.15) * (9 / 5.0) + 32;
    *kelvin = f;
}