
char sht_controll();
char ra_type(char);
char fpga_ver(char);
char sht_sts(char);


//int sum(int, int);	/* プロトタイプ宣言 */
//int mask(void);
/*
int main(void)
{   
    sht_controll();
//    printf("%d",MASK_CODE);
//    printf("BB\n");
//    mask;
//    int maskcode = MASK_CODE;
/*
    printf("%d\n",MASK_CODE);
    if(MASK_CODE & CODE1){
        printf("OK\n");
    }
    if(!(MASK_CODE & CODE2)){
        printf("NG\n");
    }
*/
//    printf("AA\n");
/*    
    int sts;
	sts = sum(MAX, MIN);
	printf("%d\n",sts);

	int score;
//	printf("スコアを入力して\n");
//	scanf("%d",&score);
    score = 60;    
	if (score < 100){
	    printf("あなたは%d点です\n",score);
	}
	else{
	printf("あなたのスコアは100点です");
	}
*/
	
	return 0;
}
/*
int sum(int max, int min)
{
    int value;
    value = (max + min)/2;
	return value;
}
*/


/*
int mask(void){
    
//    printf("OK\n");
//    unsigned char a;
    int a;
    a = MASK_CODE;
//    printf("%\d",a);
    return a;
//    return 0;
}

*/

char ra_type(char as6){
    char ra_type;
    ra_type = ES6;
    return ra_type;
}

char fpga_ver(char fpgaver){
    char fpga_ver;
    fpga_ver = V13;
    return fpga_ver;
}

char sht_sts(char shtsts){
    char sht_sts;
    sht_sts = SHT_OPEN;
    return sht_sts;
}

char sht_controll(void){
    char ra_type2, fpga_ver, sht_sts;
    ra_type2 = char ra_type(char);
    
    printf("%d\n",ra_type2);
    printf("%d\n",fpga_ver);
    printf("%d\n",sht_sts);
    if(ra_type2){
//        printf("%d\n",ra_type);
        if(fpga_ver){
            if(sht_sts){
                printf("OK1\n");
            }
            else{
                printf("NG1\n");
            }
        }
        else{
            printf("NG2\n");
        }
    }
    else{
        if(sht_sts){
            prnitf("OK2\n");
        }
        else{
            printf("%d\n",ra_type);
            printf("NG3\n");
        }
    }
return 0;
    }