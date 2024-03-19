#include <iostream>
using namespace std;

/*
Este programa explica los decision-making (DM) statements o bien
las sentencias de tomas de decisiones de la diapositiva 13 y 14.
El orden de analisis fue el siguiente:

- if: sentencia de control, ejecuta su contenido siempre y cuando
se cumpla su condicion la cual esta entre parentesis antes de las
llaves.

- if-else: ejecuta primero el if, si su condicion no se cumple en-
tonces brinca al else; si por el contrario el if se cumple entonces
nos saltamos el else de forma que este no se ejecuta.

- if else-if else: ejecuta unicamente la condicion que se cumpla y
el resto las ignora. Para el desarrollo de este ejemplo, para evitar
copiar tres veces el codigo, nada mas se utilizan 3 variable donde
el resultado del uso de cada una se comenta en su declaracion

- switch-case: su ejecucion depende del caso que el programa detecte.
*/

int main() {
    // Declaring a local variable
    char oper;
    float num1, num2;


    // D&I a local variable
    int number = 5;
    int number1 = 2; // number1 is greater than 0
    int number2 = 0; // number1 is equal to 0
    int number3 = -2; // number1 is less than 0
    int var1 = 52;

    // IF STATEMENT
    cout << "---> IF STATEMENT \n";
    if (number > 0) {
        cout << "number is greater than 0 \n";
    }

    if (number < 0) {
        cout << "number is less than 0 \n";
    }

    // IF-ELSE STATEMENT
    cout << "\n ---> IF-ELSE STATEMENT \n";
    if (number > 0) {
        cout << "number is greater than 0 \n";
    } else {
        cout << "number is less than 0 \n";
    }
    
    if (number < 0) {
        cout << "number is less than 0 \n";
    } else {
        cout << "number is greater than 0 \n";
    }

    // IF-ELSEx2 STATEMENT
    // change number1 to number2 or number3 to explore
    // different behaviors
    cout << "\n ---> IF ELSE-IF ELSE STATEMENT \n";
    if (number1 > 0) {
        cout << "number1 is greater than 0 \n";
    }
    else if (number1 == 0) {
        cout << "number1 is equal to 0 \n";
    }
    else {
        cout << "number1 is less than 0 \n";
    }

    // SWITCH-CASE STATEMENT

    // Presentation code
    cout << "\n ---> SWITCH-CASE STATEMENT \n";
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << "\n";;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << "\n";;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << "\n";;
            break;
        default:
            // operator doesn't match with any case constant (+, -, *, /)
            cout << "Error: The operator ain't correct \n";
            break;
    }

    // Teacher's code
    cout << "\n ---> SECOND SWITCH-CASE STATEMENT \n";
    switch (var1) {
        case 1:
            cout << "Case 1 \n";
            break;
        case 2:
            // Es posible dejar el case en blanco y por tanto se imprira
            // el case 3. Al igual que poner el mismo contenido que otro
            // case.

            //cout << "Case final \n";
            //cout << "Case 2 \n";
            //break;
        case 3:
            //cout << "Case final \n";
            cout << "Case 3 \n";
            break;
        default:
            // Si no se cumplen ninguno de los cases entonces entramos aca
            cout << "Default case \n";
            break;
    }


    return 0;
}