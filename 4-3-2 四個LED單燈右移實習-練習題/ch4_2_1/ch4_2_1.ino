/*
 *四個LED單燈右移實習
 *控制四個LED燈，從右至左點亮
 *控制四個LED燈單燈閃爍左移
 */
//const int led[] = {10,11,12,13};  //LED連接至數位輸出接腳10~13(由左至右移)
const int led[] = {10,11,12,13};  //LED連接至數位輸出接腳13~10(由右至左移)
int i;                            //LED索引值
int j = 0;                        //LED索引值
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
        digitalWrite(led[i],LOW); //關閉所有LED
    }
    digitalWrite(led[j],HIGH);    //點亮第j個LED
    delay(500);                   //延遲0.5秒
    digitalWrite(led[j],LOW);     //關閉第j個LED
    delay(500);                   //延遲0.5秒
    digitalWrite(led[j],HIGH);    //點亮第j個LED
    delay(500);                   //延遲0.5秒
    digitalWrite(led[j],LOW);     //關閉第j個LED
    
    j++;                          //左移
    if(j==4)                      //如LED移至最左方
       j=0;                       //重新點亮最右方LED
}
