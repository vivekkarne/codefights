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
bool isSkewSymmetricMatrix(arr_arr_integer matrix) {
 int len=matrix.size;
 int temp,count;count=0;
 arr_arr_integer matrix1=alloc_arr_arr_integer(len);
 for(int k=0;k<len;k++)
  matrix1.arr[k]=alloc_arr_integer(len);
 int i=0;int j=0;
 for(i=0;i<len;i++)
 {
  for(j=0;j<len;j++)
  {
   matrix1.arr[i].arr[j]=-(matrix.arr[j].arr[i]);

  }
 }
for(i=0;i<len;i++)
 {
  for(j=0;j<len;j++)
  {
  if( matrix1.arr[i].arr[j] == matrix.arr[i].arr[j])
   count++;
   
  }
 }
int p=len*len;
 if(count==p)
  return true;
 else 
  return false;
 
}
