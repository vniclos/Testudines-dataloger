# Wheather testudines wildlife datalogger
by Vicente Niclós
The objetive are study climate values in wildlife, just in his habitat or in your garden, the device can work in your home or laboratory powerd by plug and join to your wifi network, or work stand alone powered by solar panel, in this case the device automatic start as wifi access point. 

It will be better if i add this

- Connectivity to G4 mobile network 
- Send data by automatic by email each day
- Send data to web service
- Send data to MQTT servrer
- ...

![alt text](https://raw.githubusercontent.com/vniclos/Testudines-dataloger/8bc2f788723243d80b19a31c17c0ea811379fe02/dataloguer_documentacion/introducction%20datalogger%20idea.svg "dataloger tortoise wildlife" )

### User interface
You dont need install nothing to your phone, laptop or tablet, the dataloger has a small web for  acces to see or dowload historical data, show plot historical data, dowload, config....


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
- RTC Real time clock (Used becouse you can work in wild life without internet)
- Lipo battery
- Lipo charger (by Solar pannel)
- Solar pannel
- 1 Power suply 5v 2a
- small bater for clock rtc

## Software develop tools used
- Visual Coede
- Platformio
- Libraries
-- esp.dht


```
##Configuration:
You can config by web interace, 

If you want change default values you need change this parameters on defines.h file
``` c++
// Default values for first start and
// reset factory
#define CFG_FILENAME      "/config.txt"
// WHEN WORK AS STAND ALONE DEVICE TAKE THIS 
#define CFG_WIFIHOST      "dataloguer"     // DEFAULT  you can access by http://dataloger.local
#define CFG_WIFIAPIP      "192.168.1.1"    // DEFAULT t ip for stand alone
#define CFG_WIFIAPMASK    "255.255.255.0"  // DEFAULT  mask for stand alone
#define CFG_IDNAME   "No Name"
#define CFG_IDLOCATION  "No Location"
#define CFG_IDLOCATIONGPS           "0.0,0.0"
#define CFG_WIFIMODE      "ws"            // DEFAULT  ap=accespoint  ws=workstation
#define CFG_WIFIAPSIID    "dataloguer"    // DEFAULT  Access point name
#define CFG_WIFIAPPWD     "123456789"     // DEFAULT Access point passord

// WHEN WORK AS CONNECTED TO YOUR WIFI
// #define CFG_WIFIAPSIIDEND read of chip
#define CFG_WIFIWSSIID    "mY WIFI NAME"  // CHANGE Workstation net default wifi network
#define CFG_WIFIWSPWD     "MY WIFI PASSWORD"  // CHANGE IT
#define CFG_WIFIWSIPDHCP  "0"
#define CFG_WIFIWSIP      "192.168.1.10"
#define CFG_WIFIWSIPMSK   "255.255.255.0"
#define CFGWIFIWSIPGAT   "192.168.1.1"
#define CFG_WIFIWSDNS1    "8.8.8.8"
#define CFG_WIFIWSDNS2    "8.8.4.4"

```

Contac with me on facebook 
https://www.facebook.com/vicente.niclos
