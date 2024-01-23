#include <SoftwareSerial.h>

String nombre = "PROMETEC"; //Cambiar PROMETEC por el nombre deseado
String password ="5678";  //Cambiar 5678 por el la contraseña deseada

void setup()
{
  Serial.begin(9600);
  pinMode (13,OUTPUT);
  digitalWrite(13,LOW) ;
  Serial.print("AT");
  delay(1000);
  Serial.print("AT+NAME");
  Serial.print(nombre);
  delay(1000);
  Serial.print("AT+PIN");
  Serial.print(password);
  delay(1000);
  Serial.print("AT+BAUD6");
  delay(1000);
  digitalWrite(13,HIGH) ;
}

void loop()
{

}

