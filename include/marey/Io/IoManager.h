#ifndef MAREY_IO_IOMANAGER_H
#define MAREY_IO_IOMANAGER_H
#include <marey/Core/CrtpBase.h>
#include <string_view>

namespace marey::Io {
class IoManager final {
public:
    IoManager() = default;
    ~IoManager() = default;

    IoManager(const IoManager &) = delete;
    IoManager(IoManager &&) = delete;
    IoManager &operator=(const IoManager &) = delete;
    IoManager &operator=(IoManager &&) = delete;

    static void print(std::string_view message);
};
}
#endif // MAREY_IO_IOMANAGER_H
