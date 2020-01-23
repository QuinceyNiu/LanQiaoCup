#include<iostream> 
#include<cstring>
#include<cstdio> 
int main()  
{  
    char a[100];
    int i,j,k,l;  
    char b[20][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};  
    char c[20][10]={"","","shi","bai","qian","wan","shi","bai","qian","yi","shi"};
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){  
        j=a[i]-48;
        if(j==0){
            if(i+1<l)
                if(a[i+1]!=48)
                    printf("%s ",b[j]);
        }  
        else if(j == 1 && i == 0 && (l-i == 10 || l-i == 6 || l- i == 2)){
        	int k=a[i+1]-48;  //要输出"十几" 所以个位有的话也要输出 
        	if(k){
        		printf("shi %s %s ",b[k],c[l-(i+1)]); //个位的单位就是"wan" 
			}
        	else printf("shi %s ",c[l-(i+1)]);
        	i++;	//相当于一次输出了两位 记得i++ 
		}
        else 
            printf("%s %s ",b[j],c[l-i]);
    }  
    printf("\n");  
    return 0;  
}