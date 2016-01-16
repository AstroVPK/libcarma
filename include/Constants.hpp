#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

#include <complex>

using namespace std;

extern complex<double> complexZero;
extern complex<double> complexOne;
extern double pi;
extern double e;
extern double infiniteVal;

extern double integrationTime;
extern double readTime;
extern int numIntegrationsSC; 
extern int numIntegrationsLC;

extern double samplingIntervalSC;
extern double samplingIntervalLC;

extern double samplingFrequencySC;
extern double samplingFrequencyLC;

extern double NyquistFrequencySC;
extern double NyquistFrequencyLC;

extern double secPerSiderealDay;

extern double scCadence;
extern double lcCadence;

extern double log2OfE;

extern double log2Pi;
#endif