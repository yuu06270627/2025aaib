//�{���ҥ��week04-5��week03-4
void setup(){
  size(600, 400);
}
float fishX =300, fishY = 200;//���y��
float[]x = new float[100];//java�}�C
float[]y = new float[100];//�̦h���@�ʹ}��
int N = 0;//�ثe�O�s��
void draw(){
  background(#c0ffee);
  for(int i=0;i<N; i++){//for�j��
    ellipse(x[i], y[i], 8, 8);//�}�ƪ��}�C
    y[i]++;
    if(y[i]>400){
      for(int k=i; k<N-1; k++){
        x[k]=x[k+1];
        y[k]=y[k+1];
      }
      N--;
    }
  }
  println(N);
  ellipse(fishX, fishY, 30, 10);//��
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
