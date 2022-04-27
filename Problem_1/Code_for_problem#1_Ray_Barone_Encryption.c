#include <stdio.h>
#include <stdbool.h>

int decryption(char string[], FILE * output){
    int max = 0;
    while(string[max] != '\0'){
        string[max];
        max++;
    }
    max--;

    char temp = string[0];
    string[0] = string[max];
    string[max] = temp;
    
    puts(string);
    fprintf(output,"%s ",string);
}


int encyrpt(char string[], FILE * output){
    int max = 0;
    while(string[max] != '\0'){
        string[max];
        max++;
    }
    max--;

    char temp = string[0];
    string[0] = string[max];
    string[max] = temp;
    
    
    fprintf(output,"%s ",string);
}



int main(void){
    char a[46];
    //encryption
    FILE *output = fopen("Problem.txt","w");
    FILE *input = fopen("Input.txt","r");
    while(fscanf(input,"%s",a) != EOF){
        encyrpt(a,output);
    }
    fclose(input);
    fclose(output);

    //decryption
    FILE *output2 = fopen("Solution","w");
    FILE *input2 = fopen("Problem.txt","r");
    while(fscanf(input2,"%s",a) != EOF){
        decryption(a,output2);
    }
    fclose(input2);
    fclose(output2);



}