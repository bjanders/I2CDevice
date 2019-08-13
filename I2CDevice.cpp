// 
// 
// 

#include "I2CDevice.h"
#include <Wire.h>

I2CDevice::I2CDevice(int address) {
	_address = address;
}

void I2CDevice::writeRegister(byte reg, byte val) {
	Wire.beginTransmission(_address);
	Wire.write(reg);
	Wire.write(val);
	Wire.endTransmission();
}

byte I2CDevice::readRegister(byte reg) {
	Wire.beginTransmission(_address);
	Wire.write(reg);
	Wire.endTransmission();
	Wire.requestFrom(_address, 1);
	return Wire.read();
}
