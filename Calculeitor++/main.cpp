#include <iostream>
//Declaration of the headers files of the project
#include  "header_files/addition.h"
#include  "header_files/substraction.h"
#include  "header_files/multiply.h"
#include  "header_files/division.h"
#include  "header_files/powder.h"
//declare the functions
int addition();
int substraction();
int multiply();
int division();
int powder();
//begin of the program
int main(){
//variables
int numero1;
int numero2;
int resultado;
int pow;
int counter = 0;
int dump;
int opcion;
//program
//Select the numbers to make the mattemathical operation
std::cout << "Give me a number";
std::cin >> numero1;
std::cout << "Give me another number";
std::cin >> numero2;
//Select the option and call the functions
std::cout << "Give me an option";
std::cin >> opcion;
    switch(opcion){
        case 1:
            resultado = addition(numero1,numero2);
            std::cout << resultado;
            break;
        case 2:
            resultado = substraction(numero1,numero2);
              std::cout << resultado;
            break;
        case 3:
            resultado = multiply(numero1,numero2);
              std::cout << resultado;
            break;
        case  4:
            //Before the division is done, check if any of the two given numbers are 0, if they are, don't divide and display an error
            if (numero1  == 0 || numero2 == 0){
                std::cout << "Error 90: Cannot divide by 0";
            }else{
                //If none of the numbers given before are 0, continue with the division
            resultado = division(numero1,numero2);
              std::cout << resultado;
            }
            break;
        case 5:
        resultado = powder(numero1,numero2);
        std::cout << resultado;
        break;
    }
return 0;
}
//end of the program
