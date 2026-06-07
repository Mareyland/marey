#include <marey/Core/Kernel.h>

#include <marey/Core/CoreModule.h>
#include <marey/Io/IoManager.h>

namespace marey::Core {
void Kernel::run() {
    moduleManager.run(CoreModule{});
}
}
