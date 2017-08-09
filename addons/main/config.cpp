#include <script_component.hpp>

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "emod_main" };
        author = EMOD_AUTHOR;
        authors[] = { EMOD_AUTHOR };
        authorUrl = "https://github.com/EMod-ArmA";
        VERSION_CONFIG;
        units[] = {};
        magazines[] = {};
        weapons[] = {};
    };
};
