#include "Engine.hpp"

int main(void)
{
    Engine engine;
    engine.init();
    engine.run();
    engine.cleanup();

    return 0;
}