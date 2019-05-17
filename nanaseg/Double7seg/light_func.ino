void all_clean(){
  for(int i=0;i<NUMPIXELS*2;i++){
    p1.setPixelColor(i, p1.Color(0,0,0));
    p2.setPixelColor(i, p2.Color(0,0,0));
  }
  all_show();
}

void all_light(int r,int g, int b){
  for(int i=0;i<NUMPIXELS*2;i++){
    p1.setPixelColor(i, p1.Color(r,g,b));
    p2.setPixelColor(i, p2.Color(r,g,b));
  }
  all_show();
}

void count_up(int dt,int r,int g, int b){
  for(int i=0;i<=9;i++){
    for(int j=1;j<=4;j++){
      number(j,i,r,g,b);
    }
    all_show();
    delay(dt);
    all_clean();
  }
}

void count_down(int dt,int r,int g, int b){
  for(int i=9;i>=0;i--){
    for(int j=1;j<=4;j++){
      number(j,i,r,g,b);
    }
    all_show();
    delay(dt);
    all_clean();
  }
}

void running_around1(int dt, int r,int g, int b){
  absolute(1,1,1,r,g,b);
  all_show();
  delay(dt);
  all_clean();
  
  absolute(1,2,1,r,g,b);
  all_show();
  delay(dt);
  all_clean();
  
  absolute(2,1,1,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,2,1,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,2,2,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,2,3,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,2,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,1,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,2,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,1,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,1,5,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,1,6,r,g,b);
  all_show();
  delay(dt);
  all_clean();
}

void running_parallel(int dt, int r,int g, int b){
  absolute(1,1,1,r,g,b);
  absolute(1,1,7,r,g,b);
  absolute(1,1,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,2,1,r,g,b);
  absolute(1,2,7,r,g,b);
  absolute(1,2,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,1,1,r,g,b);
  absolute(2,1,7,r,g,b);
  absolute(2,1,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(2,2,1,r,g,b);
  absolute(2,2,7,r,g,b);
  absolute(2,2,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();
}

void running_vertical(int dt, int r,int g, int b){
  absolute(1,1,1,r,g,b);
  absolute(1,2,1,r,g,b);
  absolute(2,1,1,r,g,b);
  absolute(2,2,1,r,g,b);
  all_show();
  delay(dt);
  all_clean();
  
  absolute(1,1,6,r,g,b);
  absolute(1,1,2,r,g,b);
  absolute(1,2,6,r,g,b);
  absolute(1,2,2,r,g,b);
  absolute(2,1,6,r,g,b);
  absolute(2,1,2,r,g,b);
  absolute(2,2,6,r,g,b);
  absolute(2,2,2,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,1,5,r,g,b);
  absolute(1,1,3,r,g,b);
  absolute(1,2,5,r,g,b);
  absolute(1,2,3,r,g,b);
  absolute(2,1,5,r,g,b);
  absolute(2,1,3,r,g,b);
  absolute(2,2,5,r,g,b);
  absolute(2,2,3,r,g,b);
  all_show();
  delay(dt);
  all_clean();

  absolute(1,1,4,r,g,b);
  absolute(1,2,4,r,g,b);
  absolute(2,1,4,r,g,b);
  absolute(2,2,4,r,g,b);
  all_show();
  delay(dt);
  all_clean();
}

void rotate_inyourself(int dt, int r, int g, int b){
  for(int i=1;i<=6;i++){
    absolute(1,1,i,r,g,b);
    absolute(1,2,i,r,g,b);
    absolute(2,1,i,r,g,b);
    absolute(2,2,i,r,g,b);
    all_show();
    delay(dt);
    all_clean();
  }
}

void nami(int dt, int r, int g, int b){
  all_clean();
  //number(0,7,r,g,b);
  number(1,3,r,g,b);
  all_show();
  delay(dt);
  
  all_clean();
  number(1,7,r,g,b);
  number(2,3,r,g,b);
  all_show();
  delay(dt);
  
  all_clean();
  number(2,7,r,g,b);
  number(3,3,r,g,b);
  all_show();
  delay(dt);

  all_clean();
  number(3,7,r,g,b);
  number(4,3,r,g,b);
  all_show();
  delay(dt);

  all_clean();
  number(4,7,r,g,b);
  //number(5,3,r,g,b);
  all_show();
  delay(dt);
}

void oku(int dt, int r, int g, int b){
  all_clean();
  //number(0,0,r,g,b);
  number(1,9,r,g,b);
  all_show();
  delay(dt);
  
  all_clean();
  number(1,0,r,g,b);
  number(2,9,r,g,b);
  all_show();
  delay(dt);
  
  all_clean();
  number(2,0,r,g,b);
  number(3,9,r,g,b);
  all_show();
  delay(dt);

  all_clean();
  number(3,0,r,g,b);
  number(4,9,r,g,b);
  all_show();
  delay(dt);

  all_clean();
  number(4,0,r,g,b);
  //number(5,9,r,g,b);
  all_show();
  delay(dt);
}

void nami_and_oku_random_color(int dt,int r,int g, int b){
  nami(dt,r,g,b);
  all_clean();
  delay(dt);
  oku(dt,r,g,b);
  all_clean();
  delay(dt);
}

void random_noise(int dt,int r,int g, int b){
  all_clean();
  for(int i=1;i<=7;i++){
    if(random(0,100)>=50){
      absolute(1,1,i,r,g,b);
      absolute(1,2,i,r,g,b);
      absolute(2,1,i,r,g,b);
      absolute(2,2,i,r,g,b);
    }else{
      absolute(1,1,i,0,0,0);
      absolute(1,2,i,0,0,0);
      absolute(2,1,i,0,0,0);
      absolute(2,2,i,0,0,0);
    }
  }
  all_show();
  delay(dt);
  
}

void random_number(int dt, int r, int g, int b){
  for(int i=1;i<=4;i++){
    //number(i,random(0,9),r,g,b);
    number(i,random(0,9),random(100,255),random(0,100),random(0,200));
  }
  all_show();
  delay(dt);
}

