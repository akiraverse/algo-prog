#include <stdio.h>

int main() {
	char word[101];

	scanf("%100[^\n]", word);

	printf("#include <stdio.h>\nint main()\n{\n    printf(\"%%s\\n\",\"%s\");\n    return 0;\n}\n", word);

	return 0;
}