#include "Simple_window.h"
#include "Graph.h"

int main()
{
	using namespace Graph_lib; //our graphics facilities are in Graph_lib (defined in Graph.h)

	Point top_left{500, 100};    //will be top left corner of window

	Simple_window win {top_left, 600, 400, "Canvas"};

	Polygon poly;    //make a shape a polygon

	//add some points, set color of poly
	poly.add(Point{300, 200});
	poly.add(Point{350, 100});
	poly.add(Point{400, 200});
	poly.set_color(Color::red);

	win.attach (poly);   //attach poly to window

	Rectangle r {Point{200, 200}, 100, 50};
	win.attach(r);

	Axis xa {Axis::x, Point{20, 300}, 280, 10, "x axis"};
	win.attach(xa);

	Axis ya {Axis::y, Point{20, 300}, 280, 10, "y axis"};
	ya.set_color(Color::cyan);
	// choose a color
	ya.label.set_color(Color::dark_red);
	win.attach(ya);

	Function sine {sin, 0, 100, Point{20, 150}, 1000, 50, 50};
	// sine curve
	win.attach(sine);

	Rectangle rect00 {Point{150, 100}, 200, 100};
	Rectangle rect11 {Point{50, 50}, Point{250, 150}};
	Rectangle rect12 {Point{50, 150}, Point{250, 250}};
	Rectangle rect21 {Point{250, 50}, 200, 100};
	Rectangle rect22 {Point{250, 150}, 200, 100};

	rect00.set_fill_color(Color::yellow);
	rect11.set_fill_color(Color::blue);
	rect12.set_fill_color(Color::red);
	rect21.set_fill_color(Color::green);

	win.attach(rect00);
	win.attach(rect11);
	win.attach(rect12);
	win.attach(rect21);
	win.attach(rect22);

  	win.wait_for_button();  //give control to the display engine
}
