int redButton = 6;
int greenButton = 5;
int blueButton = 3;

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(redButton, INPUT_PULLUP);
    pinMode(greenButton, INPUT_PULLUP);
    pinMode(blueButton, INPUT_PULLUP);  
}

void loop() {
    if (digitalRead(redButton) == LOW) {
        digitalWrite(redPin, HIGH);
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, LOW);
    }
    else if (digitalRead(greenButton) == LOW) {
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, HIGH);
        digitalWrite(bluePin, LOW);
    }
    else if (digitalRead(blueButton) == LOW) {
        digitalWrite(redPin, LOW);
        digitalWrite(greenPin, LOW);
        digitalWrite(bluePin, HIGH);
    }
}
