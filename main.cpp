#include <iostream>
#include <vector>

using namespace std;


class Student
{
public:
    void show()
    {
        cout << "Это студент" << endl;
    }
};

class ExcellentStudent : public Student
{
public:
    void info()
    {
        cout << "Учится на отлично" << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Student s;
    ExcellentStudent e;

    cout << "Базовый класс:" << endl;
    s.show();

    cout << endl;

    cout << "Производный класс:" << endl;
    e.show();
    e.info();

    system("pause");
    return 0;
}