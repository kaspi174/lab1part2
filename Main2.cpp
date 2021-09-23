#include<iostream>

using namespace std;

// Base class

class Shape{
	public:

		// pure virtual function providing interface framework.
	
		virtual int getArea()=0;

		void setRadius(int r)
	{
		radius =r;
	}

	void setPi(int p)

	{
		pi = p;
p=3.14;
		}
		
protected:int radius;

		  int radius;
		};
		class Circle:public Shape
		{
		public:
        int getArea()
		{
			return(p*(r*r));
		
		}
			};
			int main(void){
				Circle Cir;
				Cir.setRadius(5);
				Cir.setPi(1);
				// Print the area of the object.
				cout <<"Total Circle area: "<<Cir.getArea()<<endl;
				return 0;
			}# kaspi174
