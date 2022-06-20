//
// Created by Matt Angelucci on 6/16/22.
//

#ifndef UNTITLED2_BUS_H
#define UNTITLED2_BUS_H

#include <cstdint>
#include <array>
#include "olc6502.h"

class Bus {
public:
    Bus();
    ~Bus();

public: // Devices on bus
    olc6502 cpu;

    // Fake RAM for this part of the series
    std::array<uint8_t, 64 * 1024> ram;

public: // Bus Read & Write
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool bReadOnly = false);
};


#endif //UNTITLED2_BUS_H
