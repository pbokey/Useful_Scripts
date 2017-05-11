#include "classDef.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Default Constructor
classDef::classDef(){

}

// Argument Constructor
classDef::classDef(int i, char c) {
    this -> credits = i;
    this -> grade = c;
}

// Get Credits associated with the Class
int classDef::getCredits() {
    return this -> credits;
}

// Get char grade assocated with the Class
char classDef::getGrade() {
    return this -> grade;
}

// Helper Method 1 - getting the raw score (credits * grade) of each class
double getRawScore(classDef* cl) {
    int credits = cl -> getCredits();
    int rawScore;
    switch(cl -> getGrade()) {
        case 'a':
            rawScore = credits * 4.0;
            break;
        case 'b':
            rawScore = credits * 3.0;
            break;
        case 'c':
            rawScore = credits * 2.0;
            break;
        case 'd':
            rawScore = credits * 1.0;
            break;
        default:
            rawScore = 0;
    }
    return rawScore;
}

// Helper Method 2 - Getting the total credits of all classes stored in a vector
int getTotalCredits(vector<classDef*> cv) {
    int total = 0;
    for (int i = 0; i < cv.size(); i++) {
        total += cv[i] -> getCredits();
    }
    return total;
}

int main() {
    int num;
    cout << "Enter the number of classes you have taken: "; // getting the number of total classes you have taken
    cin >> num;

    vector<classDef*> classVector;
    for (int i = 0; i < num; i++) {     // adds a new class object to the vector for the number of classes you have taken
        int credits = 0;
        char grade = 0;
        cout << "How many credits is class " << i + 1 << "?: ";
        cin >> credits;
        cout << "What is your grade in this class (enter a-f)?: ";
        cin >> grade;
        classDef* cl = new classDef(credits, grade);    // creating the new class objet
        classVector.push_back(cl);  // adding the class object to the vector
    }
    vector<classDef*>& classVectorRef = classVector;
    double totalRawScore;
    for (int i = 0; i < num; i++) {
        totalRawScore += getRawScore(classVector[i]);
    }
    int total = getTotalCredits(classVector);   // gets the total credits of all the classes
    double gpa = totalRawScore / total;     // calcaultes the GPA
    cout << "Your GPA is: " << setprecision(2) << fixed << gpa << endl; // outputs GPA to 2 decimal places
    return 0;
}