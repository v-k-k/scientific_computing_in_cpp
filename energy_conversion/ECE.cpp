#include "ECE.h"

ECE::ECE() {
	string strType = "";
	int intLuminousEfficacy = 0;
	double dblPrice = 0.0;
}

ECE::ECE (string types, int efficacies, double prices) {
	setType(types);
	setLuminousEfficacy(efficacies);
	setPrice(prices);
}

ECE::~ECE() {

}


void ECE::setType (string types) {
	if (types.length() > 0) {
		strType = types;
	}
	else {
		cout << "Data could not be read, might have a different format for type of light" << endl;
		exit(1);
	}
}

void ECE::setLuminousEfficacy (int efficacies) {
	if (efficacies > 0) {
		intLuminousEfficacy = efficacies;
	}
	else {
		cout << "Data could not be read, might have a different format for luminous efficacy" << endl;
		exit(1);
	}
}

void ECE::setPrice (double prices) {

	if (prices > 0 ) {
		dblPrice = prices;
	}
	else {
		cout << "Data could not be read, might have a different format for price" << endl;
		exit(1);
	}

}


double ECE::calculateECE() {
	return ( (intLuminousEfficacy / 350.0) * 100);
}
