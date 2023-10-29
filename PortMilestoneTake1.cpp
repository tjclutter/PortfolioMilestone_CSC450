#include <iostream>
#include <thread>
using namespace std;

//declare function countUp
void countUp() {
	//Use a for loop to count up to
	//twenty and print the numbers on the way
	for (int i = 0; i < 21; ++i) {
		cout << i;
	}
}

//declare function countDown
void countDown() {
	//Use for loop to count down from twenty
	//and print numbers along the way
	for (int i = 20; i >= 0; --i) {
		cout << i;
	}
}

//declare main function
int main() {
	try {
		//declare upthread which carries out 
		//the function countUp
		thread upThread(countUp);
		cout << endl;
		//declare downThread which carries out
		//the function countDown
		thread downThread(countDown);
	}
	catch (...) {
		cout << "error";
	}
	return 0;
}
