// the setup function runs once when you press reset or power the board
void setup() {

  Serial.begin(9600);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}


void loop() {

int potValue = analogRead(A5);
int state = 0;
int a = 0;
int b = 0;
int c = 0;
int d = 0;

//Read initial value of sensor to find first state

if(potValue >= 0 && potValue < 400){
    state = 1;
}
else if (potValue > 400 && potValue < 800){
    state = 2;
}
else{
    state = 3;
}

switch (state){

  case 1:
  //2 LEDs with 600 delay

  if(c != 0){
    digitalWrite(c, LOW);
  }
  if(d != 0){
    digitalWrite(d, LOW);
  }
  
  a = random(2, 12);
  b = random(2, 12);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  delay(600);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  
  //check sensor
  potValue = analogRead(A5);
  if(potValue >= 0 && potValue < 400){
    state = 1;
  }
  else if (potValue > 400 && potValue < 800){
    state = 2;
  }
  else{
    state = 3;
  }
  break;

  case 2:
  // 3 LEDs with 300 delay

  if (d != 0){
    digitalWrite(d, LOW);
  }

  a = random(2, 12);
  b = random(2, 12);
  c = random(2, 12);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  delay(300);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  
  //check sensor
  potValue = analogRead(A5);
  if(potValue >= 0 && potValue < 400){
    state = 1;
  }
  else if (potValue > 400 && potValue < 800){
    state = 2;
  }
  else{
    state = 3;
  }
  
  break;

  case 3:

  a = random(2, 12);
  b = random(2, 12);
  c = random(2, 12);
  d = random(2, 12);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(150);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  
  //check sensor
  potValue = analogRead(A5);
  if(potValue > 0 && potValue < 400){
    state = 1;
  }
  else if (potValue > 400 && potValue < 800){
    state = 2;
  }
  else{
    state = 3;
  }

  break;
}



/*
int  a = random(2, 12);
int  b = random(2, 12);
int  c = random(2, 12);
int  d = random(2, 12);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
  delay(150);

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  
  a = random(2, 12);
  b = random(2, 12);
  c = random(2, 12);
  d = random(2, 12);

  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(150);

  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  
*/
             
}
