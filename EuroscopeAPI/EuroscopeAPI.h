#pragma once
#include "external/include/EuroScopePlugIn.h"
#include <string>


using namespace std;
using namespace EuroScopePlugIn;

#define MY_PLUGIN_NAME		"Euroscope API"
#define MY_PLUGIN_VERSION   "0.0.1"
#define MY_PLUGIN_DEVELOPER "Leon Kleinschmidt"
#define MY_PLUGIN_COPYRIGHT "COPYRIGHT"


class EuroscopeAPI : public EuroScopePlugIn::CPlugIn
{
private:


public:
	EuroscopeAPI();
	virtual ~EuroscopeAPI();

	virtual void OnControllerPositionUpdate(CController Controller);
	virtual void OnControllerDisconnect(CController Controller);
	virtual void OnRadarTargetPositionUpdate(CRadarTarget RadarTarget);
	virtual void OnFlightPlanDisconnect(CFlightPlan FlightPlan);
	virtual void OnFlightPlanFlightPlanDataUpdate(CFlightPlan FlightPlan);
	virtual void OnPlaneInformationUpdate(const char* sCallsign, const char* sLivery, const char* sPlaneType);
	virtual void OnFlightPlanControllerAssignedDataUpdate(CFlightPlan FlightPlan, int DataType);
	virtual void OnFlightPlanFlightStripPushed(CFlightPlan FlightPlan, const char* sSenderController, const char* sTargetController);
	virtual CRadarScreen* OnRadarScreenCreated(const char* sDisplayName, bool NeedRadarContent, bool GeoReferenced, bool CanBeSaved, bool CanBeCreated);
	virtual bool OnCompileCommand(const char* sCommandLine);
	virtual void OnCompileFrequencyChat(const char* sSenderCallsign, double Frequency, const char* sChatMessage);
	virtual void OnCompilePrivateChat(const char* sSenderCallsign, const char* sReceiverCallsign, const char* sChatMessage);
	virtual void OnGetTagItem(CFlightPlan FlightPlan, CRadarTarget RadarTarget, int ItemCode, int TagData, char sItemString[16],int* pColorCode, COLORREF* pRGB, double* pFontSize);
	virtual void OnRefreshFpListContent(CFlightPlanList AcList);
	virtual void OnNewMetarReceived(const char* sStation, const char* sFullMetar);
	virtual void OnFunctionCall(int FunctionId, const char* sItemString, POINT Pt, RECT Area);
	virtual void OnAirportRunwayActivityChanged(void);
	virtual void OnTimer(int Counter);
};