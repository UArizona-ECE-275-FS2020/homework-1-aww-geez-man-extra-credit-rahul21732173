#include "Morty.hpp"
#include <string> 
#include <iostream>








void C137::Morty(int start, int stop, int step) {

	for (int i = start; i <= stop;) {

		if (i % 15 == 0) {
			cout << i << ":" << " Aww Geez Man" << "\n";
		}

		else if (i % 3 == 0) {
			cout << i << ":" << " Aww" << "\n";
		}
		else if (i % 5 == 0) {
			cout << i << ":" << " Geez" << "\n";
		}
		else {
			cout << i << ": " << "\n";
		}
		i = i + step;
	}


}

void C137::Morty(int start, int stop) {

	for (int i = start; i <= stop; ++i) {

		if (i % 15 == 0) {
			cout << i << ":" << " Aww Geez Man" << "\n";
		}

		else if (i % 3 == 0) {

			cout << i << ":" << " Aww" << "\n";
		}
		else if (i % 5 == 0) {

			cout << i << ":" << " Geez" << "\n";
		}

		else {
			cout << i << ": " << "\n";
		}

	}
}

void Z286::Morty(int start, int stop, int step) {


	for (int i = start; i <= stop;) {

		if (i % 15 == 0) {
			cout << i << ":" << " naM zeeG wwA" << "\n";
		}

		else if (i % 3 == 0) {
			cout << i << ":" << " wwA" << "\n";
		}
		else if (i % 5 == 0) {
			cout << i << ":" << " zeeG" << "\n";
		}

		else {
			cout << i << ": " << "\n";
		}

		i = i + step;
	}

}


void Z286::Morty(int start, int stop) {


	for (int i = start; i <= stop; ++i) {
		if (i % 15 == 0) {
			cout << i << ":" << " naM zeeG wwA" << "\n";
		}
		else if (i % 3 == 0) {
			cout << i << ":" << " wwA" << "\n";
		}
		else if (i % 5 == 0) {
			cout << i << ":" << " zeeG" << "\n";
		}
		else {
			cout << i << ": " << "\n";
		}

	}


}

namespace interdimensional {
args parseArgs(int c, char** v) {
	args x;
	string dimension;
	x.start = stoi(v[1]);
	x.stop = stoi(v[2]);

	if (c == 4) {
    	dimension = v[3];
		x.step = 1;
			if (dimension == "C137") {
				x.dim = C137;
			}

			else if (dimension == "Z286") {
				x.dim = Z286;
			}
			else {
				x.dim = UNKNOWN;
			};
		}
	else if (c == 5) {
		dimension = v[4];
		x.step = stoi(v[3]);

			if (dimension == "Z286") {
				x.dim = Z286;
			}

			else if (dimension == "C137") {
				x.dim = C137;
			}
			else {
				x.dim = UNKNOWN;
			}
		}
		return x;
	};
}


