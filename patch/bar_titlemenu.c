void
titlemenu(const Arg *arg) {
	FILE *p;
	char c[3], *s;

	if (!(p = popen(titlemenu_cmd, "r")))
		 return;
	s = fgets(c, sizeof(c), p);
	pclose(p);

	if (!s || *s == '\0' || c == '\0')
		 return;

	switch (atoi(c)) {
		/* simple actions */
		case 1 : killclient (&((Arg) {0})); break;
		/*case 2 : killclient (&((Arg) {0})); break;*/
		/*case 3 : killclient (&((Arg) {0})); break;*/
		/*case 4 : killclient (&((Arg) {0})); break;*/
		/*case 5 : killclient (&((Arg) {0})); break;*/
		/*case 6 : killclient (&((Arg) {0})); break;*/
	}
}
