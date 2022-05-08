#ifndef IO
#define IO
#include "../../settings.h"
#include "../other/debugger.h"
#include "../other/Timer.h"

#include <Arduino.h>

void setupPort(String &serial);
void setupInputs(String &serial);
void setupOutputs(String &serial);
void handlePins(String &serial);
void handleInputs(String &serial);
void handleOutputs(String &serial);

void setVar_onIO(String variableName, int value);

uint8_t commandRadio();
uint8_t commandBoard();
uint8_t commandSensorInfrared();

void Blink_Led(const __FlashStringHelper *type, const uint8_t velocity);

#endif