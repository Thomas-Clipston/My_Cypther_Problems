#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int dencrypt(char * string, FILE * output){
    if(strcmp(string,"0") == 0){
      fprintf(output," ");  
    }
    else
    {
        char string2 = atoi(string);
        fprintf(output,"%c",string2);
    }
    
}


int encyrpt(char string[], FILE * output){
    int count = 0;
    while(string[count] != '\0'){
        int ASCII = (int)string[count];
        fprintf(output,"%d ",ASCII);
        count++;
    }
    fprintf(output,"0 ");
    //puts(string);
    
}



int main(void){
    char a[46];
    FILE *output = fopen("Problem.txt","w");
    FILE *input = fopen("input.txt","r");
    while(fscanf(input,"%s",a) != EOF)
    {
        encyrpt(a,output);
    }
    fclose(input);
    fclose(output);

    
    FILE *output2 = fopen("Solution.txt","w");
    FILE *input2 = fopen("Problem.txt","r");
    while(fscanf(input2,"%s",a) != EOF)
    {
        
        dencrypt(a,output2);
        
    }
    fclose(input);
    fclose(output);



}