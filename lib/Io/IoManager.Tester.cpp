#include <marey/Io/IoManager.h>

#include <marey/Settings/Defintions.h>

#if MAREY_SETTINGS_DEFINTIONS_TEST_RUNNER_BOOL
#include <iostream>

namespace marey::Io {
void IoManager::print(const char *message) {
    std::cout << message << '\n';
}
}
#endif
