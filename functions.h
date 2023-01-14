static int countTilNull(char *argv[], int currArgv){
	int i = 0;
	while (argv[currArgv][i] != '\0'){
		++i;
	}
	return i;
}

static int inStr(int substrLen, char substr[], char *argv[], int currArgv, int argvLen)
{
	if (argv[currArgv][0] != substr[0]) {
		return 0;
	}

	int substrEnd = substrLen - 1;

	for (int i = 0; i <= argvLen; ++i) {
		if (argv[currArgv][i] == substr[i]) {
			if (i == substrEnd) {
				return 1;
			}
		}
	}
	return 0;
}
