#include<ESP8266WiFi.h>
#include<WiFiClient.h>

const char* ssid ="CNT_PEDRO";
const char* pass ="@PedrO2022#";
const char* host ="192.168.1.7";

int led1= 5;
int pulso1= 0;
int pulso2= 4;
int pulsador1=0;
int pulsador2=0;
char mensaje;

void setup() {

pinMode(pulso1,INPUT);
pinMode(pulso2,INPUT);
pinMode(led1,OUTPUT);

  Serial.begin(115200);
  Serial.println("");
  Serial.print("Conectado a ");
  Serial.println(ssid);
  WiFi.mode(WIFI_STA);
  delay(150);
  WiFi.begin(ssid,pass);
  while(WiFi.status() != WL_CONNECTED){
    delay(150);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println(WiFi.localIP());


}




void loop() {
if(Serial.available()>0){
  mensaje = Serial.read();
  if(mensaje =='B'){
digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led1,LOW);
delay(500);
digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led1,LOW);
  }
  }
  if(Serial.available()>0){
mensaje = Serial.read();
if(mensaje =='J'){
digitalWrite(led1,HIGH);
delay(500);
digitalWrite(led1,LOW);
delay(500);
  }
}
}

