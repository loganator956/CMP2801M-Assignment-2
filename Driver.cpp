/* ------------------------------------------------------
CMP2801M: Advanced Programming
Driver program for assignment 
Fall 2019

Written by Ayse Kucukyilmaz

This file is a representative test file. 
During marking, we will use the exact same notation 
as provided in the brief, so make sure
you follow that guideline. Also make sure that you don't 
change the main body provided to you here.
Otherwise, your code may not pass the test cases...

GOOD LUCK! 

------------------------------------------------------ */

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Movable.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userCommand;
	vector <Shape*> shapes;     // this one will hold your shapes
	vector <string> parameters; // this one will hold parameters for the commands


	while (userCommand.compare("exit") != 0) 
	{
		cout << "Enter the command: ";
		
		getline(cin, userCommand);

		char * cstr = new char[userCommand.length() + 1];

		strcpy_s(cstr, userCommand.length()+1, userCommand.c_str());
		
		// implement a string tokenizer to populate the parameters vector 
		// check function strtok_s
		const char* delimiter = " ";
		char* nextToken;
		char* token = strtok_s(cstr, delimiter, &nextToken);
		while (token)
		{
			parameters.push_back(token);
			token = strtok_s(NULL, delimiter, &nextToken);
		}

		// as a result of the process, parameters[0] should hold your command, followed by your parameters 
		string command = parameters[0];


		// in the following code, consider checking for the arguments.
		// in case of too few arguments, you may remind the user the correct format

		if (command.compare("addR") == 0) {
			// get parameters in the correct order
			// The following four lines have a type mismatch error
			// note that the the parameters vector contains ascii values
			// HINT: stoi function converts from string to int

			int x = std::stoi(parameters[1].c_str());
			int y = std::stoi(parameters[2].c_str());
			int h = std::stoi(parameters[3].c_str());
			int w = std::stoi(parameters[4].c_str());

			Rectangle* r = new Rectangle(x, y, h, w);
			shapes.push_back(r);
			// TODO: Implement operator overloading
			cout << r->toString() << endl; /* instead of this, you may implement operator overloadig and
									use cout << r which will give you additional points */
		}
		else if (command.compare("addS") == 0) {
			// get parameters
			// ...
			int x = std::stoi(parameters[1].c_str());
			int y = std::stoi(parameters[2].c_str());
			int e = std::stoi(parameters[3].c_str());

			Square* s = new Square(x, y, e);
			shapes.push_back(s);
			cout << s->toString();
		}

		if (command.compare("addC") == 0) {
			// get parameters
			// ...
			int x = std::stoi(parameters[1].c_str());
			int y = std::stoi(parameters[2].c_str());
			int r = std::stoi(parameters[3].c_str());

			Circle* c = new Circle(x, y, r);
			shapes.push_back(c);
			cout << c->toString();
			
		}
		else if (command.compare("scale") == 0) {
			// scale object at index... the scaling needs to be isotropic in case of circle and square 
			// you may want to check if the index exists or not!
			
			// Multiple inhertitance is tricky! The Shape class does nto have a scale function, the Movable does!
			// As a result all your derived classes have scale functions... 
			// You may need to use type casting wisely to use polymorphic functionality!
			
		}
		else if (command.compare("move") == 0) {
			// move object at index 
			// read from parameters
			int shapeNo = std::stoi(parameters[1].c_str()); 
			int x = std::stoi(parameters[2].c_str());
			int y = std::stoi(parameters[3].c_str());
			// you may want to check if the index exists or not!
			
			// Study the following code. A Shape object is not Movable, but all derived classes are...
			// you can't automatically type cast from a Shape to a Movable, but you can force a downcasting
			Movable *m = dynamic_cast<Movable*>(shapes[shapeNo - 1]);
			m->move(x, y);
			// scale should work similarly...
			// note that here you should see the corresponding toString output for the derived classes...
			// if toString is not a virtual function, you may see the base class functionality :(
		//	cout << shapes[shapeNo - 1]->toString();
		}
		else if (command.compare("display") == 0) {
			// this is not given in our example, but why don't you implement a display function which shows all objects stored in shapes?
		}

		// calculate points, area, and perimeter
		std::vector<Point*> points = shapes[shapes.size() - 1]->calculatePoints();
		std::cout << "Points[";
		for (int i = 0; i < points.size(); i++)
		{
			std::cout << "(" << points[i]->get_x() << ", " << points[i]->get_y() << ")";
		}
		std::cout << "]" << endl;
		float a = shapes[shapes.size() - 1]->calculateArea();
		float p = shapes[shapes.size() - 1]->calculatePerimeter();
		std::cout << "Area=" << a << " Perimeter=" << p << endl;

		// do any necessary postprocessing at the end of each loop...
		// yes, there is some necessary postprocessing...
		parameters.clear();
		cout << endl << endl;
	}

	cout << "Press any key to continue...";
	std::getchar();

	return 0;
}
