/*
 *一個LED亮度變化
 */
const int led = 10;                  //LED連接至PWM接腳10
int brightness = 0;                  //LED亮度
int lighten = 5;                     //LED亮度變化量
void setup()
{
}

void loop()
{
   analogWrite(led,brightness);   //改變LED亮度
   if(brightness <= 250)             //如果LED小於等於250
      brightness=brightness+lighten; //LED漸亮變化
   else                              //若大於250則
       brightness=0;                 //設定LED亮度為最暗
       delay(50);                    //LED亮度變化間隔50ms
}
