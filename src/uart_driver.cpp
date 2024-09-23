/* Generic UART driver on LINUX
 * This program is using Serial port provided by Jetson
 * If using FTDI cable, please consider using PySerial Library */

//Project header
#include "uart_driver.h"

//TODO: investigate the wierd compiler error using my computer suspect g++ version?


// Driver testing code
#ifdef TEST
int main() {
	string device_id = "ttyS0";
	printf("Hello World");
	
	UartDevice demo(device_id);
	
	return 0;
}
#endif
