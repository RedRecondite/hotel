void main(void)
{
int &bottles = 100;
}

void talk(void)
{
 say("&bottles bottles of beer on the wall...", 1);
}

void hit(void)
{
&bottles -= 1;
if (&bottles <= 0)
{
 &bottles = 0;
 say("Holy crap I took them all down!", 1);
}
if (&bottles > 0)
{
 say("Now there's &bottles bottles of beer on the wall!", 1);
}
}

