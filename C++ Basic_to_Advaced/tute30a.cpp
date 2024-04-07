#include <bits/stdc++.h>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a , int b){
        x = a;
        y = b;
    } 
    void displayPoint(){
        cout << "The point is = ("<<x<<","<<y<<")"<<endl;
    }
};
int main()
{
    Point p(2, 3); // Constructor called
    Point q(4, 5); // Constructor called

  p.displayPoint();
  q.displayPoint();

    return 0;
}