#ifndef MAREY_CORE_MODULE_H
#define MAREY_CORE_MODULE_H
namespace marey::Core {
template <typename Derived>
class Module {
public:
    ~Module() = default;

    Module(const Module &) = delete;
    Module(Module &&) = delete;
    Module &operator=(const Module &) = delete;
    Module &operator=(Module &&) = delete;

    void startup() {
        derived().startup();
    }

    void tick() {
        derived().tick();
    }

protected:
    Module() = default;

    [[nodiscard]] Derived &derived() {
        return static_cast<Derived &>(*this);
    }
};
}
#endif // MAREY_CORE_MODULE_H
