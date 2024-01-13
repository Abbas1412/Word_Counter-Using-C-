#pragma once
int stzlen(char* ch) {

	int count = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		count++;
	}

	return count;
}


void stzcat(char* str, char str2[]) {

	const int size = stzlen(str) + stzlen(str2) + 1;
	int k = 0;
	for (int i = stzlen(str); i < size; i++) {
		str[i] = str2[k++];
	}

}


void stzcpy(char* ch, char* ch2) {

	int i = 0;
	while (i < stzlen(ch2)) {
		ch[i] = ch2[i];
		i++;
	}
	ch[i] = '\0';
}


int stzcmp(char* ch, char* ch2) {

	int s1 = stzlen(ch);
	int s2 = stzlen(ch2);

	for (int i = 0; i < s1; i++) {
		if (ch[i] < ch2[i]) {
			return -1;
		}

		else if (ch[i] > ch2[i]) {
			return 1;
		}
	}

	if (s1 > s2) {
		return 1;
	}

	else if (s1 < s2) {
		return -1;
	}

	return 0;
}