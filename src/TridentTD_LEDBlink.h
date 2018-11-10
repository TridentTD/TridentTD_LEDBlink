#ifndef _TRIDENTTD_LEDBLINK_H__
#define _TRIDENTTD_LEDBLINK_H__

#include <Arduino.h>

#ifndef TURN_ON
#define TURN_ON   HIGH
#endif

class TridentTD_LEDBlink {
  public:
    TridentTD_LEDBlink(uint8_t pin) :_pin(pin)  { pinMode( _pin, OUTPUT);}
    void blink(uint32_t ms = 1000)              {if( millis() - _timer > ms ){ static uint8_t _state; digitalWrite(_pin, _state = !_state); _timer = millis(); }}
    void off()                                  { digitalWrite( _pin, !TURN_ON); }
    void on()                                   { digitalWrite( _pin,  TURN_ON); }
  private:
    uint8_t _pin;
    uint32_t _timer;
};


#endif
