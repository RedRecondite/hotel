void main(void)
{
sp_base_walk(&current_sprite, 580);
sp_speed(&current_sprite, 1);
sp_brain(&current_sprite, 16);
}

void talk(void)
{
freeze(1);
freeze(&current_sprite);
choice_start();
"Talk to the wizard"
"Walk away"
choice_end();
if (&result == 1)
{
say_stop("Why hello there, wizard.", 1);
wait(100);
say_stop("`%Hi person playing a computer game on your PC, phone, or tablet.", &current_sprite);
wait(100);
say_stop("!", 1);
wait(100);
say_stop("`%This D-Mod is dedicated to Dukie.", &current_sprite);
say_stop("`%Dukie was a Dink Smallwood fan from the old, old days around 1998.", &current_sprite);
wait(100);
say_stop("`%He created a D-Mod called Valley of the Talking Trees.", &current_sprite);
wait(100);
say_stop("That one had the duck from Friends?", 1);
wait(100);
say_stop("`%That's the one!", &current_sprite);
wait(100);
say_stop("`%Anyway, he always talked about creating a sequel.", &current_sprite);
say_stop("`%Called The Dink Hotel.", &current_sprite);
wait(100);
say_stop("Hey, that's what I'm playing right now.", 1);
say_stop("What a nice coinkydink.", 1);
wait(100);
say_stop("`%He never got around to finishing it.", &current_sprite);
}
say_stop("`%And he passed away from cancer in 2011.", &current_sprite);
wait(100);
say_stop("I'm so sorry.", 1);
wait(100);
say_stop("`%This D-Mod is dedicated to Dukie.", &current_sprite);
say_stop("`%He was a really funny guy and a great friend to all.", &current_sprite);
wait(100);
say_stop("`%He is missed.", &current_sprite);
wait(100);
say_stop("I miss him, too.", 1);
wait(100);
say_stop("`%One last thing - the title screen song.", &current_sprite);
wait(100);
say_stop("`%It is called Hard Rock Hallelujah, from Lordi.", &current_sprite);
wait(100);
say_stop("`%Dukie had this to say about it back in 2006:", &current_sprite);
wait(100);
say_stop("`1Normally I don't listen to this type of music", &current_sprite);
say_stop("`1but after a couple dozen of listenings, it grew on me.", &current_sprite);
wait(100);
say_stop("I have to agree!", 1);
}
unfreeze(1);
unfreeze(&current_sprite);
}