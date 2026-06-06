#include <marey/Core/Kernel.h>

namespace marey::Core {
void Kernel::run() {
    moduleManager.run(CoreModule{});
}
}
