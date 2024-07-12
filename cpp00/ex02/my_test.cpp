#include <iostream>
#include <ctime>

static void _displayTimestamp( void ) {
	time_t	now = time(0);
	struct tm tstruct;
	tstruct = *localtime(&now);
	
	char	buffer[20];
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &tstruct);
	std::cout << "[" << buffer << "]";
}

int	main() {
	_displayTimestamp();
	return 0;
}