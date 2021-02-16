/* Prints the squares and cubes of integers from 0 to 10
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
using namespace std;

int main(){
    int num{0};
    
    cout << "integer\tsquare\tcube\n";
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;    //0
    num = num + 1;                                                          //1
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;   
    num = num + 1;                                                          //2
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //3
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;    
    num = num + 1;                                                          //4
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //5
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //6
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //7
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //8
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //9
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    num = num + 1;                                                          //10
    cout << num << "\t" << num * num << "\t" << num * num * num << endl;
    
    return 0;
}
