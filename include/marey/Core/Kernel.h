#ifndef MAREY_CORE_KERNEL_H
#define MAREY_CORE_KERNEL_H
namespace marey::Core {
class Kernel final {
public:
    Kernel() = default;
    ~Kernel() = default;

    Kernel(const Kernel &) = delete;
    Kernel& operator=(const Kernel &) = delete;
    Kernel(Kernel &&) = delete;
    Kernel& operator=(Kernel &&) = delete;

    void run();
};
}
#endif // MAREY_CORE_KERNEL_H
