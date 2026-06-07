#include <marey/LowLevel/Booting.h>
#include <marey/Io/IoManager.h>
#include <marey/Core/Kernel.h>

using marey::Core::Kernel;

void kernelMain() {
    Kernel{}.run();
}
