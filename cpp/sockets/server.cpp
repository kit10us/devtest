#include <iostream>
#include <sys/socket.h>
#include <chrono>

int main(int argc, char ** argv)
{
	using namespace std;	
	using namespace std::chrono;
	
	auto start = high_resolution_clock::current();

	cout << "Server start\n";
	cout << "Server end\n";	

	return 0;
}
