#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
   virtual void display() = 0;   // do-nothing function  ---> pure virtual function
    // {
    //     cout << "Bogus" << endl;
    // }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
CWHVideo(string s, float r, float vL) : CWH(s,r)
{
    videoLength = vL;
}
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
  int words;
  public:
  CWHText(string s, float r, int wc) : CWH(s, r)
  {
      words = wc;
  }
  void display()
  {
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
  }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();
    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();
    
    
    //-----------with the help of pinter--------//

    CWH *tute[2];
    tute[0] = & djVideo;
    tute[1] = & djText;

    tute[0]->display();
    tute[1]->display();


    return 0;

}






