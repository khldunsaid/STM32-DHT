#ifndef DHT_H_INCLUDED
#define DHT_H_INCLUDED


//------ Headers ------//
#include "DHT_Settings.h"
#include "stm32f4xx_hal.h"


//----------------------//

//----- Auxiliary data -------------------//
#define DHT11						 1
#define DHT22						 2
#define DHT_READINTERVAL			1500

#define DHT_DELAY_SETUP			2000

enum DHT_Status_t
{
	DHT_Ok,
	DHT_Error_Humidity,
	DHT_Error_Temperature,
	DHT_Error_Checksum,
	DHT_Error_Timeout
};
//-----------------------------------------//

//----- Prototypes---------------------------//
void DHT_Setup();
enum DHT_Status_t DHT_GetStatus();
enum DHT_Status_t DHT_ReadRaw(uint8_t Data[4]);
enum DHT_Status_t DHT_GetTemperature(double *Temperature);
enum DHT_Status_t DHT_GetHumidity(double *Humidity);
enum DHT_Status_t DHT_Read(double *Temperature, double *Humidity);
double DHT_CelsiusToFahrenheit(double Temperature);
double DHT_CelsiusToKelvin(double Temperature);
//-------------------------------------------//
#endif
