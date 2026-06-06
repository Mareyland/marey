#ifndef MAREY_CORE_MODULE_H
#define MAREY_CORE_MODULE_H
namespace marey::Core {
template <typename Derived>
class ModuleBase {
public:
    ~ModuleBase() = default;

    ModuleBase &operator=(ModuleBase &&) = default;

    ModuleBase(const ModuleBase &) = delete;
    ModuleBase(ModuleBase &&) = delete;
    ModuleBase &operator=(const ModuleBase &) = delete;

    void startup() {
        getDerived().startup();
    }

    void update() {
        getDerived().update();
    }

protected:
    ModuleBase() = default;

    [[nodiscard]] Derived &getDerived() {
        return static_cast<Derived &>(*this);
    }

    [[nodiscard]] const Derived &getDerived() const {
        return static_cast<Derived &>(*this);
    }
};
}
#endif // MAREY_CORE_MODULE_H
