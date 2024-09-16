#include <iostream>
using namespace std;

int main(){ 
    string UScitizen, twoYearsExperience, bachelors;
    cout << "Are you a US citizen? Type yes or no" << endl;
    cin >> UScitizen;
    if(UScitizen == "no"){
        cout << "You are not eligible for a job" << endl;
        return 0;
    }
    cout << "Do you have a bachelor's degree? Type yes or no" << endl;
    cin >> bachelors;
    if(bachelors == "yes"){
        cout << "You are eligible for a job" << endl;
        return 0;
    }
    cout << "Do you have at least two years experience? Type yes or no" << endl;
    cin >> twoYearsExperience;
    if(twoYearsExperience == "yes"){
        cout << "You are eligible for a job" << endl;
        return 0;
    }
    cout << "You are not eligible for a job" << endl;
    return 0;
  
}
