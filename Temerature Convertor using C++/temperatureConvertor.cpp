// Program to make temperature convertor

#include<iostream>

using namespace std;

float celcius, fahrenheit, kelvin;

// Function to convert celcius to fahrenheit
void celcius_fahrenheit()
{
    cout << "Enter the temperature in Celcius: ";
    cin >> celcius;

    fahrenheit = ((celcius * 9)/5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}

// Function to convert fahrenheit to celcius
void fahrenheit_celcius()
{
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    celcius = ((fahrenheit - 32) * 5) / 9;
    cout << "Temperature in Celcius: " << celcius << endl;
}

// Function to convert kelvin to celcius
void kelvin_celcius()
{
    cout << "Enter the temperature in Kelvin: ";
    cin >> kelvin;

    celcius = (kelvin - 273.15);
    cout << "Temperature in Celcius: " << celcius << endl;
}

// Function to convert celcius to kelvin
void celcius_kelvin()
{
    cout << "Enter the temperature in Celcius: ";
    cin >> celcius;

    kelvin = celcius + 273.15;
    cout << "Temperature in Kelvin: " << kelvin << endl;
}

// Function to convert kelvin to farenheit
void kelvin_fahrenheit()
{
    cout << "Enter the temperature in Kelvin: ";
    cin >> kelvin;

    fahrenheit = (((kelvin - 273.15) * 9) / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
}

// Function to convert fahrenheit to kelvin
void fahrenheit_kelvin()
{
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahrenheit;

    kelvin = (((fahrenheit - 32) * 5) / 9 ) + 273.15;
    cout << "Temperature in Kelvin: " << kelvin << endl;
}

int main()
{
    int choice = 1;
    while(choice != 7)
    {
        cout << "\n*** Temperature Convertor ***" << endl;
        cout << "1. Celcius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celcius" << endl;
        cout << "3. Kelvin to Celcius" << endl; 
        cout << "4. Celcius to Kelvin" << endl;
        cout << "5. Kelvin to Fahrenheit" << endl;
        cout << "6. Fahrenheit to Kelvin" << endl; 
        cout << "7. EXIT" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                celcius_fahrenheit();
                break;
            }

            case 2:
            {
                fahrenheit_celcius();
                break;
            }

            case 3:
            {
                kelvin_celcius();
                break;
            }

            case 4:
            {
                celcius_kelvin();
                break;
            }

            case 5:
            {
                kelvin_fahrenheit();
                break;
            }

            case 6:
            {
                fahrenheit_kelvin();
                break;
            }

            default:
            {
                if(choice > 7)
                {
                    cout << "\nEnter Right Choice !! " << endl;
                }
            }
        }

    }

    return 0;    
}
