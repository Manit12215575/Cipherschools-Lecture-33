//function overloading
#include<iostream>
using namespace std;
class Coordinate
{
	private:
		float a;
		float b;
		public:
				void distance(float a)
			{
				float dist;
				dist=(this->a-a)*(this->a-a)+(this->b-a)*(this->b-a);
				cout<<dist;
			}
			void distance(float a, float b,float c)
			{
				float dist;
				dist=(this->a-a)*(this->a-a)+(this->b-b)*(this->b-a);
				cout<<dist;
				cout<<"the thirs func is used"
			}
	};
		int main()
		{
			Coordinate x;
			x.a=3;
			x.b=4;
			x.distance(0,0,0);
	}
}

function overloading=multiple function with same name but perform differently
#include<iostream>
using namespace std;
class Coordinate
{
	private:
		float a;
		float b;
		public:
			Coordiante operator+(Coordinate const &obj)
			{
				Coordiante z;
				z.a=this->a+obj.a;
				z.b=this->b+obj.b;
				return z;
			}
				void distance(float a)
			{
				float dist;
				dist=(this->a-a)*(this->a-a)+(this->b-a)*(this->b-a);
				cout<<dist;
			}
			void distance(float a, float b,float c)
			{
				float dist;
				dist=(this->a-a)*(this->a-a)+(this->b-b)*(this->b-a);
				cout<<dist;
				cout<<"the thirs func is used"
			}
	};
		int main()
		{
			Coordinate x;
			x.a=3;
			x.b=4;
			Coordinate y;
			y.a=5;
			y.b=6;
			Coordiante z;
			z=x+y;
			cout<<"the coordiante after addition are"<<z.a<<z.b;
			x.distance(0,0,0);
	}
}
