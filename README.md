# ESP32 wheather datalogger
You can access to data by Phone, computer o tablet, the device give you a web enviroment for easy access to data, you can show data, graphics, config for connect to your wifi, or work as alone network when the device is  in wild field
![alt text](https://github.com/vniclos/Testudines-dataloger/blob/master/dataloguer_documentacion/IMG_0281.JPG "dataloger access" )
?raw=true

### You can get 
 User can access to dataloger by  webserver inside of device 
- Temperature of air
- Temperature soil
- Humidity air
- Humidity soil
- Humidity subsoil
-Preasure atmospheric
- GPS latitud
- GPS longitud
- GPS date time (Is not rtc time)
- GPS Altitud
- Datalog file by day
- Datalog file by Mounth
- Datalog file by Year
- vectorial interactive graph day
- vectoria interative graph bya month
- vectorial interactive graph by year
##
## Hardware
![alt text](https://raw.githubusercontent.com/vniclos/Testudines-dataloger/master/dataloguer_documentacion/61101117_2476235922409352_275601527328997376_o.jpg "dataloger hardware" )
- 1 ESP32 DEVKIT V1
- 1 NEO GPS 6M  (GPS)
- DHT22 (Air temperature and humidity sensor)
_ Light sensor
- Soil Humidity sensor
- Soil temperature sensor
- Sd card
- Lipo battery
- Lipo charger (by Solar pannel)
- Solar pannel
- 1 Power suply 5v 2a

## Software
- Visual Coede
- Platformio
- Libraries
- HardwareSerial.h ( better results than "sofwareserial.h"


```
Id_Name;Id_Location;Id LocationGps;Date;Time;TempAir_min;TempAir_avg;TempAir_Max;TempSoil_Min;TempSoil_Avg;TempSoil_Max;TempSubsoil_Min;TempSubsoil_Avg;TempSubsoil_Max;HumidityAir_Min;HumidityAir_Avg;HumidityAir_Max;HumiditySoil_Min;HumiditySoil_Avg;HumiditySoil_Max;PreasureAirHpa_Min;PreasureAirHpa_Avg;PreasureAirHpa_Max;Lux_MinLux_Avg; Lux_Max;AltitudeByHpa;GpsAltitud;GpsLatiLong;_GpsDateTime;GpsSatellites
No Name;No Location;0.0,0.0;2020/08/17;10:15;24.5;24.6;24.7;23.1;23.2;23.3;24.3;24.3;24.4;36;37;38;0;0;0;949;949;949;35;35;35;;;;
Test location;Madrid, Spain;40.418517, -3.747857;2020/08/17;10:30;25.3;25.4;25.5;23.6;23.7;23.9;24.5;27.0;85.0;33;33;34;0;0;0;949;949;949;0;32;45;0;;;0
Test location;Madrid, Spain;40.418517, -3.747857;2020/08/17;13:00;26.2;26.4;26.8;22.9;23.2;25.0;24.9;27.8;85.0;26;28;29;0;0;0;949;949;949;0;8746;19872;0;;2020/08/17 10:51:15:0;3

...
```

Or in web site example version you can get 
![alt text](https://github.com/vniclos/GPS-ESP32-sample/blob/master/img/web.jpg?raw=true "ESP32 GPS NEO 6M V2 web" )

There are two samples.
- First only **serial output**,  and you dont need to do changes,
- Second has **serial and web output** and you need edit _global.h for configure your wifi access point and ip preferences

``` c++
#ifndef _GLOBAL_H
#define _GLOBAL_H

const char* g_wifi_siid = "HERE YOU WIFI ACCESPOINT NAME";
const char* g_wifi_pwd  = "HERE YOUR WIFI PASSWORD ";
const char* g_wifi_host  = "my-gps";

IPAddress g_wifi_ip(192, 168, 1, 200);
IPAddress g_wifi_gateway(192, 168, 1, 1);
IPAddress g_wifi_subnet(255, 255, 255, 0);
IPAddress g_wifi_primaryDNS(8, 8, 8, 8); //optional
IPAddress g_wifi_secondaryDNS(8, 8, 4, 4); //optional
```

Contac with me on facebook 
https://www.facebook.com/vicente.niclos
