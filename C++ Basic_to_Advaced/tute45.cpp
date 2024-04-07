#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int a)
    {
        roll_number = a;
    }
    void print_roll_number()
    {
        cout << "roll no. = " << roll_number << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "maths marks = " << maths << endl;
        cout << "physics marks = " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "score = " << score << endl;
    }
};

class Result : public Test, public Sports
{ 
    private:
    float total;
    public:
    void display (void)
    {
        total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout<<"total = "<<total<<endl;
        
    }

};

int main()
{   
    Result harry;
    harry.set_roll_number(4200);
    harry.set_marks(85.0, 90.0);
    harry.set_score(10);
    harry.display();

    return 0;
}