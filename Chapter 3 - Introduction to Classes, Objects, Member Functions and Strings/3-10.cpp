/* A program designed to test the capabilities of the Invoice class
 * 
 * Author: Alex Cole Foster
 */

#include <iostream>
#include <string>
#include "Invoice.h" 

using namespace std;

int main(){
    Invoice powerDrill{"1", "power drill", 0, 35};  // All of this is passed to the constructor
    Invoice hammer{"2", "hammer", 0, 8};            // numPurchased will be 0 for now, as the user
    Invoice nails{"3", "box of nails", 0, 5};       // will specify the amount bought
    Invoice customPart{"", "", 0, 0};
                                                    
    int amount, price, total{0};   // Declare some variables and initialize total (net) cost to $0
    string partNum, partDesc;      // Declare some string variables to store partNum and partDesc
    
    // Print part numbers, descriptions, and prices to demonstrate individual Invoice objects 
    cout << "Part " << powerDrill.getPartNum() << ": " << powerDrill.getPartDesc() << " - Price: $" << powerDrill.getPrice() << endl; 
    cout << "Part " << hammer.getPartNum() << ": " << hammer.getPartDesc() << " - Price: $" << hammer.getPrice() << endl;
    cout << "Part " << nails.getPartNum() << ": " << nails.getPartDesc() << " - Price: $" << nails.getPrice() << endl;
    
    // Purchasing items
    cout << "\n\nHow many of part " << powerDrill.getPartNum() << " are being purchased? ";     // Prompt for input
    cin >> amount;                                                                              // Input amount of items purchased
    powerDrill.setAmountBought(amount);                                                         // Tell powerDrill object how much is being bought
    cout << "Cost: $" << powerDrill.getInvoiceAmount(amount, powerDrill.getPrice()) << endl;    // Compute the price
    total = total + powerDrill.getInvoiceAmount(amount, powerDrill.getPrice());                 // Compute the current total
    cout << "Total cost: $" << total << endl;                                                   // Output the current total
    
    cout << "\n\nHow many of part " << hammer.getPartNum() << " are being purchased? ";         // Repeat for the hammer and then the box of nails
    cin >> amount;
    hammer.setAmountBought(amount);
    cout << "Cost: $" << hammer.getInvoiceAmount(amount, hammer.getPrice()) << endl;
    total = total + hammer.getInvoiceAmount(amount, hammer.getPrice());
    cout << "Total cost: $" << total << endl;
    
    cout << "\n\nHow many of part " << nails.getPartNum() << " are being purchased? ";
    cin >> amount;
    nails.setAmountBought(amount);
    cout << "Cost: $" << nails.getInvoiceAmount(amount, nails.getPrice()) << endl;
    total = total + nails.getInvoiceAmount(amount, nails.getPrice());
    cout << "Total cost: $" << total << endl;
    
    // Ordering a custom part
    cout << "\n\nEnter part number: ";  // Prompt for a part number
    cin.ignore(1000, '\n');             // Ignore the carriage return in the input buffer; otherwise, the program will skip this input!
    getline(cin, partNum);              // Accept an arbitrary string as the part number (could include letters and symbols)
    customPart.setPartNum(partNum);     // Set the customPart's part number using the appropriate Invoice member function
    
    cout << "Enter item description: "; // Prompt for an item description
    getline(cin, partDesc);             // Accept an arbitrary string as the item description
    customPart.setPartDesc(partDesc);   // Set the customPart's description using the appropriate Invoice member function
    
    cout << "Enter amount of " << customPart.getPartNum() << " being purchased: ";  // Prompt for the amount of the item being ordered
    cin >> amount;                                                                  // Read an integer input for the amount
    customPart.setAmountBought(amount);                                             // Set the customPart's amount using the Invoice member function
    
    cout << "Enter the price of part number " << customPart.getPartNum() << ": $";  // Prompt for the price per item of the customPart
    cin >> price;                                                                   // Read an integer input for the price
    customPart.setPrice(price);                                                     // Set the customPart's price using the Invoice member function
    
    cout << "\n\n" << customPart.getAmountBought() << " of part " << customPart.getPartNum() << " (" << customPart.getPartDesc() << ") costs: " << customPart.getInvoiceAmount(customPart.getAmountBought(), customPart.getPrice()) << endl;    // Print all of the item info out, including total cost
    total = total + customPart.getInvoiceAmount(customPart.getAmountBought(), customPart.getPrice());   // Update the net total for all items
    cout << "Total cost: $" << total << endl;                                                           // Print out the net total for all items
}
