void talk( void )
{
say("Ah, water. Pretty sure I couldn't live without this stuff.",&current_sprite);
&life += 1;
if (&life > &lifemax)
{
&life = &lifemax;
}
Playsound(10,22050,0,0,0);
}

void hit( void )
{
say("This is water, not punch!", 1);
}