#include "libmx.h"

void mx_del_strarr(char ***arr) {
	if (arr != NULL) {
		int i = 0;
		while ((*arr)[i] != NULL) {
			mx_strdel(&(*arr)[i]);
			i++;
		}
		free(*arr);
		*arr = NULL;
	}
}
