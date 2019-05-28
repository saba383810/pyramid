#include<stdio.h>
int main (){
//初期化
  int cnt,s_cnt;
  int blank = 0;
  int num = 0;
  int b_cnt = 0;
  int C_cnt = 0;
  int W_cnt = 0;
  //処理
  printf("ピラミッドの段数をきめてください(1~99)\n");
  scanf("%d",&num);
  W_cnt = num;
  while(W_cnt>0){
      W_cnt = W_cnt / 10;
      C_cnt++;
  }
  switch(C_cnt){
      case 0:
      printf("〇---------------〇\n|なんで！！      |\n|ちゃんとしてよ！|\n|いじわる！!     |\n〇---------------〇\n　　( ｀ー´)ノ\n");
      break;
      case 1:
      printf("〇---------------〇\n|%dですね！！     |\n|わかりました！！|\n|えい！！！      |\n〇---------------〇\n　　( ｀ー´)ノ\n", num);
      break;
      case 2:
      printf("〇---------------〇\n|%dですね！      |\n|わかりました！！|\n|えい！！！      |\n〇---------------〇\n　　( ｀ー´)ノ\n", num);
      break;
      default:
      printf("〇---------------〇\n|なんで！？　     |\n|もうしらない！！ |\n|ぷいっ！！ 　    |\n〇---------------〇\n　　( ｀ー´)ノ\n");
      break;
  }
if(100>num){
    for(cnt = 1;cnt<=num;cnt++){
        blank = num - cnt;
        for(b_cnt = 1;b_cnt <= blank;b_cnt++){
            printf(" ");
        }
        s_cnt = 2*cnt-1;
        for(b_cnt = 1;b_cnt <= s_cnt;b_cnt++){
            printf("*");
        }
        printf("\n");
        }
         }    
}
