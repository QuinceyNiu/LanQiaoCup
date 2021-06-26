#include <iostream>
using namespace std;
int main(){
  //26个英文字母
  int a[26]={0};
  int max=0;
  int index,i;
  string arr;
  cin>>arr;
  int length=arr.length();
  for(i=0;i<length;i++){
    //输入一个单词,依次放入一个数组,将字母化为数字存入数组中,若有相同的数字,则a[该数字]值加一
    a[arr[i]-97]+=1;
  }
  //数组中比大小,找最大,若相等,输出字典序最小的那个
  for(i=0;i<26;i++){
    if(a[i]>max){
      max=a[i];
      index=i;
    } 
  }
  //输出数组中数量最多的数字,化为字母,输出字母,并且输出数组的值
  cout<<char(index+97)<<endl;
  cout<<max<<endl;
  return 0;
}