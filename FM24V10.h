#pragma once
#include <Arduino.h>
#include <Wire.h>

class FM24V10
{
public:
    bool Initialize(bool a1, bool a2, TwoWire &_wire = Wire);

private:
    uint8_t address = 0xA0;
    TwoWire *wire;

    void read(uint8_t _register, uint8_t length, uint8_t *values);
    uint8_t read(uint8_t _register);
    void write(uint8_t _register, const uint8_t &value);
    void write(uint8_t _register, const uint8_t &value, const uint8_t &mask);
};