int speaker=2;
int led1=13;
int led20=9;
int led21=10;
int led22=11;

void setup() {
  // put your setup code here, to run once:
	pinMode(speaker,OUTPUT);
	pinMode(led1,OUTPUT);
	pinMode(led20,OUTPUT);
	pinMode(led21,OUTPUT);
	pinMode(led22,OUTPUT);
}

void loop() {
	// put your main code here, to run repeatedly:
	digitalWrite(speaker,HIGH);
	delay(1000);
	digitalWrite(speaker,LOW);
	delay(10000);
	digitalWrite(led1,HIGH);
	delay(10000);
	digitalWrite(led1,LOW);
	delay(100);
	digitalWrite(led20,HIGH);
	digitalWrite(led21,HIGH);
	delay(10000);
	digitalWrite(led20,LOW);
	digitalWrite(led21,LOW);
	delay(100);
}