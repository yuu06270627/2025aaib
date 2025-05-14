//week13-5.sound
//要先安裝
//找sound下載sound的含式點install安裝
import processing.sound.*;//使用聲音外掛
SoundFile mySound;//宣告變數 mySound他是SoundFile
void setup(){
  size(400,400);
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
}//裡面是空的畫圖 要寫他
