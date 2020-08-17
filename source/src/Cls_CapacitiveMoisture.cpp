#include "Cls_CapacitiveMoisture.h"
#include <driver/adc.h>
#include <esp_adc_cal.h>

Cls_CapacitiveMoisture::Cls_CapacitiveMoisture() {}
Cls_CapacitiveMoisture::~Cls_CapacitiveMoisture() {}
unsigned int Cls_CapacitiveMoisture::valuePct() {
  return m_valuePct;
}
unsigned int Cls_CapacitiveMoisture::valueRead() {
  return m_valueVRead;
}
unsigned int Cls_CapacitiveMoisture::valueMin() {
  return m_valueVMin;
}
unsigned int Cls_CapacitiveMoisture::valueMax() {
  return m_valueVMax;
}
void Cls_CapacitiveMoisture::callibrateTo(unsigned int calibrateMin , unsigned int calibrateMax) {
  m_calibrateMin = calibrateMin;
  m_calibrateMax = calibrateMax;
}

unsigned int Cls_CapacitiveMoisture::Cls_CapacitiveMoisture::read() {

  m_count++;
  m_valueVRead = analogRead(m_pin);
  if (m_valueVRead < m_valueVMin) {
    m_valueVMin = m_valueVRead;
  }
  else if (m_valueVRead > m_valueVMax) {
    m_valueVMax = m_valueVRead;
  }
  unsigned int valRead = m_valueVRead - m_calibrateMin;
  unsigned int valMax = m_calibrateMax - m_calibrateMin;
  int valPct = 100 - (valRead * 100 / valMax);
  // m_valuePct = 100 - map(m_valueVRead, m_calibrateMin, m_calibrateMax, 0, 100);
  if (valPct < 0) {
    valPct = 0;
  }
  if (valPct > 100) {
    valPct = 100;
  }
  m_valuePct = valPct;
  return m_valuePct;
}

void Cls_CapacitiveMoisture::setup(unsigned short Pin, unsigned int calibrateMin , unsigned int calibrateMax )   {
  m_calibrateMin = calibrateMin;
  m_calibrateMax = calibrateMax;
  m_pin = Pin;
  pinMode(m_pin, INPUT);
}

void     Cls_CapacitiveMoisture::resetCounters() {
  m_count = 0;
  m_valueVMax = 9999999 ;
  m_valueVMax = 0 ;

}
unsigned int Cls_CapacitiveMoisture::calibrateMin() {
  return m_calibrateMin;
}

unsigned int Cls_CapacitiveMoisture::calibrateMax() {
  return m_calibrateMax;
}


#ifdef CAPACITIVE_MOISURE_DEBUG
void Cls_CapacitiveMoisture::debugCalibration(unsigned int iRepeats, unsigned int LapseDelayMillis) {

  Serial.println("................");
  Serial.println("CALLIBRATION STEEPS.");
  Serial.println("1 Totally dry sensor,");
  Serial.println("2 touch the sensor with a slightly damp cloth ");
  Serial.println("3 Put the sensor in water.");
  Serial.println("4 at the end of the test observe the minimum and maximum values, ");
  Serial.println("5 Modify the program variables");
  Serial.println("  g_SNSCALLIBRATIONMAX; ");
  Serial.println("  g_SnsCallibrationMin; ");
  Serial.println("NOTE:");
  Serial.println("Is more reliable if you lower the variable g_SnsCallibrationMin a bit and increase the g_SNSCALLIBRATIONMAX a little");
  Serial.println("................");
  delay(10000);
  resetCounters();
  for (unsigned int i = 0; i < iRepeats; i++)
  {
    read();
    debugSerial();
    delay(LapseDelayMillis);
  }
}
void Cls_CapacitiveMoisture::debugSerial() {

  Serial.print("Count= ");
  Serial.print(m_count);

  Serial.print(" Min= ");
  Serial.print(m_valueVMin);

  Serial.print(" Read= ");
  Serial.print(m_valueVRead);


  Serial.print(" Max= ");
  Serial.print(m_valueVMax);

  Serial.print(" valuePct= ");
  Serial.print( m_valuePct);
  Serial.println("%");




}



#endif
