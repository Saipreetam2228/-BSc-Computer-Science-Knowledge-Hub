import java.util.Scanner;

public class TemperatureConverter {
    // Celsius to Fahrenheit convertion
    float CelsiusToFahrenheit(float c) {
        return (c * (9f / 5f)) + 32; 
    }

    // Fahrenheit to Celsius conversion
    float FahrenheitToCelsius(float f) {
        return (f - 32) * (5f / 9f);
    }
//===============================================
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      TemperatureConverter temp = new TemperatureConverter();
        
        // Celsius to Fahrenheit
        System.out.print("Celsius Temp: ");
        float celsiusInput = sc.nextFloat();
        float fahrenheitResult = temp.CelsiusToFahrenheit(celsiusInput);
        System.out.println("In Fahrenheit: " + fahrenheitResult);
        
        // Fahrenheit to Celsius
        System.out.print("Fahrenheit Temp: ");
        float fahrenheitInput = sc.nextFloat();
        float celsiusResult = temp.FahrenheitToCelsius(fahrenheitInput);
        System.out.println("In Celsius: " + celsiusResult);
        
        sc.close();
    }
}

/*
 Celsius to Fahrenheit:  F = (C × 9/5) + 32
 Fahrenheit to Celsius:  C = (F − 32) × 5/9
*/

