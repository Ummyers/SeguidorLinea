//No se pudieron seguir con pruebas por la soldadura

#define motor_p9 9
#define motro_p10 10

int value = 70;
int valueGiro = 100;
int valueAsesinar = 150;
//Se usara PWD hasta que se estrablezca bien la comunicación. 

void setup() {
  pinMode(motor_p9, OUTPUT);
  pinMode(motor_p10, OUTPUT); 
}

void loop() {
  digitalWrite(motor_p9, 0);
  digitalWrite(motor_p10, 1);
}
