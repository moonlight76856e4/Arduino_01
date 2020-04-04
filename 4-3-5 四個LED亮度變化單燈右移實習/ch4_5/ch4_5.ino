const int led[] = {3,9,10,11};              //LED連接至PWM信號輸出接腳
int brightness = 0;                         //LED亮度
int lighten = 5;                            //LED亮度變化
int ledNums = 0;                            //作用中的LED
int direct = 0;                             //LED漸亮或漸暗變化方向

void setup()
{
}

void loop()
{
   while(1)                                 //重複變化
   {
      if(direct==0)                         //如果LED由暗轉亮
      {
         brightness=brightness+lighten;     //LED漸亮
         if(brightness>=250)                //如果LED亮度大於等於250
            direct=1;                       //改由亮漸暗
      }
      else                                  //若由亮漸暗
      {
         brightness=brightness-lighten;     //LED漸暗
         if(brightness<=5)                  //如果LED亮度小於等於5
         {
            analogWrite(led[ledNums],0);    //關閉LED
            direct=0;                       //改由暗漸亮
            ledNums++;                      //下一個LED
            if(ledNums>3)                   //如果LED移至最右方
               ledNums=0;                   //重新設定第一個LED
         }
      }
      analogWrite(led[ledNums],brightness); //改變LED亮度
      delay(10);                            //延遲10ms
   }
}
