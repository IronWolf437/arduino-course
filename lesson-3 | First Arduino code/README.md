# 🎥 Lesson 3 - First Arduino code (Blink)  

[![First Arduino Code](https://github.com/IronWolf437/arduino-course/blob/main/lesson-3%20%7C%20First%20Arduino%20code/thumbnail.png)](https://www.youtube.com/embed/lysSW3TG0Tk?si=CrNTGh5_oY2wCOyN)  
⬆️ **Click the image to watch the video on YouTube**  

This is the third lesson in the **Arduino Course**.  
In this video, we write and explain our very first Arduino program: the famous **Blink** example.  

---

## 📚 Lesson Content
- **`void setup()` & `void loop()`** (Basic program structure)
- **`pinMode()`** (Specifying pin orientation)
- **`digitalWrite()`** (Controlling digital outputs)
- **`delay()`** (Adding a time delay)
- **Comments** (Writing comments in code)

---

## 📂 Code Example
File: [`blink.ino`](https://github.com/IronWolf437/arduino-course/blob/main/lesson-3%20%7C%20First%20Arduino%20code/blink.ino)  

```cpp
void setup() {
  pinMode(13, OUTPUT);    // إعداد الرجل رقم 13 لتعمل كمخرج (Output)
}

void loop() {
  digitalWrite(13, HIGH); // تشغيل الـ LED المتصل بالرجل 13 (إضاءته)
  delay(500);             // الانتظار 500 مللي ثانية (0.5 ثانية)

  digitalWrite(13, LOW);  // إطفاء الـ LED
  delay(500);             // الانتظار 500 مللي ثانية (0.5 ثانية)
}
```
<p align="center">
  <img src="https://github.com/IronWolf437/arduino-course/blob/main/lesson-3%20%7C%20First%20Arduino%20code/output%20code.gif" alt="output code"/>
</p>

| Command              | Explanation |
|-----------------------|-------------|
| `void setup(){...}`   | Runs **once** at the beginning. Inside the `{...}` you put setup instructions (e.g., configure pins with `pinMode`). |
| `void loop(){...}`    | Runs **continuously**. Inside the `{...}` you write the main logic (e.g., turn LEDs on/off). |
| `pinMode(pin, mode);`  | Defines whether a **pin** is `INPUT`, `OUTPUT`, or `INPUT_PULLUP`. Example: `pinMode(13, OUTPUT);` |
| `digitalWrite(pin, value);` | Sets a pin to **HIGH (ON, 5V)** or **LOW (OFF, 0V)**. Example: `digitalWrite(13, HIGH);` |
| `delay(ms);`           | Pauses the program for a number of milliseconds (`1000 ms = 1 second`). |
| `//...` or `/*...*/`  | Used to add **comments**. `//` is single line, `/* ... */` is multi-line. |

---

## 📺 YouTube Video
👉 [Watch Lesson 3 on YouTube](https://www.youtube.com/embed/lysSW3TG0Tk?si=CrNTGh5_oY2wCOyN)

---

## 📝 Notes
- The code uses pin 13 because it's often connected to the built-in LED on most Arduino UNO boards.
- You can adjust the delay to speed up or slow down the LED blinking.
- The goal of this tutorial is to understand the basics of the code before venturing into more complex projects.

---

🔗 Next: [Lesson 4 - Variables]()
