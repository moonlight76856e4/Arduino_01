/*
 *四個LED單燈右移實習
 *控制四個LED燈，從左至右點亮
 */
const int led[] = {10,11,12,13};  //LED連接至數位輸出接腳10~13(由左至右移)
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
    delay(1000);                  //延遲1秒
    j++;                          //右移
    if(j==4)                      //如LED移至最右方
       j=0;                       //重新點亮最左方LED
}
