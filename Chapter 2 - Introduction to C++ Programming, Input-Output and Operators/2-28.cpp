/* This program separates a five digit integer into its individual digits
 * and then prints those digits separated three spaces apart.
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int num{0};                                 //A variable for the input
    
    cout << "Input a five digit integer: ";     cin >> num;     //Prompt user for integer, then store it in num
    cout << num / 10000 << "   ";                               //Divide by 10,000 to get the ones digit
    num = num % 10000;                                          //Gets rid of the ones digit
    cout << num / 1000 << "   ";                                //Divide by 1,000 to get the tens digit
    num = num % 1000;                                           //Gets rid of the new ones digit
    cout << num / 100 << "   ";                                 //Divide by 100 to get the hundreds digit
    num = num % 100;                                            //Gets rid of the new ones digit
    cout << num / 10 << "   ";                                  //Divide by 10 to get the thousands digit
    num = num % 10;                                             //Gets rid of the new ones digit
    cout << num << endl;                                        //Print the remaining number for the ten-thousands digit
    
    return 0;
}
