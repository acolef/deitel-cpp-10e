/* Modified Fig. 5.8 in Deitel text. This is a class that stores dollar
 * amounts and cent amounts in separate data members. There is some 
 * ambiguity about the divide member function; is it supposed to divide
 * the object's dollars and cents by another monetary quantity, or is it
 * supposed to divide them by a number? I take the latter approach, as 
 * I believe it to be what the authors intended. The addInterest member
 * function uses banker's rounding. 
 * 
 * Author: Alex Cole Foster
 */

#include <string>
#include <cmath>

class DollarAmount {
public:
    DollarAmount(int64_t dollarAmt, int64_t centAmt) 
    : dollars{dollarAmt}, cents{centAmt} {  // member initializer list
        // empty body
    }
    
    void add(int64_t dollarAmt, int64_t centAmt) { 
        int64_t addition; 
        
        addition = dollars * 100 + cents + dollarAmt * 100 + centAmt;
        dollars = addition / 100;
        cents = addition % 100;
    }
    
    void subtract(int64_t dollarAmt, int64_t centAmt) {
        int64_t subtraction; 
        
        subtraction = dollars * 100 + cents - dollarAmt * 100 - centAmt;
        dollars = subtraction / 100;
        cents = subtraction % 100;
    }
    
    void divide(int div) {
        int64_t division;
        
        division = (dollars * 100 + cents + (div / 2)) / div;   // Half-up rounding
        dollars = division / 100;
        cents = division % 100;
    }
    
    void addInterest(int rate, int divisor) {
        int round;
        int interest;
        
        // banker's rounding
        round = (dollars * 100 + cents) * rate;
        if ( round % 100 == 50 ) {                              // If we have half a penny exactly
            if ( (round / 100) % 2 == 0 )                       // and if have an even number of pennies
                interest = ((dollars * 100 + cents) * rate - 50) / divisor; // round down 
            else {
                if ( (round / 100) % 2 == 1 )                   // If we have an odd number of pennies
                    interest = ((dollars * 100 + cents) * rate + 50) / divisor;  // round up
            }
        }
        else
            interest = ((dollars * 100 + cents) * rate + divisor / 2) / divisor; //round with half-up method
        
        dollars += interest / 100;                          // Add dollars of interest to dollars
        if ( (cents + interest % 100) >= 100 ) {            // If the amount of cents exceeds 100
            dollars += 1;                                   // add 1 to dollars
            cents += interest % 100;                        // add cents of interest to cents
            cents %= 100;                                   // then take the remainder as cents
        }
        else                                                // If the amount of cents doesn't exceed 100
            cents += interest % 100;                        // just add interest of cents to cents
            
    }
    
    // return a string representation of a DollarAmount object
    std::string toString() const {
        std::string strDollars{std::to_string(dollars)};
        std::string strCents{std::to_string(std::abs(cents))};
        return strDollars + "." + (strCents.size() == 1 ? "0" : "") + strCents;
    }
private:
    int64_t dollars{0};
    int64_t cents{0};
};
