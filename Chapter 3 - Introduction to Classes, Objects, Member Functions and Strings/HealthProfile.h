/* A HealthProfile "starter" class with a constructor that receives
 * the data for the following class attributes: first name, last name,
 * gender, DOB, height (in), and weight (lbs). It also features
 * functions for calculating the maximum heart rate, target heart
 * rate range, age, and BMI.
 * 
 * Author: Alex Cole Foster
 */

#include <string> 

class HealthProfile{
public:
    HealthProfile(std::string fName, std::string lName, std::string gender, int bD, int bM, int bY, int h, int w) {
        setFirstName(fName);
        setLastName(lName);
        setGender(gender);
        setBirthDay(bD);
        setBirthMonth(bM);
        setBirthYear(bY);
        setHeight(h);
        setWeight(w);
    }
    
    // Set functions for the data members
    void setFirstName(std::string fName) {
        firstName = fName;
    }
    
    void setLastName(std::string lName) {
        lastName = lName;
    }
    
    void setGender(std::string gender) {
        patGender = gender;
    }
    
    void setBirthDay(int bD) {
        birthDay = bD;
    }
    
    void setBirthMonth(int bM) {
        birthMonth = bM;
    }
    
    void setBirthYear(int bY) {
        birthYear = bY;
    }
    
    void setHeight(int h) {
        height = h;
    }
    
    void setWeight(int w) {
        weight = w;
    }
    
    // Get functions for the data members
    std::string getFirstName() const {
        return firstName;
    }
    
    std::string getLastName() const {
        return lastName;
    }
    
    std::string getGender() const {
        return patGender;
    }
    
    int getBirthDay() const {
        return birthDay;
    }
    
    int getBirthMonth() const {
        return birthMonth;
    }
    
    int getBirthYear() const {
        return birthYear;
    }
    
    int getHeight() const {
        return height;
    }
    
    int getWeight() const {
        return weight;
    }
    
    int calcAge(int cD, int cM, int cY) {
        int age{cY - birthYear};
        
        if (cM < birthMonth) {
            age = age - 1;
        }
        
        if (cM == birthMonth) {
            if (cD < birthDay) {
                age = age - 1;
            }
        }
        
        return age;
    }
    
    int maxHeartRate(int cD, int cM, int cY) {
        return 220 - calcAge(cD, cM, cY);
    }
    
    void targetHeartRate(int cD, int cM, int cY) {
        std::cout << "\nTarget heart rate:\t" 
        << maxHeartRate(cD, cM, cY) * 0.5 
        << " - " 
        << maxHeartRate(cD, cM, cY) * 0.85;
    }
        
    void calcBMI(int h, int w){
        std::cout << "\nBMI:\t" 
        << (w * 703) / (h * h) 
        << std::endl;
        std::cout << "\nBMI VALUES"
        << "\nUnderweight: less than 18.5"
        << "\nNormal: between 18.5 and 24.9"
        << "\nOverweight: between 25 and 29.9"
        << "\nObese: 30 or greater"
        << std::endl;
    }
        
private:    
    std::string firstName;
    std::string lastName;
    std::string patGender;
    int birthDay;
    int birthMonth;
    int birthYear;
    int height;
    int weight;
};
