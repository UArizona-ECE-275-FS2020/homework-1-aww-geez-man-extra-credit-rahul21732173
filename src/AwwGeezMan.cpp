#include "Morty.hpp"
#include <string> 
#include <iostream>
#include <fstream>
#include <string>
#include<cstring>
#include<stdlib.h>

int main(int ac, char** av) {



	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}


	interdimensional::args x = interdimensional::parseArgs(ac, av);

	
	if (x.dim == -1) {
		cout << "ERROR: Unknown dimension!!" << endl;
	}
	

	else if (ac == 4) {

		
		
			cout << "Morty " << av[3] << " says:" << "\n";



			if (x.dim==1) {



				Z286::Morty(stoi(av[1]), stoi(av[2]));


			}

			else if (x.dim == 0) {

				C137::Morty(stoi(av[1]), stoi(av[2]));


			}
		

		//else {
			//cout << "Error: Unknown Dimension!!" << endl;
		//}


	}




	

	else if (ac == 5) {


		
			cout << "Morty " << av[4] << " says:" << "\n";



			if (x.dim == 1) {

				Z286::Morty(stoi(av[1]), stoi(av[2]), stoi(av[3]));


			}

			else if (x.dim == 0) {

				C137::Morty(stoi(av[1]), stoi(av[2]), stoi(av[3]));


			}
		

		//else {
			//cout << "Error: Unknown Dimension!!" << endl;

//		}


	}











	return 0;












}
