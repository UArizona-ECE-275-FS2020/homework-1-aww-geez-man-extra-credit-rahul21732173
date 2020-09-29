#include <string> 
#include <iostream>

using namespace std;



namespace interdimensional {
	// Declare enumeration to hold the dimensions each Morty is from
	enum dimension { UNKNOWN = -1, C137, Z286 };

	// Declare a structure to hold the arguments passed to the function
	struct args {
		int start;
		int stop;
		int step;
		dimension dim;
	};
	// Declare a function to parse the args and return the above declared structure
	args parseArgs(int c, char** v);

}


//C137 name space
namespace C137 {

    void Morty(int start, int stop, int step);
   
    void Morty(int start, int stop);
        
    

}

// Z286 name space
namespace Z286 {

    void Morty(int start, int stop, int step);

    void Morty(int start, int stop);
}



