import java.util.*;

public class temperatureConvertor {
    
    // function to convert celcius to fahrenheit
    public static void celciusFahrenheit() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the temperature in celcius: ");
        float celcius = input.nextFloat();
            
        float fahrenheit = ((celcius * 9) / 5) + 32;
        System.out.println("Temperature in Fahrenheit: "+ fahrenheit);
        
        input.close();
    }

    // function to convert fahrenheit to celcius
    public static void fahrenheitCelcius() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the temperature in fahrenheit: ");
        float fahrenheit = input.nextFloat();

        float celcius = ((fahrenheit - 32) * 5) / 9;
        System.out.println("Temperature in Celcius: "+ celcius);
        
        input.close();
    }
    

    // function to convert kelvin to celcius
    public static void kelvinCelcius() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the temperature in kelvin: ");
        float kelvin = input.nextFloat();

        double celcius = (kelvin - 273.15);
        System.out.println("Temperature in Celcius: "+ celcius);
        
        input.close();
    }

    // function to convert celcius to kelvin
    public static void celciusKelvin() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the temperature in Celcius: ");
        float celcius = input.nextFloat();

        double kelvin = (celcius + 273.15);
        System.out.println("Temperature in Kelvin: "+ kelvin);
        
        input.close();
    }

    // function to convert kelvin to fahrenheit
    public static void kelvinFahrenheit() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the temperature in Kelvin: ");
        float kelvin = input.nextFloat();

        double fahrenheit = (((kelvin - 273.15) * 9) / 5) + 32;
        System.out.println("Temperature in Fahrenheit: "+ fahrenheit);
        
        input.close();
    }

    // function to convert fahrenheit to kelvin
    public static void fahrenheitKelvin() {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the temperature in Fahrenheit: ");
        float fahrenheit = input.nextFloat();

        double kelvin = (((fahrenheit - 32) * 5) / 9) + 273.15;
        System.out.println("Temperature in Kelvin: "+ kelvin);
        
        input.close();
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int choice = 1;
        while(choice != 7) {
            System.out.println("***Temperature Convertor***");
            System.out.println("1. Celcius to Fahrenheit");
            System.out.println("2. Fahrenheit to Celcius");
            System.out.println("3. Kelvin to Celcius");
            System.out.println("4. Celcius to Kelvin");
            System.out.println("5. Kelvin to Fahrenheit");
            System.out.println("6. Fahrenheit to Kelvin");
            System.out.println("7. Exit");
    
    
            System.out.print("Enter Your Choice: ");
            choice = input.nextInt();

            switch(choice) {
                case 1:
                    celciusFahrenheit();
                    break;
                case 2:
                    fahrenheitCelcius();
                    break;
                case 3:
                    kelvinCelcius();
                    break;
                case 4:
                    celciusKelvin();
                    break;
                case 5:
                    kelvinFahrenheit();
                    break;
                case 6:
                    fahrenheitKelvin();
                    break;
                case 7:
                    System.out.println("Thanks For Using");
                    break;
                default:
                    System.out.println("!! Enter Right Choice !!");
            }
        }
        input.close();
    }
}
