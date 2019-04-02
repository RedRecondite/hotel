void talk(void)
{
int &dude = sp(2);
int &old = sp(3);
freeze(1);
choice_start();
"What's going on here?"
"Goodbye"
choice_end();
if (&result == 1)
{
say_stop("What's going on here?", 1);
wait(100);
sp_pseq(&gal, 233);
say_stop("`5Pfft, like you don't know?", &old);
wait(100);
sp_pseq(&dude, 413);
say_stop("`3*whispers* Maybe he's just dedicated to the role *whispers*", &dude);
wait(100);
say_stop("`5Oh! I got it!", &old);
wait(100);
say_stop("I don't understand.", 1);
wait(100);
say_stop("`5Yes, of course, he, errr ... You, wouldn't.", &old);
wait(100);
say_stop("`5Welcome to DinkCon 2019!", &old);
wait(100);
say_stop("`3T-Shirts, stuffed monsters, anything you could want!", &dude);
wait(100);
say_stop("Ok...", 1);
}
unfreeze(1);
}