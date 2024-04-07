#include<iostream>
using namespace std;

int main()
{

float A[5] , max;
int i;

cout<<"Enter 5 numbers"<<endl;

     for(i=0;i<=4;i++)
	 {
        cin>>A[i];
	 }

	 max = A[0];

	for(i=1;1<=4;i++)
	{
       if(A[i]>max)
	   {
		 max = A[i];
	   }

	}
	cout<< "Largest number is:" <<max;   	
	    
		
	 return 0;	
}