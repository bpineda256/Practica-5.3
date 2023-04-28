#include <Adafruit_NeoPixel.h>//Incluimos la librería en el código 
#include <Keypad.h>
#include <Servo.h>
char estado;
char A=10,B=11,C=12,D=13,E=2,F=3,G=4;
#define pinbuzzer 12
const byte filas = 4;
const byte columnas = 4;
char letras[filas][columnas]= {
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte pinesa[filas] = {A0,A1,A2,A3};
byte pinesb[columnas] = {5,6,7,8};
Keypad teclado = Keypad(makeKeymap(letras),pinesa,pinesb,filas,columnas);
Adafruit_NeoPixel leds= Adafruit_NeoPixel(12,9, NEO_GRB + NEO_KHZ800 );
Servo servoMotor;
void setup()
{
 leds.begin();
  Serial.begin(9600);
  servoMotor.attach(12);
servoMotor.write(0);
}

void loop()
{
  estado = teclado.getKey();
  Serial.println(estado);
  if(estado=='A'){
  leds.clear(); 
 leds.setPixelColor(0, leds.Color(150, 0, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(1, leds.Color(0, 150, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(2, leds.Color(0, 0, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(3, leds.Color(150, 0, 150));
  leds.show();
  delay(500);
       leds.setPixelColor(4, leds.Color(150, 200, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(5, leds.Color(0, 150, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(6, leds.Color(150, 200, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(7, leds.Color(150, 100, 0));
  leds.show();
  delay(500);
       leds.setPixelColor(8, leds.Color(150, 0, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(9, leds.Color(150, 100, 175));
  leds.show();
  delay(500);
       leds.setPixelColor(10, leds.Color(150, 175, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(11, leds.Color(150, 200, 175));
  leds.show();
  delay(500);
  }
  if(estado=='B'){
  leds.clear(); 
 leds.setPixelColor(0, leds.Color(0, 0, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(1, leds.Color(0, 200, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(2, leds.Color(200, 0, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(3, leds.Color(200, 150, 0));
  leds.show();
  delay(500);
       leds.setPixelColor(4, leds.Color(150, 200, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(5, leds.Color(180, 150, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(6, leds.Color(150, 200, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(7, leds.Color(170, 200, 180));
  leds.show();
  delay(500);
       leds.setPixelColor(8, leds.Color(150, 100, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(9, leds.Color(150, 100, 195));
  leds.show();
  delay(500);
       leds.setPixelColor(10, leds.Color(150, 175, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(11, leds.Color(150, 200, 175));
  leds.show();
  delay(500);
  }
  if(estado=='C'){
  leds.clear(); 
 leds.setPixelColor(0, leds.Color(0, 0, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(1, leds.Color(50, 70, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(2, leds.Color(0, 189, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(3, leds.Color(150, 100, 150));
  leds.show();
  delay(500);
       leds.setPixelColor(4, leds.Color(150, 200, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(5, leds.Color(50, 150, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(6, leds.Color(180, 200, 199));
  leds.show();
  delay(500);
        leds.setPixelColor(7, leds.Color(150, 100, 80));
  leds.show();
  delay(500);
       leds.setPixelColor(8, leds.Color(150, 90, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(9, leds.Color(150, 100, 175));
  leds.show();
  delay(500);
       leds.setPixelColor(10, leds.Color(150, 175, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(11, leds.Color(180, 200, 175));
  leds.show();
  delay(500);
  }
  if(estado=='D'){
  leds.clear(); 
 leds.setPixelColor(0, leds.Color(180, 0, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(1, leds.Color(0, 150, 90));
  leds.show();
  delay(500);
        leds.setPixelColor(2, leds.Color(10, 190, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(3, leds.Color(150, 90, 150));
  leds.show();
  delay(500);
       leds.setPixelColor(4, leds.Color(150, 200, 150));
  leds.show();
  delay(500);
        leds.setPixelColor(5, leds.Color(200, 190, 180));
  leds.show();
  delay(500);
        leds.setPixelColor(6, leds.Color(150, 200, 0));
  leds.show();
  delay(500);
        leds.setPixelColor(7, leds.Color(150, 160, 60));
  leds.show();
  delay(500);
       leds.setPixelColor(8, leds.Color(150, 165, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(9, leds.Color(150, 100, 185));
  leds.show();
  delay(500);
       leds.setPixelColor(10, leds.Color(150, 175, 200));
  leds.show();
  delay(500);
        leds.setPixelColor(11, leds.Color(150, 200, 175));
  leds.show();
  delay(500);
  }
  if(estado == '1'){
  servoMotor.write(45);
    delay(1000);
  }
  if(estado == '2'){
  servoMotor.write(70);
    delay(1000);
  }
  if(estado == '3'){
  servoMotor.write(100);
    delay(1000);
  }
  if(estado == '4'){
  servoMotor.write(120);
    delay(1000);
  }
  if(estado == '5'){
  servoMotor.write(125);
    delay(1000);
  }
  if(estado == '6'){
  servoMotor.write(130);
    delay(1000);
  }
  if(estado == '7'){
  servoMotor.write(150);
    delay(1000);
  }
  if(estado == '8'){
  servoMotor.write(170);
    delay(1000);
  }
  if(estado == '9'){
  servoMotor.write(180);
    delay(1000);
  }
  if(estado == '0'){
  servoMotor.write(0);
    delay(1000);
  }
 }
