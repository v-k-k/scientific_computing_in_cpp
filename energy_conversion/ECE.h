#include <iostream>
#include <string>

using namespace std;

#ifndef ECE_H
#define ECE_H

class ECE {
	
	//public access modifier
public: 

	//Default constructor
	ECE();

	//Overload constructor
	ECE(string, int, double);

	//Destructor
	~ECE();

	//Mutator functions (setters)
	void setType (string);
	void setLuminousEfficacy (int);
	void setPrice (double);

	//Accessor functions (getters)
	string getType() const {
		return strType;
	}

	int getLuminousEfficacy() const {
		return intLuminousEfficacy;
	}

	double getPrice() const {
		return dblPrice;
	}

	//extra-function for calculating the ECE
	double calculateECE();


	//private member variables (private access modifier) 
private:
	string strType; int intLuminousEfficacy; double dblPrice;

};

#endif 