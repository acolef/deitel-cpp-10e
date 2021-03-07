/* A program designed to test the capabilities of the HealthProfile.h
 * class.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <string>
#include "HealthProfile.h"

using namespace std;

int main(){
    string firstName, lastName, gender;
    int bD, bM, bY, cD, cM, cY, h, w;
    
    cout << "Enter today's date (dd/mm/yyyy): ";        cin >> cD >> cM >> cY;
    cin.ignore(1000, '\n');
    cout << "Enter your first name: ";                  getline(cin, firstName);
    cout << "Enter your last name: ";                   getline(cin, lastName);
    cout << "Enter your gender: ";                      getline(cin, gender);
    cout << "Enter your date of birth (dd/mm/yyyy): ";  cin >> bD >> bM >> bY;
    cout << "Enter your height (inches): ";             cin >> h;
    cout << "Enter your weight (pounds): ";             cin >> w;
    
    HealthProfile healthProfile(firstName, lastName, gender, bD, bM, bY, h, w);
    
    cout << "\nHEALTH PROFILE";
    cout << "\nName:\t"
         << healthProfile.getFirstName()
         << " "
         << healthProfile.getLastName()
         << "\nGender:\t"
         << healthProfile.getGender()
         << "\nAge:\t"
         << healthProfile.calcAge(cD, cM, cY)
         << "\nHeight:\t" 
         << healthProfile.getHeight()
         << " inches"
         << "\nWeight:\t"
         << healthProfile.getWeight()
         << " lbs"
         << "\nMaximum heart rate:\t"
         << healthProfile.maxHeartRate(cD, cM, cY);
         healthProfile.targetHeartRate(cD, cM, cY);
         healthProfile.calcBMI(h, w);
}
