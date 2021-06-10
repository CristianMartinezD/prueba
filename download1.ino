#define SER 2
#define DESPLAZAR 4 //SRCLR.
#define LLAVE 3 //RCLR.

void setup(){
   pinMode(SER, OUTPUT);
   pinMode(DESPLAZAR, OUTPUT);
   pinMode(LLAVE, OUTPUT);
}

int vector[24] = {0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1};
void loop(){
  
  
  for(int i = 0; i < 24; i++){
    digitalWrite(SER, vector[i]);
    digitalWrite(DESPLAZAR, 0);
    digitalWrite(DESPLAZAR, 1);
    digitalWrite(DESPLAZAR, 0);
  }
  
  digitalWrite(LLAVE, 0);
  digitalWrite(LLAVE, 1);
  digitalWrite(LLAVE, 0);
  
  
  
}