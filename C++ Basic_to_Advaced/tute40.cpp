#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;
public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "maths marks = " << maths << endl;
    cout << "physics marks = " << physics << endl;
}
class Result : public Exam
{
    float percentage;
public:
    void display_result()
    {
        cout << "hello1" << endl;
        get_roll_number();
        cout<<"hello2"<<endl;
        get_marks();
        cout << "percentage = " << (maths + physics) / 2 <<"%"<< endl;
    }  
};

int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0 , 90.0);
    harry.display_result();
    
    return 0;
}