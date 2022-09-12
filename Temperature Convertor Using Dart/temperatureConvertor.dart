// program to make temperature convertor

import 'dart:io';

// function to convert celcius to fahrenheit
void celcius_fahrenheit() {
  stdout.write("Enter the temperature in celcius: ");
  double? celcius = double.parse(stdin.readLineSync()!);

  double? fahrenheit = ((celcius * 9) / 5) + 32;
  print("Temperature in Fahrenheit: $fahrenheit");
}

// function to convert fahrenheit to celcius
void fahrenheit_celcius() {
  stdout.write("Enter the temperature in fahrenheit: ");
  double? fahrenheit = double.parse(stdin.readLineSync()!);

  double? celcius = ((fahrenheit - 32) * 5) / 9;
  print("Temperature in Celcius: $celcius");
}

// function to convert kelvin to celcius
void kelvin_celcius() {
  stdout.write("Enter the temperature in Kelvin: ");
  double? kelvin = double.parse(stdin.readLineSync()!);

  double? celcius = kelvin - 273.15;
  print("Temperature in Celcius: $celcius");
}

// function to convert celcius to kelvin
void celcius_kelvin() {
  stdout.write("Enter the temperature in Celcius: ");
  double? celcius = double.parse(stdin.readLineSync()!);

  double? kelvin = celcius + 273.15;
  print("Temperature in Kelvin: $kelvin");
}

// function to convert kelvin to fahrenheit
void kelvin_fahrenheit() {
  stdout.write("Enter the temperature in Kelvin: ");
  double? kelvin = double.parse(stdin.readLineSync()!);

  double? fahrenheit = (((kelvin - 273.15) * 9) / 5) + 32;
  print("Temperature in Fahrenheit: $fahrenheit");
}

// fucntion to convert fahrenheit to kelvin
void fahrenheit_kelvin() {
  stdout.write("Enter the temperature in Fahrenheit: ");
  double? fahrenheit = double.parse(stdin.readLineSync()!);

  double? kelvin = (((fahrenheit - 32) * 5) / 9) + 273.15;
  print("Temperature in Kelvin: $kelvin");
}

void main() {
  int? choice = 1;
  while (choice != 7) {
    print("***Temperature Convertor***");
    print("1.   Celcius to Fahrenheit");
    print("2.   Fahrenheit to Celcius");
    print("3.   Kelvin to Celcius");
    print("4.   Celcius to Kelvin");
    print("5.   Kelvin to Fahrenheit");
    print("6.   Fahrenheit to Kelvin");
    print("7.   EXIT");

    stdout.write("Enter Your Choice: ");
    choice = int.parse(stdin.readLineSync()!);

    switch (choice) {
      case 1:
        {
          celcius_fahrenheit();
        }
        break;

      case 2:
        {
          fahrenheit_celcius();
        }
        break;

      case 3:
        {
          kelvin_celcius();
        }
        break;

      case 4:
        {
          celcius_kelvin();
        }
        break;

      case 5:
        {
          kelvin_fahrenheit();
        }
        break;

      case 6:
        {
          fahrenheit_kelvin();
        }
        break;

      case 7:
        {
          print("Thanks for using");
        }
        break;

      default:
        {
          print("!! Enter Right Choice !!");
        }
        break;
    }
  }
}
