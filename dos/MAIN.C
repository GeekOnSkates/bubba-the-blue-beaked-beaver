#include <Terminator.h>

char hero[20];
char gender[20];
char adj1[20];
char noun1[20];
char adj2[20];
char past1[20];
char pln1[20];
char verb1[20];
char adj3[20];
char adj4[20];
char verb2[20];
char noun2[20];
char past2[20];
char noun3[20];
char play_again[6];
char i;

void play(void);

void clear_strings() {
	for (i=0; i<20; i++) {
		hero[i] = 0;
		gender[i] = 0;
		adj1[i] = 0;
		noun1[i] = 0;
		adj2[i] = 0;
		past1[i] = 0;
		pln1[i] = 0;
		verb1[i] = 0;
		adj3[i] = 0;
		adj4[i] = 0;
		verb2[i] = 0;
		noun2[i] = 0;
		past2[i] = 0;
		noun3[i] = 0;
		if (i < 6) play_again[i] = 0;
	}
}

void ask(const char *question, char *answer) {
	text_color(GREEN);
	printf("%s\r\n    ", question);
	text_color(WHITE);
	get_string(answer, 20);
	printf("\r\n");
}

void play() {
	clear_strings();
	clear();
	ask("Please enter a name:", hero);
	ask("Not to be weird, but is that a him, her, or it?", gender);
	clear();
	ask("Enter a noun (person, place or thing):", noun1);
	ask("Enter another noun:", noun2);
	ask("Cool, now another noun:", noun3);
	ask("Okay, now enter a plural noun (more than one):", pln1);
	clear();
	ask("Enter an adjective (describing word):", adj1);
	ask("Enter another adjective:", adj2);
	ask("Enter another adjective:", adj3);
	ask("Enter one more adjective:", adj4);
	clear();
	ask("Enter a verb (action word):", verb1);
	ask("Enter another verb:", verb2);
	ask("Enter a verb in past tense:", past1);
	ask("Enter another verb in past tense:", past2);
	
	clear();
	text_color(RED);
	printf("%s the %s-nosed %s,\r\n\r\n", hero, adj1, noun1);
	text_color(WHITE);
	printf("%s the %s-nosed %s,\r\n", hero, adj1, noun1);
	printf("had a very %s nose.\r\n", adj2);
	printf("And if you ever %s it,\r\n", past1);
	printf("you would even say it blows.\r\n");
	printf("All of the %s %s,\r\n", adj3, pln1);
	printf("used to %s and call %s names.\r\n", verb1, gender);
	printf("They never let poor %s,\r\n", hero);
	printf("join in any %s games.\r\n", noun1);
	printf("Then one %s Christmas Eve,\r\nSanta came to say,\r\n", adj4);
	printf("%s with your nose so bright,\r\n", hero);
	printf("Won't you %s my %s tonight?\r\n", verb2, noun3);
	printf("Then all the %s loved %s,\r\n", pln1, gender);
	printf("as they %s out with glee,\r\n", past2);
	printf("%s the %s-nosed %s,\r\n", hero, adj1, noun1);
	printf("You'll go down in history!\r\n\r\n");
	printf("Type DONE to play again or leave blank to exit.\r\n");
	
	get_string(play_again, 5);
	if (!(play_again[0] == 'd' || play_again[0] == 'D')
		|| !(play_again[1] == 'o' || play_again[1] == 'O')
		|| !(play_again[2] == 'n' || play_again[2] == 'N')
		|| !(play_again[3] == 'e' || play_again[3] == 'E')
	) play();
}

int main() {
	startup();
	clear();
	text_color(BLUE);
	printf("BUBBA THE BLUE-BEAKED BEAVER\r\n\r\n");
	text_color(WHITE);
	printf("Ahh, the classic Christmas song we all sang as kids...\r\n");
	printf("wait, what?  That's not how it goes?  That's weird...\r\n");
	printf("oh well, now's your chance to do it your way!\r\n\r\nHere's how to play:\r\n");
	printf("The game will ask you for a bunch of words.  Type the word,\r\n");
	printf("and press ENTER to move on to the next question.  Then,\r\n");
	printf("it will take your answers and put them into a funny poem.\r\n");
	printf("The funnier the better!  Have fun!\r\n\r\n");
	text_color(GREEN);
	printf("Merry Christmas!\r\nHappy Honnukah!\r\nWhatever you celebrate,\r\nhave a good one! :)\r\n\r\n");
	text_color(RED);
	printf("The Geek on Skates\r\n\r\n");
	text_color(WHITE);
	printf("Press ENTER to continue.  ");
	get_char();
	play();
	clear();
	done();
	return 0;
}
