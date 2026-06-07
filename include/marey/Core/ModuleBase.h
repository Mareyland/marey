#ifndef MAREY_CORE_MODULE_H
#define MAREY_CORE_MODULE_H
#include "marey/Core/CrtpBase.h"

namespace marey::Core {
template <typename Derived>
class ModuleBase : public CrtpBase {
public:
    ~ModuleBase() = default;

    ModuleBase &operator=(ModuleBase &&) = default;

    ModuleBase(const ModuleBase &) = delete;
    ModuleBase(ModuleBase &&) = delete;
    ModuleBase &operator=(const ModuleBase &) = delete;

    void startup() {
        getDerived<Derived>().startup();
    }

    void update() {
        getDerived<Derived>().update();
    }

protected:
    ModuleBase() = default;
};
}
#endif // MAREY_CORE_MODULE_H
