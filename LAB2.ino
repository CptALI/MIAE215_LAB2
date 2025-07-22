
int pin1 = 13;

void setup(){
	
	
	pinMode(pin1, OUTPUT);
	
	Serial.begin(9600);
	
	
}


void loop(){
	
	float time_s;
	
	digitalWrite (pin1, HIGH);
	delay(1000);
	
	
	time_s = micros()*1.0e-6;
	
	Serial.print("\ntime(s) =, ");
	Serial.print(time_s);
	
}
