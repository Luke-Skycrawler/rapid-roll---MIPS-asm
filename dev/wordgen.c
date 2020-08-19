#include <stdio.h>
int main(void){
    // FILE *f;
    char str[25];
    do{
        scanf("%s",str);
        // fopen("a.txt","w");
        for(int i=0;str[i];i++){
            //fprintf(f,",0x70%d",'a'+(int)str[i]);
            printf(",0x70%x",(int)str[i]);
        }
        scanf("%c",str);
    }
    while(str[0]!='q');
    // fclose(f);
    system("pause");
    return 0;
}