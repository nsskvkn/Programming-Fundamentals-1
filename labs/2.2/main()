#include <iostream>

using namespace std;

int main(){
        setlocale(LC_ALL, "RU");

    enum Names { Олександр, Катерина, Дмитро, Марія, Антон, Ірина };
    
    struct Student
    {
        Names name;
        int age;
        float avgScore;
    };
    
    Student myStudents[6] = {
        { Олександр, 17, 4.5 },
        { Катерина, 18, 3.8 },
        { Дмитро, 18, 4.2 },
        { Марія, 17, 4.9 },
        { Антон, 19, 3.5 },
        { Ірина, 16, 4.0 },
    
    };
    
    float totalScore = 0;
    for (int i = 0; i < 7; i++)
    {
        totalScore += myStudents[i].avgScore;
    }
    float avgGroupScore = totalScore / 7;
    cout << "Середній бал групи: " << avgGroupScore << endl;

    cout << "Студенти з вищим середнім балом: " << endl;
    for (int i = 0; i < 7; i++)
    {
        if (myStudents[i].avgScore > avgGroupScore)
        {
            cout << "Ім'я: " << myStudents[i].name << ", Бал: " << myStudents[i].avgScore << endl;
        }
    }
    
    return 0;
}