#include "Mast.h"

Mast::Mast() { // Mast initialization code
    extend = new rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
    tiltA = new rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
    tiltB = new rev::CANSparkMax(2, rev::CANSparkMaxLowLevel::MotorType::kBrushless);
}

void Mast::INIT() { // Mast initialize state code

}
void Mast::ZERO() { // Mast zero state code

}
void Mast::STOP() { // Mast stop state code

}
void Mast::tFWD() { // Mast tilt forward state code

}
void Mast::tBCK() { // Mast tilt backward state code

}
void Mast::XTND() { // Mast extend state code

}
void Mast::RTRC() { // Mast retract state code

}