#ifndef MAREY_CORE_CRTPBASE_H
#define MAREY_CORE_CRTPBASE_H
namespace marey::Core {
class CrtpBase {
public:
    ~CrtpBase() = default;

    CrtpBase(const CrtpBase &) = default;
    CrtpBase& operator=(const CrtpBase &) = default;
    CrtpBase(CrtpBase &&) = default;
    CrtpBase& operator=(CrtpBase &&) = default;

protected:
    CrtpBase() = default;

    template<typename Derived>
    [[nodiscard]] Derived &getDerived() {
        return static_cast<Derived &>(*this);
    }

    template<typename Derived>
    [[nodiscard]] const Derived &getDerived() const {
        return static_cast<Derived &>(*this);
    }
};
}
#endif // MAREY_CORE_CRTPBASE_H
