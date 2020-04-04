/*
 *四個霹靂燈變化實習
 */
const int led[] = {10,11,12,13};  //LED連接至數位輸出接腳10~13(由左至右移)
int i;                            //LED索引值
int j = 0;                        //LED索引值
int direct=0;                     //LED移位方向控制
void setup()
{
    for(i=0;i<4;i++)              //四個LED
    {
        pinMode(led[i], OUTPUT);  //設定數位接腳10~13為輸出模式
    }
}
void loop()
{
    for(i=0;i<4;i++)              //四個LED
    {
        digitalWrite(led[i],LOW); ///設定數位接腳10~13號數位腳輸出狀態為LOW(設定關閉所有LED)
        delay(500);                   //延遲0.5秒     
    }
    for(j=0;j<=i;j++)
    {
        digitalWrite(led[j],HIGH);    //設定第j號數位腳輸出狀態為HIGH(點亮第j個LED)
        delay(500);                   //延遲0.5秒
    }
    if(direct==0)                 //如LED往右移
    {
      if(j==3)                    //如已右移至最右方
         direct=1;                //改為左移
      else                        //若尚未移至最右方
         j=j+1;                   //繼續右移
    }
    else                          //若LED往左移
    {
      if(j==0)                    //如LED移至最左方
         direct=0;                //改為右移
      else                        //若尚未移至最左方
         j=j-1;                   //繼續左移
    }
}
