// MCP23017.h

#ifndef _MCP23017_h
#define _MCP23017_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#endif

class I2CDevice
{
public:
	I2CDevice(int address);
	void writeRegister(byte reg, byte val);
	byte readRegister(byte reg);
private:
	int _address;
};
