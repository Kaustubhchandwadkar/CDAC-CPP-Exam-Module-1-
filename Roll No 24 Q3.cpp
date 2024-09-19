//Q.No. 2
//Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
//class named &#39;Rectangle&#39; with a function named &#39;Area&#39; which returns the area. Length


#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breath;
	public:

		int area(int length,int breath)
		{
			this->length=length;
			this->breath=breath;
			cout<<"\nThe area of rectangle is="<<length*breath;
			
			
		}
};
int main()
{
	rectangle r1;
	rectangle r2;
	r1.area(4,6);
	r2.area(5,8);
	
	
}