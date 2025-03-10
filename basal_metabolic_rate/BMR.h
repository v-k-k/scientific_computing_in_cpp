#include <iostream>
#include <string>

using namespace std;

#ifndef BMR_H
#define BMR_H

class BMR {

public:
	//Default constructor
	BMR();
	//Overload constructor
	BMR(int, int, double);
	//Destructor
	~BMR();

	//Mutator function
	void setAge (int);
	void setHeight (int);
	void setWeight (double);

	//Accessor functions
	int getAge () const {
		return intAge;
	}

	int getHeight () const {
		return intHeight;
	}

	double getWeight () const {
		return dblWeight;
	}

	//extra-function for calculating the BMR 
	double calculateBMRMale ();
	double calculateBMRFemale ();


private: 
	//Member variables
	int intAge; int intHeight; double dblWeight;


};

#endif