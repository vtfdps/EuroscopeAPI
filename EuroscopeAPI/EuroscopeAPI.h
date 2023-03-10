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

};