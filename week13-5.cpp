//week13-5.sound
//�n���w��
//��sound�U��sound���t���Iinstall�w��
import processing.sound.*;//�ϥ��n���~��
SoundFile mySound;//�ŧi�ܼ� mySound�L�OSoundFile
void setup(){
  size(400,400);
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void draw(){
}//�̭��O�Ū��e�� �n�g�L
