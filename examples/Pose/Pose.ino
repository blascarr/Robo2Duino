#include <Robo2Duino.h>

Pose2D p;
Pose2D X = transl2(2,3);
Pose2D R = trot2(2/rad2ang); // Radians to degrees
vector2D C = {1,2}; 
Pose2D RC = transl2(C)*R*transl2(-C);
Pose2D T = se2(1,2,30);

void setup() {
  Serial.begin(9600);

  Pose2D A;
  float arrayA[3][3] = {{3.25,5.67,8.67},{4.55,7.23,9.00},{2.35,5.73,10.56}};
  A = arrayA;

  Serial << "A Array Matrix " << A << "\n" ;

  Serial << "T se2( 1,2,30 ) " << T << "\n" ;
  Serial << "Transl2( 2,3) " << X << "\n" ;
  Serial << "Trot2( 2) " << R << "\n" ;
  Serial << "R*X " << R*X << "\n" ;
  Serial << "X*R " << X*R << "\n" ;

  Serial << "C " << C << "\n" ;
  Serial << "RC " << RC << "\n" ;
  
}

void loop() {
  
}

