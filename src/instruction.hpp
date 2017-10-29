#ifndef __INSTRUCTION_H
#define __INSTRUCTION_H

#include "memoryController.hpp"
#include "CPU.hpp"
#include "registerBank.hpp"
#include <string>


namespace gbcoloremu
{


class Instruction
{
public:
    Instruction();

    virtual bool execute(registerBank &registers, MemoryController &memory, memValue16_t param) = 0;

    virtual memValue8_t opcode() = 0;

    virtual string mnemonic() = 0;

    virtual uint8_t numParamBytes() = 0;

    virtual uint8_t numDelayCycles() = 0;
};


} /* namespace gbcoloremu */

#endif /* __INSTRUCTION_H */
