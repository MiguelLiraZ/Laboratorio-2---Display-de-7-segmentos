//Declaramos todos los Pines para el Display
int pinA=2;
int pinB=3;
int pinC=4;
int pinD=5;
int pinE=6;
int pinF=7;
int pinG=8;

//Declaramos los 2 push buttons a usar
int Push1;
int Push2;
 
void setup() {

  Serial.begin(9600); //Iniciamos Puerto Serial

  pinMode(10,INPUT); //Colocamos pines de Entrada 
  pinMode(11,INPUT);
   
  for (int x=0;x<=8;x++){  //Declaramos pines de salida
    pinMode(x, OUTPUT);
  }
  
    for (int x=0;x<=8;x++){ //Declaramos pines en estado bajo
    digitalWrite(x, LOW);
  }
  
}

void loop() {

  Push1 = digitalRead(10); //Se lee Push 1
  Push2 = digitalRead(11); //Se lee Push 2


  if (Serial.available()){  //Leemos dato ingresado del Monitor Serial
    char dato = Serial.read();
    Serial.println(dato); 

  if(dato == '0'){
  //Número 0
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(500);
  }

  if(dato == '1'){
  //Número 1
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }

  if(dato == '2'){
  //Número 2
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == '3'){
  //Número 3
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);
  }
  
  if(dato == '4'){
  //Número 4
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == '5'){
  //Número 5
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500); 
  }

  if(dato == '6'){
  //Número 6
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == '7'){
  //Número 7
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }

  if(dato == '8'){
  //Número 8
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == '9'){
  //Número 9
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);
  }

  if(dato == '.'){
  //Apagar
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }
}


  if(Push1==1){ //El contador irá de 0 a 9
    
  //Número 0
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(500);

  //Número 1
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  //Número 2
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 3
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 4
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 5
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500); 

  //Número 6
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 7
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  //Número 8
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 9
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Apagar
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }


  if(Push2==1){//El contador irá de 9 a 0\
  //Número 9
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);


  //Número 8
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 7
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  //Número 6
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 5
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500); 

  //Número 4
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 3
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 2
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,HIGH);
  delay(500);

  //Número 1
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);

  //Número 0
  digitalWrite(pinA,HIGH);
  digitalWrite(pinB,HIGH);
  digitalWrite(pinC,HIGH);
  digitalWrite(pinD,HIGH);
  digitalWrite(pinE,HIGH);
  digitalWrite(pinF,HIGH);
  digitalWrite(pinG,LOW);
  delay(500);

  //Apagar
  digitalWrite(pinA,LOW);
  digitalWrite(pinB,LOW);
  digitalWrite(pinC,LOW);
  digitalWrite(pinD,LOW);
  digitalWrite(pinE,LOW);
  digitalWrite(pinF,LOW);
  digitalWrite(pinG,LOW);
  delay(500);
  }

  
}
