/*
 *LED閃爍實習
 *練習題控制兩個LED交替閃爍
 */
const int led = 12;         //LED連接至數位輸出接腳12
const int led_1 = 13;       //LED連接至數位輸出接腳13
void setup()
{
   pinMode(led,OUTPUT);     //設定數位接腳12為輸出模式
   pinMode(led_1,OUTPUT);   //設定數位接腳13為輸出模式
}
void loop() 
{  
   digitalWrite(led_1,HIGH);//點亮接腳13的LED
   delay(1000);             //延遲1秒
   digitalWrite(led_1,LOW); //關閉接腳13的LED
   delay(1000);             //延遲1秒
   digitalWrite(led,HIGH);  //點亮接腳12的LED
   delay(1000);             //延遲1秒
   digitalWrite(led,LOW);   //點亮接腳12的LED
   delay(1000);             /延遲1秒
}
