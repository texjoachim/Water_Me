// rgbLED.h

#include <SoftPWM.h>

// our rgb LED class
class rgbLED {
private:
	unsigned int _pinred;
	unsigned int _pingreen;
	unsigned int _pinblue;

public:
	rgbLED(const unsigned int pinred, const unsigned int pingreen, const unsigned int pinblue) {
		_pinred = pinred;
		_pingreen = pingreen;
		_pinblue = pinblue;
		pinMode(_pinred, OUTPUT);
		pinMode(_pingreen, OUTPUT);
		pinMode(_pinblue, OUTPUT);
	}

	void on(char colour, unsigned int intensity) {
		switch (colour) {
			case 'r':
				SoftPWMSetPercent(_pinred, intensity);
				break;
			case 'g':
				SoftPWMSetPercent(_pingreen, intensity);
				break;
			case 'b':
				SoftPWMSetPercent(_pinblue, intensity);
				break;
		}
	}

	void off(char colour) {
		switch (colour) {
			case 'r':
				SoftPWMSetPercent(_pinred, 0);
				break;
			case 'g':
				SoftPWMSetPercent(_pingreen, 0);
				break;
			case 'b':
				SoftPWMSetPercent(_pinblue, 0);
				break;
		}
	}

	void singleon(char colour) {
		switch (colour) {
			case 'r':
				digitalWrite(_pinred, HIGH);
				break;
			case 'g':
				digitalWrite(_pingreen, HIGH);
				break;
			case 'b':
				digitalWrite(_pinblue, HIGH);
				break;
		}
	}

	void singleoff(char colour) {
		switch (colour) {
			case 'r':
				digitalWrite(_pinred, LOW);
				break;
			case 'g':
				digitalWrite(_pingreen, LOW);
				break;
			case 'b':
				digitalWrite(_pinblue, LOW);
				break;
		}
	}

	void out() {
		digitalWrite(_pinred, LOW);
		digitalWrite(_pingreen, LOW);
		digitalWrite(_pinblue, LOW);
	}
};