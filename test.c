#include <stdio.h>
int isMirrorNum(int num);

int main() {
   int N;
   scanf("%d",&N);

   int cnt=0;
   for(int t=0;t<N;t++){
      int num;
      scanf(" %d",&num);
      cnt += isMirrorNum(num)-1;

   }

   printf("count : %d",cnt);
}

int isMirrorNum(int num){
    // 275572
   int digits[6];
   int length=0;
   int temp = num;
   for (int l=0;temp > 0;l++)
   {
      length++;
      temp = temp/10;
   }
   printf("length %d\n",length);
   // 1234
   int rst = 1;

   for (int k=length-1;k>=0;k--)
   {
      digits[k] = num%10;
      num = num/10;
   }
   // 1234
   for (int i=0;i < length/2;i++)
   {
      if (digits[i] != digits[length-1-i])
      {
         rst = 0;
         //printf("\ndigi[%d] is %d\n digi [%d] is %d\n",i,digits[i],length-1-i,digits[length-1-i]);
      }

   }

return rst+1;
}