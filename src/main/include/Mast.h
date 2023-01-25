#include <iostream>

#include <rev/CANSparkMax.h>

enum States {
    INIT,
    ZERO,
    STOP,
    tFWD, // tilt forward
    tBCK, // tilt backward
    XTND, // extend
    RTRC // retract
};

class Mast {
    private:

    public:
    Mast();

    rev::CANSparkMax *extend; // 1 neo extend/unextend (revolve/revolve other direction)
    rev::CANSparkMax *tiltA; // 2 neos tilt mast (same thing but make them diferent)
    rev::CANSparkMax *tiltB; // see above

    void INIT();
    void ZERO();
    void STOP();
    void tFWD();
    void tBCK();
    void XTND();
    void RTRC(); 
};