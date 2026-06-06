#ifndef MAREY_CORE_COREMODULE_H
#define MAREY_CORE_COREMODULE_H
#include "Module.h"

namespace marey::Core {
class CoreModule final : public ModuleBase<CoreModule> {
public:
    CoreModule() = default;
    ~CoreModule() = default;

    CoreModule(const CoreModule &) = delete;
    CoreModule(CoreModule &&) = delete;
    CoreModule &operator=(const CoreModule &) = delete;
    CoreModule &operator=(CoreModule &&) = delete;
};
}
#endif // MAREY_CORE_COREMODULE_H
