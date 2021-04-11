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
		case 2 : zoom (&((Arg) {0})); break;
		case 3 : movestack (&((Arg) {.i = +1 })); break;
		case 4 : movestack (&((Arg) {.i = -1 })); break;
		case 5 : togglefloating (&((Arg) {0})); break;
		case 6 : togglefullscreen (&((Arg) {0})); break;

		/* master actions */
		case 11 : incnmaster (&((Arg) {.i = +1 })); break;
		case 12 : incnmaster (&((Arg) {.i = -1 })); break;

		/* mfact actions */
		case 21 : setmfact (&((Arg) {.f = +0.05})); break;
		case 22 : setmfact (&((Arg) {.f = +0.10})); break;
		case 23 : setmfact (&((Arg) {.f = +0.15})); break;
		case 24 : setmfact (&((Arg) {.f = -0.05})); break;
		case 25 : setmfact (&((Arg) {.f = -0.10})); break;
		case 26 : setmfact (&((Arg) {.f = -0.15})); break;

		/* cfact actions */
		case 31 : setcfact (&((Arg) {.f = +0.15})); break;
		case 32 : setcfact (&((Arg) {.f = +0.30})); break;
		case 33 : setcfact (&((Arg) {.f = +0.45})); break;
		case 34 : setcfact (&((Arg) {.f = -0.15})); break;
		case 35 : setcfact (&((Arg) {.f = -0.30})); break;
		case 36 : setcfact (&((Arg) {.f = -0.45})); break;
		case 37 : setcfact (&((Arg) {0})); break;

		/* set tag */
		case 41 : tag (&((Arg) {.ui = 1 << 0})); break;
		case 42 : tag (&((Arg) {.ui = 1 << 1})); break;
		case 43 : tag (&((Arg) {.ui = 1 << 2})); break;
		case 44 : tag (&((Arg) {.ui = 1 << 3})); break;
		case 45 : tag (&((Arg) {.ui = 1 << 4})); break;
		case 46 : tag (&((Arg) {.ui = 1 << 5})); break;
		case 47 : tag (&((Arg) {.ui = 1 << 6})); break;
		case 48 : tag (&((Arg) {.ui = 1 << 7})); break;
		case 49 : tag (&((Arg) {.ui = 1 << 8})); break;

		/* toggle tag */
		case 51 : toggletag (&((Arg) {.ui = 1 << 0})); break;
		case 52 : toggletag (&((Arg) {.ui = 1 << 1})); break;
		case 53 : toggletag (&((Arg) {.ui = 1 << 2})); break;
		case 54 : toggletag (&((Arg) {.ui = 1 << 3})); break;
		case 55 : toggletag (&((Arg) {.ui = 1 << 4})); break;
		case 56 : toggletag (&((Arg) {.ui = 1 << 5})); break;
		case 57 : toggletag (&((Arg) {.ui = 1 << 6})); break;
		case 58 : toggletag (&((Arg) {.ui = 1 << 7})); break;
		case 59 : toggletag (&((Arg) {.ui = 1 << 8})); break;
	}
}
