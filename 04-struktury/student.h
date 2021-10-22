#ifndef STUDENT
#define STUDENT

#include <string>

struct Student
{
public:
    Student(std::string name, std::string surname, int indexNum, int semestr = 0, double aveGrade = 0);

    std::string imie;
    std::string nazwisko;
    int nr_index;
    int semestr;
    float srednia;

    std::string toString() const;
};

#endif
