/*
THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
http://dev-c.com
(C) Alexander Blade 2015
*/

#pragma once

//#include "../../ScriptHookV_SDK/inc/types.h"

#ifndef DIRECTINPUT_VERSION
#define DIRECTINPUT_VERSION 0x0800
#endif

class VehicleData;
struct Color;
class ScriptSettings;

//http://pastebin.com/Kj9t38KF
enum eRadioStations {
	LosSantosRockRadio,
	NonStopPopFM,
	RadioLosSantos,
	ChannelX,
	WestCoastTalkRadio,
	RebelRadio,
	SoulwaxFM,
	EastLosFM,
	WestCoastClassics,
	BlueArk,
	WorldideFM,
	FlyLoFM,
	TheLowdown,
	TheLab,
	RadioMirrorPark,
	Space1032,
	VinewoodBlvdRadio,
	SelfRadio,
	BlaineCountyRadio,
	RadioOff = 255
};

///////////////////////////////////////////////////////////////////////////////
//                           Helper functions/tools
///////////////////////////////////////////////////////////////////////////////

void showDebugInfo();
void crossScriptComms();


///////////////////////////////////////////////////////////////////////////////
//                           Mod functions: Mod control
///////////////////////////////////////////////////////////////////////////////

void reInit();
void reset();
void toggleManual();
void updateLastInputDevice();

///////////////////////////////////////////////////////////////////////////////
//                           Mod functions: Shifting
///////////////////////////////////////////////////////////////////////////////

void setShiftMode(int shiftMode);
void cycleShiftMode();
void shiftTo(int gear, bool autoClutch);
void functionHShiftTo(int i);
void functionHShiftKeyboard();
void functionHShiftWheel();
void functionSShift();
void functionAShift();

///////////////////////////////////////////////////////////////////////////////
//                   Mod functions: Gearbox features
///////////////////////////////////////////////////////////////////////////////

void functionClutchCatch();
void functionEngStall();
void functionEngDamage();
void functionEngBrake();

///////////////////////////////////////////////////////////////////////////////
//                       Mod functions: Gearbox control
///////////////////////////////////////////////////////////////////////////////

void fakeRev();
void handleRPM();
void functionTruckLimiting();

///////////////////////////////////////////////////////////////////////////////
//                   Mod functions: Reverse/Pedal handling
///////////////////////////////////////////////////////////////////////////////

void functionAutoReverse();
void functionRealReverse();
void handlePedalsDefault(float logiThrottleVal, float logiBrakeVal);
void handlePedalsRealReverse(float logiThrottleVal, float logiBrakeVal);

///////////////////////////////////////////////////////////////////////////////
//                       Mod functions: Buttons
///////////////////////////////////////////////////////////////////////////////

void handleVehicleButtons();

///////////////////////////////////////////////////////////////////////////////
//                    Wheel input and force feedback
///////////////////////////////////////////////////////////////////////////////

void playWheelEffects(ScriptSettings& settings,
					  VehicleData& vehData,
                      bool airborne, bool ignoreSpeed = false);
void doWheelSteering();
void doWheelSteeringBoat();
void doWheelSteeringPlane();

///////////////////////////////////////////////////////////////////////////////
//                             Misc features
///////////////////////////////////////////////////////////////////////////////

void functionAutoLookback();
void functionAutoGear1();

///////////////////////////////////////////////////////////////////////////////
//                              Script entry
///////////////////////////////////////////////////////////////////////////////
void ScriptMain();
