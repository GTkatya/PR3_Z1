#include <iostream>
#include "MyClass.h"

using namespace std;

// Конструктор класса Applicant
Applicant::Applicant(const string& name, int year, const string& edu) {
    fullName = name;
    birthYear = year;
    education = edu;
}

// Определение метода printInfo
void Applicant::printInfo() {
    cout << "Name: " << fullName << endl;
    cout << "Birth year: " << birthYear << endl;
    cout << "Education: " << education << endl;
    cout << endl;
}

// Определение метода displayMessage
void Applicant::displayMessage(const string& message) {
    cout << message << endl;
}
