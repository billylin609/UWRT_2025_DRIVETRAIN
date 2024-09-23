/* Generic UART driver on LINUX
 * This program is using Serial port provided by Jetson
 * If using FTDI cable, please consider using PySerial Library */

//Lib Used
//Note: import all the library used in each file
#include <string>

//Project header
#include "uart_driver.h"

//TTY Device permission issue: https://stackoverflow.com/a/72381727
UartDevice::UartDevice(const char* device_id) {
	int serial_port = open(device_id, O_RDWR);

	// Check for errors
	if (serial_port < 0) {
		printf("Error %i from open: %s\n", errno, std::strerror(errno));
	}
}

// Driver testing code
#ifdef TEST
int main() {
	const char* device_id = "/dev/ttyS0";
	
	UartDevice demo(device_id);
	
	return 0;
}
#endif
