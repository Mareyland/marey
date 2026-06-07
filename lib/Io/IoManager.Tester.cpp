#include <marey/Io/IoManager.h>

#include <marey/Settings/Defintions.h>

#include <iostream>

#if MAREY_SETTINGS_DEFINTIONS_TEST_RUNNER_BOOL
namespace marey::Io {
void IoManager::print(std::string_view message) {
    std::cout << message << '\n';
}
}
#endif
