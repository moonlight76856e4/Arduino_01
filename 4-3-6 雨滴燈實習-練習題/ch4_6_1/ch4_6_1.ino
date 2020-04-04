const int led[] = {3,5,6,9,10,11};          //LED連接至PWM信號輸出接腳
int varNums;                          //LED變化種類
int ledNums;                          //LED亮度種類
const int brightness[16][6]=           //LED變化資料
  { {250,0,0,0,0,0},                      //第1次LED狀態
    {200,250,0,0,0,0},                     //第2次LED狀態
    {150,200,250,0,0,0},                   //第3次LED狀態
    {100,150,200,250,0,0},                    //第4次LED狀態
    {50,100,150,200,250,0},                      //第5次LED狀態
    {25,50,100,150,200,250},                        //第6次LED狀態
    {12,25,50,100,150,200},                         //第7次LED狀態
    {6,12,25,50,100,150},
    {3,6,12,25,50,100},
    {2,3,6,12,25,50},
    {0,2,3,6,12,25},
    {0,1,2,3,6,12},
    {0,1,1,2,3,6},
    {0,1,1,1,2,3},
    {0,1,1,1,1,2},
    {0,0,0,0,0,0}   };                    
    
void setup()
{
}

void loop()
{
   for(varNums=0;varNums<16;varNums++)//雨滴變化
   {
       for(ledNums=0;ledNums<6;ledNums++)
           analogWrite(led[ledNums],brightness[varNums][ledNums]);
       delay(100);
   }
}
