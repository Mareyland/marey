#ifndef MAREY_CORE_MODULE_H
#define MAREY_CORE_MODULE_H
namespace marey::Core {
template <typename Derived>
class ModuleBase {
public:
    ~ModuleBase() = default;

    ModuleBase(const ModuleBase &) = delete;
    ModuleBase(ModuleBase &&) = delete;
    ModuleBase &operator=(const ModuleBase &) = delete;
    ModuleBase &operator=(ModuleBase &&) = delete;

    void startup() {
        derived().startup();
    }

    void tick() {
        derived().tick();
    }

protected:
    ModuleBase() = default;

    [[nodiscard]] Derived &derived() {
        return static_cast<Derived &>(*this);
    }
};
}
#endif // MAREY_CORE_MODULE_H
