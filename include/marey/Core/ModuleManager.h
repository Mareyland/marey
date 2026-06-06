#ifndef MAREY_CORE_MODULEMANAGER_H
#define MAREY_CORE_MODULEMANAGER_H
#include <utility>

namespace marey::Core {
class ModuleManager final {
public:
    ModuleManager() = default;
    ~ModuleManager() = default;

    ModuleManager(const ModuleManager &) = delete;
    ModuleManager(ModuleManager &&) = delete;
    ModuleManager& operator=(const ModuleManager &) = delete;
    ModuleManager& operator=(ModuleManager &&) = delete;

    template <typename... Modules>
    void run(Modules &&... modules) {
        this->startupModule(modules...);

        while (true) {
            this->updateModule(modules...);
        }
    }

private:
    template <typename Module>
    void startupModule(Module &module) {
        module.startup();
    }

    template <typename Module>
    void updateModule(Module &module) {
        module.update();
    }
};
}
#endif // MAREY_CORE_MODULEMANAGER_H
