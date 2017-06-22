//
//  main.c
//  test0622
//
//  Created by 20161104569 on 17/6/22.
//  Copyright © 2017年 20161104569. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE  *fp;
    //FILE  *fw;
    char temp1[80];
    char temp2[80];
    char lat[10];
    int i;
    fp=fopen("//Users//a20161104569//Desktop//test0622 //GPS170510.log","r+");
    fscanf(fp,"%s%s",temp1,temp2);
    printf("结果:%s\n%s\n",temp1,temp2);
    for(i=0;i<8;i++)
        lat[i]=temp1[i+16];
    lat[8]='\0';
    printf("纬度:%s\n",lat);
    fclose(fp);
    return 0;
}
