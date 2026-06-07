#include <marey/Core/Kernel.h>

#include <marey/Core/CoreModule.h>
#include <marey/Io/IoManager.h>

using marey::Io::IoManager;

namespace marey::Core {
void Kernel::run() {
    greedBack();

    moduleManager.run(CoreModule{});
}

void Kernel::greedBack() {
    IoManager::print("Hello Hollow :3");
}
}
