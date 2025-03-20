#include <Servo.h> // 引入伺服馬達的庫

Servo myServo; // 建立伺服馬達物件
const int ledPin = 13; // LED 接腳 (內建 LED 通常是 13)
const int servoPin = 9; // 伺服馬達接腳

void setup() {
  myServo.attach(servoPin); // 將伺服馬達連接到指定的接腳
  pinMode(ledPin, OUTPUT); // 設定 LED 接腳為輸出
  digitalWrite(ledPin, LOW); // 確保 LED 一開始是關閉的
}

void loop() {
  // 讓伺服馬達旋轉到 90 度
  myServo.write(90);
  digitalWrite(ledPin, HIGH); // LED 亮起
  delay(1000); // 停留 1 秒

  // 讓伺服馬達回到 0 度
  myServo.write(0);
  digitalWrite(ledPin, LOW); // LED 熄滅
  delay(1000); // 停留 1 秒
}