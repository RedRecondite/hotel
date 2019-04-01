VOID MAIN ( VOID )
{
	lol:
	script_attach(1000);
	wait(2000);
	say("Never gonna give you up" , 1);
	wait(2000);
		say("Never gonna let you down " , 1);
		wait(2000);
			say("Never gonna run around and desert you " , 1);
			wait(2000);
				say("Never gonna make you cry" , 1);
				wait(2000);
					say("Never gonna say goodbye" , 1);
					wait(2000);
						say("Never gonna tell a lie and hurt you" , 1);
						script_attach(1000);
						goto lol;
						
}