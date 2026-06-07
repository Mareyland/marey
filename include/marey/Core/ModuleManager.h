#ifndef MAREY_CORE_MODULEMANAGER_H
#define MAREY_CORE_MODULEMANAGER_H
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
    static void run(Modules &&... modules) {
        ModuleManager::startupModule(modules...);

        while (true) {
            ModuleManager::updateModule(modules...);
        }
    }

private:
    template <typename  Module>
    static void startupModule(Module &module) {
        module.startup();
    }

    template <typename Module>
    static void updateModule(Module &module) {
        module.update();
    }
};
}
#endif // MAREY_CORE_MODULEMANAGER_H
