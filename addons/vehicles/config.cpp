#include <script_component.hpp>

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "emod_fov_main" };
        author = EMOD_AUTHOR;
        authors[] = { EMOD_AUTHOR };
        VERSION_CONFIG;
        units[] = {};
        magazines[] = {};
        weapons[] = {};
    };
};

class ViewPilot;
class ViewCargo;
class ViewOptics;
#include <CfgVehicles.hpp>
