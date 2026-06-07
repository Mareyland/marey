#ifndef MAREY_IO_IOMANAGER_H
#define MAREY_IO_IOMANAGER_H
#include <marey/Core/CrtpBase.h>

namespace marey::Io {
class IoManager final {
public:
    IoManager() = default;
    ~IoManager() = default;

    IoManager(const IoManager &) = delete;
    IoManager(IoManager &&) = delete;
    IoManager &operator=(const IoManager &) = delete;
    IoManager &operator=(IoManager &&) = delete;

    static void print(const char *message);
};
}
#endif // MAREY_IO_IOMANAGER_H
