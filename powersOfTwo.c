// Definition for arrays:
// typedef struct arr_##name {
//   int size;
//   type *arr;
// } arr_##name;
//
// arr_##name alloc_arr_##name(int len) {
//   arr_##name a = {len, len > 0 ? malloc(sizeof(type) * len) : NULL};
//   return a;
// }
//
//
arr_integer powersOfTwo(int n) {
   arr_integer c;
   int num=1;int count=0;
   int i=0;
   while(num<=n)
   num=num*2;
   num=num/2;
   int b=n-num;
   if(b==0)
   {
      c=alloc_arr_integer(1);
      c.arr[0]=num;
   }
   else
   {
      do
      {
      while(b<num)
      {
         num=num/2;
      }
         count++;
         b=b-num;
      }while(b!=0);
      arr_integer c=alloc_arr_integer(count+1);
      num=1;
   while(num<=n)
   num=num*2;
   num=num/2;
   int b=n-num;
   if(b==0)
   {
      c=alloc_arr_integer(1);
      c.arr[0]=num;
   }
   else
   {
      c.arr[count]=num;
      do
      {
         i++;
      while(b<num)
      {
         num=num/2;
      }
         b=b-num;
         c.arr[count-i]=num;
      }while(b!=0);
      return c;
   }
}
}