/**
  ******************************************************************************
/*
************************************************************************
* 作者:  IntoRobot Team    
* 版本:  V1.0.0
* 日期:  07-04-16
************************************************************************
功能描述：
Neutron自带传感器原始数据显示

  ******************************************************************************
  */
  
#define LED_PIN    D7

int16_t accelData[3], gyroData[3], magData[3]; //加速度、陀螺仪、磁力计值
double presureData, altitudeData; //大气压强、海拔高度值
uint16_t lightData; //光照强度值
char micData; //声音值

void setup()
{
    pinMode(LED_PIN,OUTPUT);
    BMI160.begin();
    BMI160.setRange(BMI160_ACCEL_RANGE_4G, BMI160_GYRO_RANGE_2000_DEG_SEC);
    //Neutron.begin();
}

void loop()
{
//    //加速度、陀螺仪、磁力计
//    Neutron.getAccelGyroMagData(accelData, gyroData, magData);
//    
      BMI160.getAccelData(accelData);
    SerialUSB.printf("\naccel: %d %d %d\r\n", accelData[0], accelData[1], accelData[2]);
//    SerialUSB.printf("gyro:   %d %d %d\r\n", gyroData[0],  gyroData[1],  gyroData[2]);
//    SerialUSB.printf("mag:    %d %d %d\r\n", magData[0],   magData[1],   magData[2]);
//
//    // "{x:90,y:90,z:90}"
//
//    //气压、海拔
//    Neutron.getPressureAltitudeData(presureData, altitudeData);
//    SerialUSB.printf("\npresure: %d\r\n", (uint32_t)presureData);
//    SerialUSB.printf("altitude: %d\r\n", (uint32_t)altitudeData);
//
//    //光照
//    Neutron.getLightData(lightData);
//    SerialUSB.printf("\nlight: %d\r\n", lightData);
//
//    //声音
//    Neutron.getMICData(micData);
//    SerialUSB.printf("\nmic: %d\r\n", micData);
    delay(20);
}
