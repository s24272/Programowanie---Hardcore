#include "Student.h"
#include <iostream>
#include <string>

Student::Student(std::string name, std::string surname, int indexNum, int semestr, double averageGrade) 
{
    this -> imie = name;
    this -> nazwisko = surname;
    this -> nr_index = indexNum;
    this -> semestr = semestr;
    this -> srednia = averageGrade;
}

std::string Student::toString() const
{
    return "Imie: " + imie + 
    " Nazwisko: " + nazwisko + 
    " Numer indexu: " + std::to_string(nr_index) + 
    " Semester: " + std::to_string(semestr) + 
    " Srednia: " + std::to_string(srednia) + '\n';
}

int main()
{
    Student student = Student("Krzychu", "Michalski", 24231, 4, 3.75);
    std::cout << student.toString();

    return 0;
}
