#include <DHT.h>
int sensor = 5;
int tem, humedad; 
DHT dht (sensor, DHT11);
  void setup(){
    Serial.begin(9600);
    dht.begin();
  }

  void loop (){
int lectura = analogRead(A0);
Serial.print("La lectura es: ");
Serial.println(lectura);
//if(lectura >=  1000){
  //Serial.println(">>El sensor esta desconectado o fuera del suelo<<");
//}
//else if (lectura <1000 && lectura>= 600){
  //Serial.println(">>El suelo esta seco<<");

//}
//else if (lectura < 600 && lectura >=370){
  //Serial.println(">> El suelo esta humedo<<");
//}
//else if(lectura < 370){
 // Serial.println(">> El sensor esta en agua <<");

//}
delay(2000);
int lecturaPorcentaje = map(lectura, 1023,0,0,100);
Serial.print("La humedad del suelo es : ");
Serial.print(lecturaPorcentaje);
Serial.println("%");

if (humedad = dht.readHumidity()){


    tem = dht.readTemperature();
    Serial.print("Temperatura ambiente : ");
    Serial.print(tem);
    Serial.print("°C Humedad ambiente : ");
    Serial.print(humedad);
    Serial.println("%");


    delay(500);
  }
  }