//Probando los infrarrojos
#define motor_p9 9
#define motor_p10 10

#define motor_p19 19
#define motor_p13 13

//---------INFRARROJOS------------
//Infrarrojo Izquierda
#define infraOS1 4
//Infrarrojo de enmedio 
#define infraCentral  3
//Infrarrojo Derecho
#define infraOS3 2

//-----------VARIABLES-------------
//Se usaran cuando pasemos a PWD para la velocidad de los motores
int value = 70;
int valueGiro = 100;
int valueAsesinar = 150;

void setup() {
  pinMode(motor_p9, OUTPUT);
  pinMode(motor_p10, OUTPUT); 
  pinMode(motor_p19, OUTPUT);
  pinMode(motor_p13, OUTPUT); 

  pinMode(infraOS1, INPUT);
  pinMode(infraCentral, INPUT);
  pinMode(infraOS3, INPUT); 
}

void loop() {
  int  sensorCentral = analogRead(infraCentral);
  int  sensorIzq = analogRead(infraOS1);
  int  sensorDer = analogRead(infraOS3);
  
  if((sensorIzq > 800)&&(sensorDer > 800)){
    digitalWrite(motor_p9, 0);
    digitalWrite(motor_p10, 1);
    digitalWrite(motor_p13, 0);
    digitalWrite(motor_p19, 1);
  }else{
    digitalWrite(motor_p9, 0);
    digitalWrite(motor_p10, 1);
    digitalWrite(motor_p13,1);
    digitalWrite(motor_p19, 0);
  }
}
