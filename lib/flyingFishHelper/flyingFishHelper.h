// flyingFishHelper.h

// our MH-Sensor-Series Flying Fish helper class

// MOISTURE SENSOR:
// digitalread returns 0 or 1: 0 is wet, 1 is dry
// analogread returns 0 to 1024: 1000+ is dry, the nearer to 0 the wetter
// around 200 is immersed in water

// RAIN SENSOR:
// digitalread 
// analogread 

class flyingFish {
private:
    unsigned int _pinDigital;
    unsigned int _pinAnalog;

public:
    flyingFish(const unsigned int pinDigital, const unsigned int pinAnalog) {
        _pinDigital = pinDigital;
        _pinAnalog = pinAnalog;
        pinMode(_pinDigital, INPUT);
        pinMode(_pinAnalog, INPUT);
        }

    int digitalread() {
        return digitalRead(_pinDigital);
    }
    int analogread() {
        return analogRead(_pinAnalog);
    }
};