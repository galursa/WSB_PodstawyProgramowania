class Rectangle
{
	public:
		double a;
		double b;
		
		Rectangle();
		
		Rectangle(double, double);
		
		double area();
};

Rectangle::Rectangle()
{
	a = 1;
	b = 1;
}
		
Rectangle::Rectangle(double newA, double newB)
{
	a = newA;
	b = newB;
}
		
double Rectangle::area()
{
	return a*b;
}
