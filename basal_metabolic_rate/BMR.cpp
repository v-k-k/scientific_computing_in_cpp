#include "BMR.h"

BMR::BMR() {
	int intAge = 0;
	int intHeight = 0;
	double dblWeight = 0.0;
}

BMR::BMR (int age, int height, double weight) {
	intAge = age;
	intHeight = height;
	dblWeight = weight;

}

BMR::~BMR() {

}

void BMR::setAge (int age) {
	intAge = age;
}

void BMR::setHeight (int height) {
	intHeight = height;
}

void BMR::setWeight (double weight) {
	dblWeight = weight; 
}

//Harris-Benedict formula for calculating the BMR of a male
double BMR::calculateBMRMale () {
	return (66 + (13.8 * dblWeight) + (5.0 * intHeight) - (6.8 * intAge) );
}

//Harris-Benedict formula for calculating the BMR of a female
double BMR::calculateBMRFemale () {
	return (655 + (9.5 * dblWeight) + (1.9 * intHeight) - (4.7 * intAge) );
}