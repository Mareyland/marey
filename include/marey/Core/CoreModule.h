#ifndef MAREY_CORE_COREMODULE_H
#define MAREY_CORE_COREMODULE_H
#include "ModuleBase.h"

namespace marey::Core {
class CoreModule final : public ModuleBase<CoreModule> {
public:
    CoreModule() = default;
    ~CoreModule() = default;

    CoreModule &operator=(CoreModule &&) = default;

    CoreModule(CoreModule &&) = delete;
    CoreModule &operator=(const CoreModule &) = delete;
    CoreModule(const CoreModule &) = delete;

    void startup();
    void update();
};
}
#endif // MAREY_CORE_COREMODULE_H
