[![icon128.png](https://i.postimg.cc/J7pFtT8k/icon128.png)](https://postimg.cc/ThW04Jpd) 
# LIGHT AND DARK

https://youtu.be/F7KP_sQ-SpA  -->  คลิปวิดิโอการพรีเซนต์

# arduino NodeMCU
[![IMG1.jpg](https://i.postimg.cc/fyYp3sfj/IMG1.jpg)](https://postimg.cc/9wFJSvSr)
# หลอดไฟเปิด/ปิด อัตโนมัติ

# อุปกรณ์
[![mo.png](https://i.postimg.cc/43bZmrXg/mo.png)](https://postimg.cc/qtRWFDtb)
1. LDR Photoresistor Sensor Module โมดูลวัดแสง
[![lay.png](https://i.postimg.cc/W4SCRj2h/lay.png)](https://postimg.cc/t1Z2PKnj)
2. โมดูล รีเลย์ 1-Channel relay 5V 1 ช่อง isolation control Relay Module Shield 250V/10A Active LOW
[![mcu.png](https://i.postimg.cc/9F6j1WM2/mcu.png)](https://postimg.cc/BXBynfH7)
3. arduino nodemcu board
[![led.jpg](https://i.postimg.cc/fW3zvqKx/led.jpg)](https://postimg.cc/grWbzD1J)
4. ชุดหลอดไฟ
[![jump.jpg](https://i.postimg.cc/PrYdgL0J/jump.jpg)](https://postimg.cc/6y6sRQWx)
5. สายจัมไฟ

# วิธีการตัดวงจร
[![LDR.jpg](https://i.postimg.cc/zBKdzrNC/LDR.jpg)](https://postimg.cc/vg87hCcT)

# Code arduino
[![code.png](https://i.postimg.cc/HxdMMD54/code.png)](https://postimg.cc/LqQhdWxn)

int sensorPin = A0; // เซ็ตค่าอินพุตของเซนเซอร์ที่ช่อง A0
int sensorValue = 0; // ประกาศตัวแปรไว้เก็บค่าของ เซนเซอร์

void setup() {
pinMode(D2,OUTPUT); // เซ็ตค่าเอาต์พุตไว้ที่ช่อง D2
Serial.begin(9600); // แสดงค่าบน Serial Monitor
}

void loop() {
sensorValue = analogRead(sensorPin); // อ่านค่าจากเซนเซอร์วัดแสง มาเก็บที่ตัวแปร sensorValue
Serial.println(sensorValue); // แสดงค่าของเซนเซอร์ที่จอ Serial Monitor
if (sensorValue > 700) // ถ้าค่าเซ็นมากกว่า 700 ให้ทำ.... (ค่ายิ่งมากยิ่งมืด)
{
digitalWrite(D2,HIGH); // ให้ D2 ปล่อยไฟ
}
else
{
digitalWrite(D2,LOW); // ให้ D2 ไม่ปล่อยไฟ
}
}

# ผลที่ได้
Youtube :  https://youtu.be/F7KP_sQ-SpA

เมื่อเอาของมาปิดบริเวณเซนเซอร์ จะทำให้มืด ไฟก็จะติด
[![light.jpg](https://i.postimg.cc/rybmX2mn/light.jpg)](https://postimg.cc/Sj6qC5cC)

เมื่อไม่มีของมาปิดบริเวณเซนเซอร์ จะทำให้สว่าง ไฟก็จะดับ
[![dark.jpg](https://i.postimg.cc/Nf9K5fSv/dark.jpg)](https://postimg.cc/w7zqrH9w)

สมาชิกลุ่ม
|               |ชื่อ             | นามสกุล   | GitHub Username |รหัสนักศึกษา|
| ------------- |:-------------:|:---------:|:---------------:|---------:|
| col 3 is      |จิรวัฒน์|ประทุมถิ่น|[it61070025](https://github.com/it61070025)|61070025|
| col 2 is      |โชคพิสิฐ|หลิวรุ่งทรัพย์|[chokpisit](https://github.com/chokpisit)|61070042|
| zebra stripes |ธนโชติ|เลิศลาภนนท์|[jer11698](https://github.com/jer11698)|61070070|
| zebra stripes |ศุภานันท์|ขวัญเพรา|[Mymieeye](https://github.com/Mymieeye)|61070229|


รายงาน และ ซอร์สโค้ดนี้ เป็นส่วนหนึ่งของวิชา การสร้างโปรแกรมคอมพิวเตอร์ Computer Programming (06016315)
หลักสูตรวิทยาศาสตร์บัณฑิต สาขาวิชาเทคโนโลยีสารสนเทศ
ภาคเรียนที่ 2 ปีการศึกษา 2561
คณะเทคโนโลยีสารสนเทศ
สถาบันเทคโนโลยีพระจอมเกล้าเจ้าคุณทหารลาดกระบัง
