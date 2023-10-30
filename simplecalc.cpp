#include <iostream>
#include <cmath>

using namespace std; 
// defining 4 funtions in our calculator
void Addition_operation()
{
    int n, sum = 0, i, number;
    cout << "How many numbers you want to add: ";
    cin >> n;
    cout << "Please enter the numbers one by one: \n";
    for (i = 1; i <= n; i++)
    {
        cin >> number;
        sum = sum + number;
    }
    cout << "\nSum of the numbers = " << sum;
}

void Substraction_operation()
{
    int FirstNumber, SecondNumber, z;
    cout << " \nEnter the 1st number = ";
    cin >> FirstNumber;
    cout << "\nEnter the 2nd number = ";
    cin >> SecondNumber;
    //z can be negative as well as positive 
    z = FirstNumber - SecondNumber;
    cout << "\nSubtraction of the numbers = " << z;
}

void Multiplication_operation()
{
    int FirstNumber, SecondNumber, mul;
    cout << " \nEnter the 1st number = ";
    cin >> FirstNumber;
    cout << "\nEnter the 2nd number = ";
    cin >> SecondNumber;
    mul = FirstNumber * SecondNumber;
    cout << "\nMultiplication of two numbers = " << mul;
}

void Division_operation()
{
    // float datta type is important here 
    float FirstNumber, SecondNumber, div = 0;
    cout << " \nEnter the 1st number = ";
    cin >> FirstNumber;
    cout << "\nEnter the 2nd number = ";
    cin >> SecondNumber;
    while (SecondNumber == 0)
    {
        cout << "\nDivisor cannot be zero"
             << "\nPlease enter the divisor once again: ";
        cin >> SecondNumber;
    }
    div = FirstNumber / SecondNumber;
    cout << "\nDivision of two numbers = " << div;
}

int main()
{
    int OperatorbyUser;
    // Display different operations of the calculator
    do
    {
        cout << "Select  operation from simple Calculator"
             << "\n1 = Addition"
             << "\n2 = Subtraction"
             << "\n3 = Multiplication"
             << "\n4 = Division"
             << "\n5 = End"
             << "\n \n Make a choice: ";
        cin >> OperatorbyUser;

        switch (OperatorbyUser)
        {
        case 1:
            Addition_operation();
            break;
        case 2:
            Substraction_operation();
            break;
        case 3:
            Multiplication_operation();
            break;
        case 4:
            Division_operation();
            break;
        case 5:
            return 0; 
            // Terminate the program
        default:
            cout << "Something is wrong..!!";
            //this works in many unwanted case
        
            break;
        }
        cout << " \n------------------------------\n";
    } while (OperatorbyUser != 5);

    return 0;
}
