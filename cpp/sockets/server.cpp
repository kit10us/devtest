#include <iostream>
#include <sys/socket.h>
#include <chrono>

int main(int argc, char ** argv)
{
	using namespace std;	
	using namespace std::chrono;
	
	cout << "Server start\n";

	auto start = high_resolution_clock::current();
	auto cuurent = start;
	while (current - start < seconds(60))
	{
	}

	cout << "Server end\n";	

	return 0;
}
