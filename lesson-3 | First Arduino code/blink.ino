void setup() {
  pinMode(13, OUTPUT);    // إعداد الرجل رقم 13 لتعمل كمخرج (Output)
}

void loop() {
  digitalWrite(13, HIGH); // تشغيل الـ LED المتصل بالرجل 13 (إضاءته)
  delay(500);             // الانتظار 500 مللي ثانية (0.5 ثانية)

  digitalWrite(13, LOW);  // إطفاء الـ LED
  delay(500);             // الانتظار 500 مللي ثانية (0.5 ثانية)
}
