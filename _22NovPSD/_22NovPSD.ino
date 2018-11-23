//Probando los infrarrojos
#define motor_p9 9
#define motor_p10 10
#define motor_p19 19
#define motor_p13 13

#define compuerta 8
//---------INFRARROJOS------------
//Infrarrojo Izquierda
#define infraOS1 6
//Infrarrojo de enmedio 
#define infraCentral  5
//Infrarrojo Derecho
#define infraOS3 4

//-----------VARIABLES-------------
//Se usaran cuando pasemos a PWD para la velocidad de los motores
int value = 70;
int valueGiro = 100;
int valueAsesinar = 150;
// Variables para la calibración
int sensorMin = 1023; 
int sensorMax = 0;

void setup() {
  pinMode(motor_p9, OUTPUT);
  pinMode(motor_p10, OUTPUT); 
  pinMode(motor_p19, OUTPUT);
  pinMode(motor_p13, OUTPUT); 

  pinMode(infraOS1, INPUT);
  pinMode(infraCentral, INPUT);
  pinMode(infraOS3, INPUT); 
  pinMode(compuerta, OUTPUT);
}

void loop() {
  digitalWrite(compuerta, 1);
  
  while (millis() < 5000) {
      //Leer lo que el sensor arroje
     int sensorValue = analogRead(infraCentral);
  
      // Registrar el valor máximo del sensor
      if (sensorValue > sensorMax) {
        sensorMax = sensorValue;
      }      
      // Registrar el valor mínimo del sensor
      if (sensorValue < sensorMin) {
        sensorMin = sensorValue;
      }
    }

  int  sensorCentral = analogRead(infraCentral);
  int  sensorIzq = analogRead(infraOS1);
  int  sensorDer = analogRead(infraOS3);
  
  if((sensorIzq > sensorMin)&&(sensorDer > sensorMin)){
    digitalWrite(motor_p9, 1);
    digitalWrite(motor_p10, 0);
    
    digitalWrite(motor_p13, 1);
    digitalWrite(motor_p19, 0);
  }else{
    digitalWrite(motor_p9, 0);
    digitalWrite(motor_p10, 0);
    digitalWrite(motor_p13,0);
    digitalWrite(motor_p19, 0);
  }
}//END LOOP


