//Lab7-A2
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void) {
	int minutes;
	int numsteps;
	double distance;

	cout << "Enter number of minutes for each drunkard to stagger: ";
	cin >> minutes;

	cout << endl;

	srand((unsigned) time(0));
	for (int second = 1; second <= minutes * 60; second++) {
	
	}

	//expected final distance
	distance = sqrt(numsteps * 2.1);
	cout << "Expected distance: " << distance << endl;
}