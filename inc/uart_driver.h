// C library headers
#include <stdio.h>
#include <string>
#include <cstring> //std::strerror

// Linux headers
#include <fcntl.h> // Contains file controls like O_RDWR
#include <errno.h> // Error integer and strerror() function
#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()

//Project headers
#include "generic_datatype.h"

//Exported Macro
#define TEST

class UartDevice {
	public:
		UartDevice(const char* device_id);
};
