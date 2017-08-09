class CfgVehicles {
    class Man;
    class CAManBase: Man {
        extCameraPosition[] = MAN_EXTCAMERYPOSITION;    // {0.22,0.05,-2.2}

        class ViewPilot: ViewPilot {
            initFov = MAN_FOV;         // 0.95;
            minFov = MAN_FOV;          // 0.4;
            maxFov = MAN_FOV;          // 1.1;
        };
    };

    class Car;
    class Car_F: Car {
        extCameraPosition[] = CAR_EXTCAMERAPOSITION;

        class ViewPilot: ViewPilot {
            initFov = CAR_FOV;         // 0.75
            minFov = CAR_FOV;          // 0.25
            maxFov = CAR_FOV;          // 1.25
        };
        class ViewCargo: ViewCargo {
            initFov = CAR_FOV;         // 0.75;
            minFov = CAR_FOV;          // 0.25;
            maxFov = CAR_FOV;          // 1.25;
        };
        class ViewOptics: ViewOptics {
            initFov = CAR_FOV;         // 0.7;
            minFov = CAR_FOV;          // 0.42;
            maxFov = CAR_FOV;          // 0.85;
        };
    };
};
