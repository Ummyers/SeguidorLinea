//No se pudieron seguir con pruebas por la soldadura

#define motor_p9 9
#define motor_p10 10

#define motor_p19 19
#define motor_p13 13

int value = 70;
int valueGiro = 100;
int valueAsesinar = 150;
//Se usara PWD hasta que se estrablezca bien la comunicación. 

void setup() {
  
  pinMode(motor_p9, OUTPUT);
  pinMode(motor_p10, OUTPUT); 
  
  pinMode(motor_p19, OUTPUT);
  pinMode(motor_p13, OUTPUT); 

}

void loop() {
  digitalWrite(motor_p9, 0);
  digitalWrite(motor_p10, 1);
  delay(1000);
  digitalWrite(motor_p13,0);
  digitalWrite(motor_p19, 1);
}
