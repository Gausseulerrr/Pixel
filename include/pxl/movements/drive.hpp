#pragma once
// #include "pxl/drivebase/api.hpp"
#include "pxl/pid.hpp"
namespace pxl {
class Drive_ {
    public: 
    void Drive(float target, float timeout);
    private:
    struct Params{
        float minSpeed = 0;
        float maxSpeed = 127;
        float slew = NAN;
    }; };
    
}