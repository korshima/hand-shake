//A program which allows the movement of the robotic hand
//By Korshima
#include <Servo.h>      //Adds servo functions
Servo myservo1;         //creates 3 servo objects for each major joint on the arm ( wrist, elbow and shoulder)
Servo myservo2;         // elbow joint
Servo myservo3;         // shoulder
int pos1 =0;            //  positions for the servos, all starting at 0
int pos2=0;
int pos3=0;

        
void setup() {
  myservo1.attach(4); // attaches the servos to the needed pins on the arduino. Be sure to attch them to the correct pins, or modify the pins I used 
  myservo2.attach(5);
    myservo3.attach(6); 
    
 
}

void loop() { //creates and starts our loop
  
  for (pos1 = 0; pos1 <= 5; pos1 += 1) { // from 1 to 5 by 1 degree increments 
    
    myservo1.write(pos1);              //makes the servo turn to the position variable pos
    delay(10);                       // waits 5ms before it roates another degree
  }
  for (pos1 = 5; pos1 >= 0; pos1 -= 1) { // goes from 5 to 0
    myservo1.write(pos1);              // return to the initial position (pos1) 
    delay(10);                          // delay for 5ms
  }
    

    
    for (pos2 = 0; pos2 <= 10; pos2 += 1) { //from 1 to 10  by 1 degree increment
      
    myservo2.write(pos2);                   //  makes the servo turn to the position variable pos       
    delay(10);                               // waits 5ms before it roates another degree            
  }

  for (pos2 = 10; pos2 >= 0; pos2 -= 1) {  //from 10 back to 0 by decrease of 1
    myservo2.write(pos2);                    //  makes the servo turn to the position variable pos
    delay(10);                              // waits 5ms before it roates another degree
    

  }
    for (pos3 = 0; pos3 <= 45; pos3 += 1) {   // from 0 to 90 by 1 degree increment
     
    myservo3.write(pos3);                      //makes the servo turn to the position variable pos     
    delay(10);                                  // waits 5ms before it roates another degree               
  }
 
  for (pos3 = 45; pos3 >= 0; pos3 -= 1) {  // from 45 to 0 by reducing 1 degree
    myservo3.write(pos3);                    //makes the servo turn to the position variable pos 
    delay(10);                                // waits 5ms before it roates another degree 
  }
}

 
