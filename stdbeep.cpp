#include "stdbeep.h"

#ifdef _WIN32
#include <Windows.h>
#elif __linux__
#include <sys/ioctl.h>
#include <linux/kd.h>
#include <unistd.h>
#endif

namespace std {
	void Sleep(int ms) {
	  #ifdef _WIN32
	  Sleep(ms);
	  #elif __linux__
	  usleep(ms*1000);
	  #endif
	}
	
	void Beep(int freq, int ms) {
	  #ifdef _WIN32
	  Beep(freq, ms);
	  #elif __linux__
	  ioctl(1, KIOCSOUND, 1193180/freq);
	  Sleep(ms);
	  ioctl(1, KIOCSOUND, 0);
	  #endif
	}
}
