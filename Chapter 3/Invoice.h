/* Header file for the Invoice class, containing four data members,
 * a constructor, and several member functions.
 * 
 * Author: Alex Cole Foster
 */

#include <string>

class Invoice{
public:
    Invoice(std::string itemNum, std::string itemDesc, int numPurchased, int cost)
    : partNum{itemNum}, partDesc{itemDesc}, amountBought{numPurchased}, price{cost} {
    // Empty constructor body
    }
    
    // Set and get member functions for each data member
    std::string getPartNum() const {
        return partNum; // Return the item's part number
    }
    
    std::string getPartDesc() const {
        return partDesc;    // Return the item's description
    }
    
    int getAmountBought() const {
        return amountBought;    // Return the amount of the item bought
    }
    
    int getPrice() const {
        return price;   // Return the item's price
    }
    
    void setPartNum(std::string itemNum) {
        partNum = itemNum;  // Set partNum to the string passed to itemNum
    }
    
    void setPartDesc(std::string itemDesc) {
        partDesc = itemDesc;    // Set partDesc to the string passed to itemDesc
    }
    
    void setAmountBought(int numPurchased) {
        amountBought = numPurchased;    // Set amountBought to the integer passed to numPurchased
    }
    
    void setPrice(int cost) {
        price = cost;   // Set price to the integer passed to cost
    }
    
    int getInvoiceAmount(int numPurchased, int cost){
        if (numPurchased < 0) {
            numPurchased = 0;   // If a negative number of items is entered, set the number of items to 0
        }
        
        if (cost < 0) {
            cost = 0;   // If the cost is negative, set the cost to 0
        }
        
        return numPurchased * cost; // After the if statements, return the total price of the purchase
    }
private:                    // 4 data members
    std::string partNum;    // Part #
    std::string partDesc;   // Part description
    int amountBought;    // Quantity of item purchased
    int price;           // Price per item
};
