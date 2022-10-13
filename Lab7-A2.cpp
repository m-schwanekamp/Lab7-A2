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
	int seconds;
	int numsteps;
	double distance = 0;
	double distance1 = 0;
	double avg;

	cout << "Enter number of minutes for each drunkard to stagger: ";
	cin >> minutes;
	seconds = minutes * 60;

	srand(time(0));
	while (drunk < 10000) {
		numdrunk++;
		drunk = numdrunk;

		for (int i = 1; i <= 10; i++) {
			for (int i = 0; i <= 8; i++) {
				int iRand = ((rand() % 9) + 1);
				movement = iRand;


				//generate location of x and y coordinate
				if (movement == 3) {
					y++;
				}
				if (movement == 7) {
					y--;
				}
				if (movement == 4) {
					x++;
					y++;
				}
				if (movement == 5) {
					x++;
				}
				if (movement == 8) {
					x++;
					y--;
				}
				if (movement == 1) {
					x--;
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
					x += 0;
					y += 0;
				}
			}
		}
		if (drunk == 1) {
			numsteps = x + y;
			if (numsteps > 0) {
				distance = numsteps * 2.1;
			} 
			else if (numsteps < 0) {
				distance = (-1) * (numsteps * 2.1);
			}
			distance = sqrt((((4 + 4 * sqrt(2)) / 8) * 8 / 9) * seconds);
			cout << "Expected distance: " << distance << endl;
		}
		
		for (drunk = 1; drunk <= 10000; drunk++) {
			numsteps = x + y;
			if (numsteps > 0) {
				distance1 += numsteps * 2.1;
			}
			else if (numsteps < 0) {
				distance1 += (-1) * (numsteps * 2.1);
			}
			numdrunk++;
			drunk = numdrunk;
			avg = distance1 / drunk;
			
		}
		cout << "average number is " << avg << endl;
	}
	
}
