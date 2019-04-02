void talk( void )
{
say("Ah, water. Pretty sure I couldn't live without this stuff.", 1);
&life += 1;
if (&life >= &lifemax)
{
&life = &lifemax;
wait(700);
say("`4Ah, humans! Pretty sure I could live without them consuming me.", &current_sprite);
}
Playsound(10,22050,0,0,0);
}

void hit( void )
{
say("This is water, not punch!", 1);
}