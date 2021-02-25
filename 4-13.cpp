/* A program designed to take as inputs the miles driven and gallons
 * of gas used per each trip, and output the MPG and the combined
 * MPG for all trips entered. 
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <iomanip>
 
 using namespace std;
 
 int main() {
     double milesDriven, gallonsUsed, totalMiles, totalGallons, mPG, totalMPG;  // Declare variables...
                                                                                // no need to initialize!
     cout << "Enter miles driven (-1 to quit): ";   cin >> milesDriven;         // Prompt for and accept input
     cout << showpoint;                                                         // Force C++ to show zeroes
     
     while (milesDriven != -1) {                                        // Sentinel value is -1
         cout << "Enter gallons used: ";          cin >> gallonsUsed;   
         
         mPG = milesDriven / gallonsUsed;                               // Calculate MPG for THIS trip
         totalMiles += milesDriven;                                     // Tally up total miles and ...
         totalGallons += gallonsUsed;                                   // ...total gallons so we can calculate
         totalMPG = totalMiles / totalGallons;                          // the MPG for ALL the trips
         
         cout << "MPG this trip: " << mPG << endl;                      // Output results
         cout << "Total MPG: " << totalMPG << endl;
         
         cout << "\n\nEnter miles driven (-1 to quit): ";   cin >> milesDriven; // Restart while loop
     }
     
     return 0;
}
