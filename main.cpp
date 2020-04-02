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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 Boolean
 Character
 Integer
 Floating point
 Double floating point
 Valueless
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    bool boolA = true;
    bool boolB = false;
    bool boolC = true;

    char charA = 'A';
    char charB = 'B';
    char charC = 'C';

    int numberA = 3;
    int numberB = 37;
    int numberC = 4137;

    float floatA = 0.2f;
    float floatB = 0.6736f;
    float floatC = 4362.f; // can you put the f right after the decimal?

    double doubleA = 0.2;
    double doubleB = 39972403.3592;
    double doubleC = 3.14159;

    
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(boolA, boolB, boolC);

    ignoreUnused(charA, charB, charC);

    ignoreUnused(numberA);
    ignoreUnused(numberB);
    ignoreUnused(numberC);

    ignoreUnused(floatA);
    ignoreUnused(floatB);
    ignoreUnused(floatC);

    ignoreUnused(doubleA);
    ignoreUnused(doubleB);
    ignoreUnused(doubleC);

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
char capitalize(char lowerCaseChar)
{
  ignoreUnused(lowerCaseChar);
  return {};
}

/*
 2)
 */
int calculateFibonacci(int firstNumber = 0, int secondNumber = 1)
{
  ignoreUnused(firstNumber, secondNumber);
  return {};
}

/*
 3)
 */
int countDigits(int number)
{
  ignoreUnused(number);
  return {};
}


/*
 4)
 */

void prepareForPlayback()
{
}

/*
 5)
 */

float reduceDoubleToFloat(double doubleToReduce)
{
  ignoreUnused(doubleToReduce);
  return {};
}

/*
 6)
 */

float calculateCombinationTone(float freq1, float freq2, int factor1 = 1, int factor2 = 2)
{
  ignoreUnused(freq1, freq2, factor1, factor2);
  return {};
}

/*
 7)
 */

int roundUp(float numberToRound)
{
  ignoreUnused(numberToRound);
  return {};
}

/*
 8)
 */

float calculateFeedback(float input, float roomSize = 1.0f, float damping = 0.5f)
{
  ignoreUnused(input, roomSize, damping);
  return {};
}

/*
 9)
 */

void performSpeakerTest(int speakerNumber = 1, float gain = 1)
{
  ignoreUnused(speakerNumber, gain);
}

/*
 10)
 */
int charToInt(char charToConvert)
{
  ignoreUnused(charToConvert);
  return {};
}


int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto capital = capitalize('a');
    
    //2)
    auto fib = calculateFibonacci(2, 3);

    //3)
    auto digits = countDigits(12345);

    //4)
    prepareForPlayback();
    
    //5)
    auto reducedFloat = reduceDoubleToFloat(6.66453);

    //6)
    auto combinationToneFreq = calculateCombinationTone(450.0f, 500.0f);
    
    //7)
    auto roundedNumber = roundUp(654.3972f);
    //8)

    auto feedback = calculateFeedback(0.678f, 0.5f, 0.7f);
    
    //9)
    performSpeakerTest(2, 0.5f);

    //10)
    auto charNumber = charToInt('z');
    
    ignoreUnused(carRented, capital, fib, digits, reducedFloat, combinationToneFreq, roundedNumber, feedback, charNumber);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
