const int led[] = {3,5,6,9};          //LED連接至PWM信號輸出接腳
int varNums;                          //LED變化種類
int ledNums;                          //LED亮度種類
const int brightness[7][4]=           //LED變化資料
  { {250,0,0,0},                      //第1次LED狀態
    {100,250,0,0},                    //第2次LED狀態
    {50,100,250,0},                   //第3次LED狀態
    {5,50,100,250},                   //第4次LED狀態
    {0,5,50,100},                     //第5次LED狀態
    {0,0,5,50},                       //第6次LED狀態
    {0,0,0,5},  };                    //第7次LED狀態
void setup()
{
}

void loop()
{
   for(varNums=0;varNums<7;varNums++)//雨滴變化
   {
       for(ledNums=0;ledNums<4;ledNums++)
           analogWrite(led[ledNums],brightness[varNums][ledNums]);
       delay(100);
   }
}
