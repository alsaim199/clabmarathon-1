#include <cstdio>

int main() {
    FILE *file = fopen("intput.txt", "r");
    int a,b,c;

    while (fscanf(file,"%d %d",&a,&b) != EOF) {
        // Process the character
		c=2*a*b;
		printf("%d\n",c);
    }

    fclose(file);
    return 0;
}
