#include <string.h>
#include <stdio.h>

void XOR(char * data, size_t data_len, char * key, size_t key_len) {
	int j;
	
	j = 0;
	for (int i = 0; i < data_len; i++) {
		if (j == key_len - 1) j = 0;

		data[i] = data[i] ^ key[j];
		j++;
	}
}

int main(int argc, char *argv[]) {
        char key[] = "compleanno";
        unsigned char kee_payload[] = { 0x52, 0x57, 0x16, 0x45, 0x5f, 0x54, 0x3e, 0x3b, 0x20, 0x30, 0x2b, 0x5b, 0xe, 0x3b, 0x5f, 0x37, 0x50, 0x20, 0x5e, 0x30, 0x57, 0x1, 0x2e, 0x38, 0x5f, 0x3a, 0x15, 0x3b, 0x51, 0x12 };
	    unsigned int kee_len = sizeof(kee_payload);

        if(argc==2) {
		printf("Controllando la licenza: %s\n", argv[1]);
                int sum = 0;
                for (int i = 0; i < strlen(argv[1]); i++) {
			sum+= (int)argv[1][i];	
		}
		if(sum==2037) {
			printf("Accesso Permesso!\n");
            XOR((char *) kee_payload, kee_len, key, sizeof(key));
            printf(kee_payload);
		} else {
			printf("SBAGLIATO!\n");
		}
	} else {
		printf("Uso: <key>\n");
	}
	return 0;
}