#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
	using namespace std;

	cout << "Client start\n";

	int socket_desc {};
	socket_desc = socket(AF_INET, SOCK_STREAM, 0);
	if (socket_desc == -1)
	{
		cerr << "Could not create socket.";
		return -1;
	}

	sockaddr_in server_address {};
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(8080);
	server_address.sin_addr.s_addr = INADDR_ANY;

	if(connect(socket_desc, (sockaddr*)&server_address, sizeof(server_address)))
	{
		cerr << "Unable to connect to server.";
		return -2;
	}





	close(socket_desc);

	cout << "Client end\n";	

	return 0;
}
