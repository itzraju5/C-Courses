#include <bits/stdc++.h>
using namespace std;

class Point
{
  int x, y;
  friend double distance(Point, Point);

public:
  Point(int a, int b)
  {
    x = a;
    y = b;
  }
  void displayPoint()
  {
    cout << "The point is = (" << x << "," << y << ")" << endl;
  }
  // Point(Point o1, Point o2)
  // {
  //   // double c = sqrt(pow((o2.y - o1.y),2)  + pow((o2.x - o1.x),2));
  //   double c = sqrt((o2.y - o1.y) * (o2.y - o1.y) + (o2.x - o1.x) * (o2.x - o1.x));
  //   cout << c;
  //   cout << "raju ";
  // }
};
double distance (Point o1, Point o2)
  {
    // double c = sqrt(pow((o2.y - o1.y),2)  + pow((o2.x - o1.x),2));
    double c = sqrt((o2.y - o1.y) * (o2.y - o1.y)+ (o2.x - o1.x) * (o2.x - o1.x));
    
    return c;
  }
int main()
{
  int x, y;
  cout << "Enter x&y coordinate" << endl;
  cin >> x >> y;
  Point p(x, y); // Constructor called

  cout << "Enter x&y coordinate" << endl;
  cin >> x >> y;
  Point q(x, y); // Constructor called

  p.displayPoint();
  q.displayPoint();

   double c = distance(p, q);

  //  Point(p, q);
   cout << " the distance between the two respective points is " << c;
  return 0;
}