# Program to make temperature convertor

# Function to convert celcius to fahrenheit
celcius_fahrenheit <- function() {
    celcius <- readline("Enter the temperature in celcius: ")

    celcius <- as.numeric(celcius)

    fahrenheit <- ((celcius * 9) / 5) + 32

    print(paste("Temperature in Fahrenheit:", fahrenheit))
}

# Function to convert fahrenheit to celcius
fahrenheit_celcius <- function() {
    fahrenheit <- readline("Enter the temperature in fahrenheit: ")

    fahrenheit <- as.numeric(fahrenheit)

    celcius <- ((fahrenheit - 32) * 5) / 9

    print(paste("Temperature in Celcius:", celcius))
}

# Function to convert kelvin to celcius
kelvin_celcius <- function() {
    kelvin <- readline("Enter the temperature in kelvin: ")

    kelvin <- as.numeric(kelvin)

    celcius <- kelvin - 273.15

    print(paste("Temperature in Celcius:", celcius))
}

# Function to convert celcius to kelvin
celcius_kelvin <- function() {
    celcius <- readline("Enter the temperature in celcius: ")

    celcius <- as.numeric(celcius)

    kelvin <- celcius + 273.15

    print(paste("Temperature in Kelvin:", kelvin))
}

# Function to convert kelvin to fahrenheit
kelvin_fahrenheit <- function() {
    kelvin <- readline("Enter the temperature in kelvin: ")

    kelvin <- as.numeric(kelvin)

    fahrenheit <- (((kelvin - 273.15) * 9) / 5) + 32

    print(paste("Temperature in Fahrenheit:", fahrenheit))
}

# Function to convert fahrenheit to kelvin
fahrenheit_kelvin <- function() {
    fahrenheit <- readline("Enter the temperature in fahrenheit: ")

    fahrenheit <- as.numeric(fahrenheit)

    kelvin <- (((fahrenheit - 32) * 5) / 9) + 273.15

    print(paste("Temperature in Kelvin:", kelvin))
}

choice <- 1
while (choice != 7) {
    print("*** Temperature Convertor ***")
    print("1. Celcius to Fahrenheit")
    print("2.   Fahrenheit to Celcius")
    print("3.   Kelvin to Celcius")
    print("4.   Celcius to Kelvin")
    print("5.   Kelvin to Fahrenheit")
    print("6.   Fahrenheit to Kelvin")
    print("7.   EXIT")

    choice <- readline("Enter Your Choice: ")

    if (choice == 1) {
        celcius_fahrenheit()
    } else if (choice == 2) {
        fahrenheit_celcius()
    } else if (choice == 3) {
        kelvin_celcius()
    } else if (choice == 4) {
        celcius_kelvin()
    } else if (choice == 5) {
        kelvin_fahrenheit()
    } else if (choice == 6) {
        fahrenheit_kelvin()
    } else if (choice == 7) {
        print("Thanks For Using")
    } else {
        print("!! Enter Right Choice !!")
    }
}
