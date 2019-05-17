#define LOW 19

int origin(int which){//which==1: left, which==2: right
  int return_num;
  switch(which){
    case 1:
      return_num=0;
      break;
    case 2:
      return_num=LOW*7;
      break;
    default:
      return_num=0;//...?
      break;
  }
  return return_num;
}

void absolute(int p_num,int left_or_right, int where, int r,int g, int b){//left_or_right: 1or2, where:1~7
  switch(p_num){
    case 1:
      switch(left_or_right){
        case 1:
          for(int i=0;i<LOW;i++){
            p1.setPixelColor(i+LOW*(where-1), p1.Color(r,g,b));
          }
          break;
        case 2:
          for(int i=0;i<LOW;i++){
            p1.setPixelColor(i+LOW*(where-1)+LOW*7, p1.Color(r,g,b));
          }
      }
      break;
    case 2:
      switch(left_or_right){
        case 1:
          for(int i=0;i<LOW;i++){
            p2.setPixelColor(i+LOW*(where-1), p2.Color(r,g,b));
          }
          break;
        case 2:
          for(int i=0;i<LOW;i++){
            p2.setPixelColor(i+LOW*(where-1)+LOW*7, p2.Color(r,g,b));
          }
      }
      break;
    default:
      break;
  }
}

void number(int which_7seg,int num, int r, int g, int b){//which_7seg: 1~4
  int p_num=-1;
  int left_or_right=-1;
  switch(which_7seg){
    case 1:
      p_num=1;
      left_or_right=1;
      break;
    case 2:
      p_num=1;
      left_or_right=2;
      break;
    case 3:
      p_num=2;
      left_or_right=1;
      break;
    case 4:
      p_num=2;
      left_or_right=2;
      break;
    default:
      break;
  }

  
  switch(num){
    case 0:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,5,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      break;
    case 1:
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      break;
    case 2:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,5,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
      break;
    case 3:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
      break;
    case 4:
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
      break;
    case 5:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
      break;
    case 6:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,5,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
      break;
    case 7:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      break;
    case 8:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,5,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
      break;
    case 9:
      absolute(p_num,left_or_right,1,r,g,b);
      absolute(p_num,left_or_right,2,r,g,b);
      absolute(p_num,left_or_right,3,r,g,b);
      absolute(p_num,left_or_right,4,r,g,b);
      absolute(p_num,left_or_right,6,r,g,b);
      absolute(p_num,left_or_right,7,r,g,b);
    break;
    default:
      break;
  }
}

