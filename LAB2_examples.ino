//Lab2 examples


int pin1 = 13;

void setup(){
	
	pinMode(pin1, OUTPUT);
	
	Serial.begin(9600);

}

int pin_state = LOW;
float time_p = 0.0;

void loop(){
	
	float time_clock, dt,f,pi = 3.14159;

/*	
	//QUESTION 1
	
	
	while(1){
		time_clock = micros()*1e-6;
		dt = time_clock - time_p;
		
		
		if(dt>0.5){
			
			if(pin_state == LOW){
				pin_state = HIGH;
				digitalWrite(pin1,HIGH);
			}else{
				pin_state = LOW;
				digitalWrite(pin1,LOW);
			}
			time_p = time_clock;
			break;
		}
	}
	*/
	
	//QUESTION 2
	
		while(1){
		time_clock = micros()*1e-6;
		dt = time_clock - time_p;
		
		
		if((dt>0.25)&&(time_clock<2*pi)){
			
			f = sin(time_clock);
			Serial.print("time_clock");
			Serial.print(",");
			Serial.print(f);
			Serial.print("\n");
			
			time_p = time_clock;
			break;
		}
	}
	
	
}	


