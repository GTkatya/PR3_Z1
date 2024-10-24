#ifndef MYCLASS_H
#define MYCLASS_H

#include <string>
using namespace std;

// Класс Applicant, представляет информацию об одном кандидате
class Applicant {
private:
    string fullName;
    int birthYear;
    string education;

public:
    // Конструктор
    Applicant(const string& name, int year, const string& edu);

    // Метод для вывода информации о кандидате
    void printInfo();

    // Новый метод для вывода сообщения на экран
    void displayMessage(const string& message);
};

#endif // MYCLASS_H
