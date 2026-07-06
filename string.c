1.STRCAT:

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=(char*)malloc(50*(sizeof(char))),*s2=(char*)malloc(50*(sizeof(char)));
    int i=0;
   
    scanf("%s %s",s1,s2);
     
     for(i=0;s1[i]!='\0';i++);
    for(int k=0;s2[k]!='\0';k++){
        s1[i] = s2[k];
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%c",s1[j]);
    }
    return 0;
}

2.STRNCAT:
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=(char*)malloc(50*(sizeof(char))),*s2=(char*)malloc(50*(sizeof(char)));
    int i=0,n;
   
    scanf("%s %s",s1,s2);
     scanf("%d",&n);
     for(i=0;s1[i]!='\0';i++);
    for(int k=0;k<n;k++){
        s1[i] = s2[k];
        i++;
    }
    for(int j=0;j<i;j++){
        printf("%c",s1[j]);
    }
    return 0;
}

3.STRNCPY

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=(char*)malloc(50*(sizeof(char))),*s2=(char*)malloc(50*(sizeof(char)));
    int i=0,n;
   
    scanf("%s %s",s1,s2);
     scanf("%d",&n);
    for( i=0;i<n;i++){
        s1[i] = s2[i];
    }
    for(int j=0;j<i;j++){
        printf("%c",s1[j]);
    }
    return 0;
}
4.STRNCMP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=(char*)malloc(50*(sizeof(char))),*s2=(char*)malloc(50*(sizeof(char)));
    int i=0;
    scanf("%s %s",s1,s2);
    int n;
    scanf("%d",&n);
    for( i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            printf("%d",s1[i]-s2[i]);
            return 0;
        }
    }
  
        printf("0");
    
    return 0;
}

5.STRCMP

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=(char*)malloc(50*(sizeof(char))),*s2=(char*)malloc(50*(sizeof(char)));
    int i=0;
    scanf("%s %s",s1,s2);
    for( i=0;s1[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            printf("%d",s1[i]-s2[i]);
            return 0;
        }
    }
  
        printf("0");
    
    return 0;
}

6.STRCPY

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s1=(char*)malloc(50*(sizeof(char))),*s2=(char*)malloc(50*(sizeof(char)));
    int i=0;
    scanf("%s %s",s1,s2);
    for( i=0;s2[i]!='\0';i++){
        s1[i] = s2[i];
    }
    for(int j=0;j<i;j++){
        printf("%c",s1[j]);
    }
    return 0;
}

7.STRLEN

#include <stdio.h>
#include <string.h>


int main()
{
    char *s1;
    int i=0;
    scanf("%s",s1);
    for( i=0;s1[i]!='\0';i++);
    printf("%d",i);

    return 0;
}
