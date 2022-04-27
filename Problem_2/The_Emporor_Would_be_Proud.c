#include <stdio.h>
#include <stdbool.h>

int decryption(char string[], FILE * output){
    int count = 0;
    while(string[count] != '\0'){
        if(string[count] > 90 && string[count] < 97)
        {
            string[count] = 'A';
        }
        else if(string[count] < 65)
        {
            string[count] = 'a';
        }
        string[count] -= 1;
        count++;
    }
    
    puts(string);
    fprintf(output,"%s ",string);
}



int encyrpt(char string[], FILE * output){
    int count = 0;
    while(string[count] != '\0'){
        if(string[count] > 90 && string[count] < 97)
        {
            string[count] = 'A';
        }
        else if(string[count] > 122)
        {
            string[count] = 'a';
        }
         string[count] += 1;
        count++;
    }
    
    //puts(string);
    fprintf(output,"%s ",string);
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
        decryption(a,output2);
    }
    fclose(input2);
    fclose(output2);



}