#include <cstdint>
#include <string>
#include <array>

class Chip8{
public:
    std::array<uint8_t,2048> gfx;
    std::array<uint8_t,16> V;
    std::array<uint8_t,16> key;
    std::array<uint16_t,16> stack;
    uint16_t sp;
    uint16_t opcode;
    uint16_t pc;
    uint8_t delay_timer;
    uint8_t sound_timer;
    uint16_t I;
    bool load(char * path);
    void cycle();
    Chip8();
private:
    int instruction_count=0; //slows timers
    void drawSprite();
    std::array<uint8_t,4096> memory;
};


