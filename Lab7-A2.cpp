//Lab7-A1
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main(void) {
	int movement;
	int drunk = 1;
	int numdrunk = 0;
	int x = 0;
	int y = 0;
	int minutes;

	cout << "Enter number of minutes for each drunkard to stagger: ";
	cin >> minutes;
	cout << endl;

	srand(time(0));
	while (drunk < 10) {
		numdrunk++;
		drunk = numdrunk;
		cout << "Drunkard #" << drunk;


		for (int m = 0; m <= 8; m++) {
			movement = rand() % 9;
		}

		//generate location of x and y coordinate
		if (movement == 3) {
			x = 0;
			y++;
		}
		if (movement == 7) {
			x = 0;
			y--;
		}
		if (movement == 4) { 
			x++;
			y++;
		}
		if (movement == 5) {
			x++;
			y = 0;
		}
		if (movement == 8) {
			x++;
			y--;
		}
		if (movement == 1) {
			x--;
			y = 0;
		}
		if (movement == 2) {
			x--;
			y++;
		}
		if (movement == 6) {
			x--;
			y--;
		}
		else if (movement == 0) {
			x = 0;
			y = 0;
		}
		cout << " finished at location (" << x << ", " << y << ")" << endl;
	}

	//Calculate step distance
	int numSteps = 0;
	double distance;
	numSteps = x * y;
	distance = sqrt(numSteps * 2.1);
	cout << "Expected distance: " << distance << endl;

}
