#define IN1 8 //GPIO 8
#define IN2 9 //GPIO 9
#define IN3 10 //GPIO 10
#define IN4 11 //GPIO 11


unsigned long time = 0;
unsigned long prevtime = 0;
const int lengthSeq = 8;
int Step = 0;
int rStep = 7;
int stepCount = 0;

int stepsMatrix[lengthSeq][4] = {
  {0, 0, 0, 1},
  {0, 0, 1, 1},
  {0, 0, 1, 0},
  {0, 1, 1, 0},
  {0, 1, 0, 0},
  {1, 1, 0, 0},
  {1, 0, 0, 0},
  {1, 0, 0, 1},
};


void motor(int mode, int speed, int dire, int limitStep, int limitLoop) {

    if (limitStep != -1 && limitLoop != -1) {
        if (mode == 0 || mode == 1) limitStep += limitLoop * 32;
        else if (mode = 2) limitStep += limitLoop * 64;
    }

    if (limitStep == 0 && limitLoop == 0) return;

    time = millis();

    if (mode == 0) {

        if (time - prevtime >= speed) {
            prevtime = time;
            if (dire == 0) {
                digitalWrite(IN1, stepsMatrix[Step][0]);
                digitalWrite(IN2, stepsMatrix[Step][1]);
                digitalWrite(IN3, stepsMatrix[Step][2]);
                digitalWrite(IN4, stepsMatrix[Step][3]);
                if (limitStep != -1 && limitStep != -1) {
                    stepCount++; if (stepCount > limitStep) return;
                }
                Step += 2;
            }
            if (dire == 1) {
                digitalWrite(IN1, stepsMatrix[rStep - 1][0]);
                digitalWrite(IN2, stepsMatrix[rStep - 1][1]);
                digitalWrite(IN3, stepsMatrix[rStep - 1][2]);
                digitalWrite(IN4, stepsMatrix[rStep - 1][3]);
                if (limitStep != -1 && limitStep != -1) {
                    stepCount++; if (stepCount > limitStep) return;
                }
                rStep -= 2;
            }
        }
        if (dire == 0) { if (Step > 7) Step = 0; }
        if (dire == 1) { if (rStep < 0) rStep = 7; }
    }

    if (mode == 1) {

        if (time - prevtime >= speed) {
            prevtime = time;
            if (dire == 0) {
                digitalWrite(IN1, stepsMatrix[Step + 1][0]);
                digitalWrite(IN2, stepsMatrix[Step + 1][1]);
                digitalWrite(IN3, stepsMatrix[Step + 1][2]);
                digitalWrite(IN4, stepsMatrix[Step + 1][3]);
                if (limitStep != -1 && limitStep != -1) {
                    stepCount++; if (stepCount > limitStep) return;
                }
                Step += 2;
            }

            if (dire == 1) {
                digitalWrite(IN1, stepsMatrix[rStep][0]);
                digitalWrite(IN2, stepsMatrix[rStep][1]);
                digitalWrite(IN3, stepsMatrix[rStep][2]);
                digitalWrite(IN4, stepsMatrix[rStep][3]);
                if (limitStep != -1 && limitStep != -1) {
                    stepCount++; if (stepCount > limitStep) return;
                }
                rStep -= 2;
            }
        }
        if (dire == 0) { if (Step > 7) Step = 0; }
        if (dire == 1) { if (rStep < 0) rStep = 7; }

    }

    if (mode == 2) {

        if (time - prevtime >= speed) {
            prevtime = time;

            if (dire == 0) {
                digitalWrite(IN1, stepsMatrix[Step][0]);
                digitalWrite(IN2, stepsMatrix[Step][1]);
                digitalWrite(IN3, stepsMatrix[Step][2]);
                digitalWrite(IN4, stepsMatrix[Step][3]);
                if (limitStep != -1 && limitStep != -1) {
                    stepCount++; if (stepCount > limitStep) return;
                }
                Step++;
            }

            if (dire == 1) {
                digitalWrite(IN1, stepsMatrix[rStep][0]);
                digitalWrite(IN2, stepsMatrix[rStep][1]);
                digitalWrite(IN3, stepsMatrix[rStep][2]);
                digitalWrite(IN4, stepsMatrix[rStep][3]);
                if (limitStep != -1 && limitStep != -1) {
                    stepCount++; if (stepCount > limitStep) return;
                }
                rStep--;
            }
            if (dire == 0) { if (Step > 7) Step = 0; }
            if (dire == 1) { if (rStep < 0) rStep = 7; }
        }

    }

}
void setup() {

    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
}

void loop() {
    //mode, speed, direction, steps, rotations
    motor(2, 30, 1, 0, 1);
}
