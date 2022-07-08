int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int sen1 = 1;
int sen2 = 2;
int sen3 = 3;
int sen4 = 4;
void setup()
{
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(sen1, INPUT);
   pinMode(sen2, INPUT);
   pinMode(sen3, INPUT);
   pinMode(sen4, INPUT);
}

void loop()
{
   if(digitalRead(sen1)==0)
     digitalWrite(led1, HIGH);
   else
     digitalWrite(led1, LOW);

   if(digitalRead(sen2)==0)
     digitalWrite(led2, HIGH);
   else
     digitalWrite(led2, LOW);

   if(digitalRead(sen3)==0)
     digitalWrite(led3, HIGH);
   else
     digitalWrite(led3, LOW);

   if(digitalRead(sen4)==0)
     digitalWrite(led4, HIGH);
   else
     digitalWrite(led4, LOW);
}
