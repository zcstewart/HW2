//Homework 2

/*
 *  Filename:           main.cpp
 * 
 *  Purpose:            The purpose of this program is to prompt the user to 
 *                      enter two integers; one for feet, and the other for 
 *                      inches. The program then outputs the equivalent
 *                      distance in the form of centimeters.
 * 
 *  Author:             Zachary Charles Stewart
 *  Student ID:         105903414
 *  Date:               1/17/2017 12:13 PST
 */

#include <cstdlib>
#include <iostream>

using namespace std;

const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main() 
{
    //Declare variables
    int feet, inches;
    int totalInches;
    double centimeters;
    
    
    //Desired output
    cout << "Enter two integers, one for feet and "
         << "one for inches: ";
    //Collect user input
    cin >> feet >> inches;
    //Verify user input though output to screen
    cout << endl;
    cout << " The numbers you entered are " << feet << " for feet and "
         << inches << " for inches. " << endl;
    //Convert to total inches
    totalInches = INCHES_PER_FOOT * feet + inches;
    //Output total inches
    cout << "The total number of inches = " << totalInches << endl;
    //Convert to centimeters
    centimeters = CENTIMETERS_PER_INCH * totalInches;
    //Output total centimeters
    cout << "The number of centimeters = " << centimeters << endl;
    
    //Exit program upon successful completion of tasks
    exit(EXIT_SUCCESS);
}

