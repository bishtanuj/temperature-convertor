// Program to make temperature convertor

#include<stdio.h>

float celcius, fahrenheit, kelvin;

// Function to convert celcius to fahrenheit
void celcius_fahrenheit()
{
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&celcius);

    fahrenheit = ((celcius * 9)/5) + 32;
    printf("Temperature in Fahrenheit: %f\n",fahrenheit);
}

// Function to convert fahrenheit to celcius
void fahrenheit_celcius()
{
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    celcius = ((fahrenheit - 32) * 5) / 9;
    printf("Temperature in Celcius: %f\n",celcius);

}

// Function to covert kelvin to celcius
void kelvin_celcius()
{
    printf("Enter the temperature in Kelvin: ");
    scanf("%f",&kelvin);

    celcius = (kelvin - 273.15);
    printf("Temperature in Celcius: %f",celcius);
}

// Function to convert celcius to kelvin
void celcius_kelvin()
{
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&celcius);

    kelvin = celcius + 273.15;
    printf("Temperature in Kelvin: %f",kelvin);
}

// Function to convert kelvin to fahrenheit
void kelvin_fahrenheit()
{
    printf("Enter the temperature in Kelvin: ");
    scanf("%f",&kelvin);

    fahrenheit = (((kelvin - 273.15) * 9) / 5) + 32;
    printf("Temperature in Fahrenheit: %f",fahrenheit);
}

// Function to convert fahrenheit to kelvin
void fahrenheit_kelvin()
{
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&fahrenheit);

    kelvin = (((fahrenheit - 32) * 5) / 9 ) + 273.15;
    printf("Temperatue in Kelvin: %f",kelvin);
}

int main()
{
    int choice = 1;
    while(choice != 7)
    {
        printf("\n*** Temperature Convertor ***\n");
        printf("1.  Celcius to Fahrenheit\n");
        printf("2.  Fahrenheit to Celcius\n");
        printf("3.  Kelvin to Celcius\n");
        printf("4.  Celcius to Kelvin\n");
        printf("5.  Kelvin to Fahrenheit\n");
        printf("6.  Fahrenheit to Kelvin\n");
        printf("7.  EXIT\n");

        printf("Enter Your Choice: ");
        scanf("%d",&choice);

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
                    printf("\nEnter Right Choice !! \n");
                }
            }
        }
    }

    return 0;
}
