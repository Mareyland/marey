#include <marey/Core/CoreModule.h>

#include <marey/Io/IoManager.h>

using marey::Io::IoManager;

namespace marey::Core {
void CoreModule::startup() {
    IoManager::print("CoreModule started up");
}

void CoreModule::update() {
    IoManager::print("CoreModule updated");
}
}
