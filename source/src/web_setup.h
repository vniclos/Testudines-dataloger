//------------------------------------------
//web_setup.h
//configure web url with events handlers
//and start web service
//------------------------------------------
#ifndef WEBSETUP_H
#define WEBSETUP_H
void fnc_Web_Setup()
{
  Serial.println("fnc_Web_Setup in");


  g_server.on("/", handleROOT);
  g_server.on("/js.js", handleJS);
  g_server.on("/ ", handleChartsFileList);
  g_server.on("/jsapexchart.js",  handleJSApexC);
  g_server.on("/jsapexgetfile",handleJSApexGetfile);
g_server.on("/chartsFileList",handleFileChartsList);
  
  g_server.on("/css.css", handleCSS);
  //g_server.on("/fncDebug", handleDEBUG);
  g_server.on("/fncReadSensors", handleReadSensors);
  g_server.on("/fncOff", handleStop);
  g_server.on("/fncOn", handleStart);
  g_server.on("/download", handleDownloadList);

  g_server.on("/filedown", handleFiledown);
  g_server.on("/filedel", handleFileDelete);

  g_server.on("/filedelall", handleFileDelAll);
  g_server.on("/fncHelp", handleHelp);
  //g_server.on("/fncsoftware", handleSoftware);
  g_server.on("/config", handleCfg);
  g_server.on("/cfgsetlocgps", handlesetLocGPS);
  g_server.on("/cfggetall", handleCfgGetAll);
  g_server.on("/cfgsetdl", handleCfgSetDL);
  g_server.on("/cfgsetdt", handleCfgSetDT);
  g_server.on("/cfgsetwifi", handleCfgSetWifi);
  g_server.on("/reset", handleReset);
  g_server.on("/gpsread", handleGpsRead);

  g_server.onNotFound(handleNotFound);

 
  g_server.begin();
  Serial.println("fnc_Web_Setup out");
}
#endif
