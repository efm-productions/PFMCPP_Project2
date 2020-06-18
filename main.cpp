#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
        char
        int
        float
        double
        bool
 









2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, pass each variable to a single call of the ignoreUnused function. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    // char
    char studentGrade = 'B';
    char middleInitial = 'T';
    char lowercaseLetter = 'g';

    // int
    int customerAge = 21;
    int speedLimit = 55;
    int outsideTemp = -10;

    // float 
    float studentGPA = 3.5f;
    float interestRate = 12.5f;
    float percentComplete = 58.f;

    // double
    double furnaceTemp = 1800.0;
    double discountAmount = -8345.76;
    double lotteryJackpot = 308000000.2;

    // bool
    bool accountInArrears = false;
    bool collegeDegree = true;
    bool roomOccupied = false;

    // calls
    ignoreUnused(studentGrade, 
                    middleInitial,
                    lowercaseLetter,
                    customerAge,
                    speedLimit,
                    outsideTemp,
                    studentGPA,
                    interestRate,
                    percentComplete,
                    furnaceTemp,
                    discountAmount,
                    lotteryJackpot,
                    accountInArrears,
                    collegeDegree,
                    roomOccupied);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
bool bookAFlight(char carrier, int flightNumber, char row)
{
    ignoreUnused(carrier, flightNumber, row);
    return {};
}
/*
 2)
 */
int setRoomClimate(float temperature, char mode = 'C')
{
    ignoreUnused(temperature, mode);
    return {};
}
/*
 3)
 */
double depositCash(int accountNumber, double amount)
{
    ignoreUnused(accountNumber, amount);
    return {};
}
/*
 4)
 */
void drawABox(int length, int width, int height)
{
    ignoreUnused(length, width, height);
}
/*
 5)
 */
float convertTemperature(float tempValue, char convertToScale = 'F')
{
    ignoreUnused(tempValue, convertToScale);
    return {};
}
/*
 6)
 */
double generateInvoice (double totalPrice, double salestaxRate = 4.5)
{
    ignoreUnused(totalPrice, salestaxRate);
    return {};
}
/*
 7)
 */
int reserveAParkingSpace(char custInit, char carCode, float rentalHours, double hourlyRate = 25.00)
{
    ignoreUnused(custInit, carCode, rentalHours, hourlyRate) ;
    return {};
}
/*
 8)
 */
void setTheTime(int hour, int minutes, bool useMilitaryTime = false)
{
    ignoreUnused(hour, minutes, useMilitaryTime);
}
/*
 9)
 */
double calculateInterest(double principal, float rate, int timeInDays)
{
    ignoreUnused(principal, rate, timeInDays);
    return {};
}
/*
 10)
 */
 int sum2(int firstNumber, int secondNumber)
 {
     ignoreUnused(firstNumber, secondNumber);
     return {};
 }
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto flightBooked = bookAFlight('A', 245, 18);
    
    //2)
    auto errorCode = setRoomClimate(68.0);

    //3)
    auto accountBalance =  depositCash(117, 500.00); 

    //4)
    drawABox(100, 400, 10);

    //5)
    auto convertedTempValue =  convertTemperature(78.2f, 'C');  

    //6)
    auto invoiceTotalDue =  generateInvoice (248.16); 

    //7)
    auto reservedSpaceNumber = reserveAParkingSpace('S', 'F', 16.f);

    //8)
    setTheTime(7, 45);

    //9)
    auto interest = calculateInterest(1500.00, 1.2f, 45);

    //10)
    auto result = sum2(25, 14);
    
    ignoreUnused(carRented);    
    /*
    */
    ignoreUnused(flightBooked,
                    errorCode,
                    accountBalance,
                    convertedTempValue,
                    invoiceTotalDue,
                    reservedSpaceNumber,
                    interest,
                    result);

    std::cout << "good to go!" << std::endl;
    return 0;    
}
