/* 
 * Extremely easy CTF challenge
 * Takes user input and hashes it
 * Checks it against hashed flag
 * Uses c++ to stop angr from autosolving
 * Why are you still reading this
*/
#include <iostream> // include iostream
#include <string> // include string
int main () { // declare main
	int i = 0; // declare counting variable
	std::cout << "Enter the flag: " << std::endl; // ask for user input
	std::string input; // declare the input variable
	getline(std::cin, input); // get user input
	while (input[i]) { // begin hash algo
		input[i] = i*input[i]*input[i]+333*44; // int overflow and multiplication destroys information
		i++; // add one to the current index
		input[i-1] = input[i-1] + input[i]; // more secure stuff
		input[i-1] = input[i-1] | 7765534786546; // add an OR to make numbers big and scary 
	} // end hash algo
	if ((-1 == (int)input[0]) && ( -5 == (int)input[1]) && ( -14 == (int)input[2]) && ( -13 == (int)input[3]) && ( -10 == (int)input[4]) && ( -10 == (int)input[5]) && ( -9 == (int)input[6]) && ( -10 == (int)input[7]) && ( -13 == (int)input[8]) && ( -2 == (int)input[9]) && ( -5 == (int)input[10]) && ( -2 == (int)input[11]) && ( -2 == (int)input[12]) && ( -10 == (int)input[13]) && ( -13 == (int)input[14]) && ( -14 == (int)input[15]) && ( -14 == (int)input[16]) && ( -2 == (int)input[17]) && ( -1 == (int)input[18]) && ( -10 == (int)input[19]) && ( -2 == (int)input[20]) && ( -5 == (int)input[21]) && ( -5 == (int)input[22]) && ( -14 == (int)input[23]) && ( -13 == (int)input[24]) && ( -5 == (int)input[25]) && ( -5 == (int)input[26]) && ( -13 == (int)input[27]) && ( -5 == (int)input[28]) && ( -5 == (int)input[29]) && ( -13 == (int)input[30]) && ( -10 == (int)input[31]) && ( -13 == (int)input[32]) && ( -6 == (int)input[33]) && ( -2 == (int)input[34])) { // checks if the input is rctf{this_is_the_flag,_good_job_ig}
		printf("200 OK"); // Success message
	} else {
		printf("404 SKILLS NOT FOUND"); // Incur physcological damage so the challenge is harded 
	}
}