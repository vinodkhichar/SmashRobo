// Motor A connections
int en[2] = {11,6};
int in1 = 12;
int in2 = 13;

int in3 = 7;
int in4 = 5;

int inp1 = 10;
int inp2 = 9;
int inp3 = 8;

int speed = 0;
int potentioPin = A0;

void setup() 
{
    pinMode(potentioPin, INPUT);
  
	pinMode(en[0], OUTPUT);
	pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
  
    pinMode(en[1], OUTPUT);
	pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
  
    pinMode(inp1,INPUT);
    pinMode(inp2,INPUT);
    pinMode(inp3,INPUT);
            
}
 
void loop()
{
   int a = digitalRead(10);
   int b = digitalRead(9);
   int c = digitalRead(8);
  if(a)
  {
     if(b==0 && c==0)//back
     {
        digitalWrite(in1,HIGH);
        digitalWrite(in2,LOW);
  
        digitalWrite(in4,HIGH);
        digitalWrite(in3,LOW);
     }
     else if(b==0 && c==1)
     {
        digitalWrite(in1,HIGH);
        digitalWrite(in2,LOW);
  
        digitalWrite(in4,LOW);
        digitalWrite(in3,HIGH);
     }
     else if(b==1 && c==0)
     {
        digitalWrite(in1,LOW);
        digitalWrite(in2,HIGH);
  
        digitalWrite(in4,HIGH);
        digitalWrite(in3,LOW);
     }
    else // forward
    {
        digitalWrite(in1,LOW);
        digitalWrite(in2,HIGH);
  
        digitalWrite(in4,LOW);
        digitalWrite(in3,HIGH);
    }
    
  }
  else
  {
     digitalWrite(in1,LOW);
     digitalWrite(in2,LOW);
  
     digitalWrite(in4,LOW);
     digitalWrite(in3,LOW);
  }
  
    speed = analogRead(potentioPin);
  
    analogWrite(en[0],speed/4);
    analogWrite(en[1],speed/4);
  
}


