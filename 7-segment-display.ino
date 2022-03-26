void setup() {
  pinMode(clockpin,OUTPUT);
  pinMode(datapin, OUTPUT);
  pinMode(power, OUTPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  digitalWrite(power, HIGH);
  //shiftOut(datapin, clockpin, MSBFIRST, 0b00000000);
}
void loop() {
w = digitalRead(9);
x = digitalRead(10);
y = digitalRead(11);
z = digitalRead(12);
if (w==0&&x==0&&y==0&&z==0)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[0]);
 }
  else if (w==0&&x==0&&y==0&&z==1)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[1]);
 }
  else if (w==0&&x==0&&y==1&&z==0)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[2]);
 }
  else if (w==0&&x==0&&y==1&&z==1)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[3]);
 }
  else if (w==0&&x==1&&y==0&&z==0)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[4]);  
 }
  else if (w==0&&x==1&&y==0&&z==1)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[5]);
 }
  else if (w==0&&x==1&&y==1&&z==0)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[6]);
 }
  else if (w==0&&x==1&&y==1&&z==1)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[7]);
 }
  else if (w==1&&x==0&&y==0&&z==0)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[8]);  
 }
  else if (w==1&&x==0&&y==0&&z==1)
 {
    shiftOut(datapin,clockpin, MSBFIRST, dataArray[9]);
 }
 delay(100);
}
