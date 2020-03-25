/*
 *LED閃爍實習
 */
const int led = 13;         //LED連接至數位輸出接腳13

void setup()
{
   pinMode(led,OUTPUT);     //設定數位接腳13為輸出模式  
}
void loop() 
{  digitalWrite(led,HIGH);  //點亮LED
   delay(1000);             //延遲1秒
   digitalWrite(led,LOW);   //關閉LED
   delay(1000);             //延遲1秒
}
