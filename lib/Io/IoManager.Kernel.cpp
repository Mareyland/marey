#include <marey/Io/IoManager.h>

#include <marey/Settings/Defintions.h>
#include <marey/LowLevel/Io.h>

#if not MAREY_SETTINGS_DEFINTIONS_TEST_RUNNER_BOOL
namespace marey::Io {
void IoManager::print(std::string_view message) {
    marey::LowLevel::kernelPrint(message.data());
}
}
#endif
