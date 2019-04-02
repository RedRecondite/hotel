//Dink!

void main( void )
{
int &mcounter;
screenlock(1);
sp_brain(&current_sprite, 9);
sp_speed(&current_sprite, 2);
sp_nohit(&current_sprite, 0);
sp_distance(&current_sprite, 50);
sp_timing(&current_sprite, 0);
sp_exp(&current_sprite, 25);
sp_base_walk(&current_sprite, 70);
sp_base_death(&current_sprite, 660);
sp_base_attack(&current_sprite, 100);
sp_defense(&current_sprite, 3);
sp_strength(&current_sprite, 8);
sp_touch_damage(&current_sprite, 5);
sp_hitpoints(&current_sprite, 60);
&mcounter = random(10,1);
if (&mcounter == 1)
{
say("Hi!", &current_sprite);
}
if (&mcounter == 2)
{
say("I'm a pig farmer!", &current_sprite);
}
}


void hit( void )
{
sp_target(&current_sprite, &enemy_sprite);
//lock on to the guy who just hit us
//playsound

}

void die( void )
{
if (get_sprite_with_this_brain(9, &current_sprite) == 0)
 {
  //no more brain 9 monsters here, lets unlock the screen

  screenlock(0);
  playsound(43, 22050,0,0,0);
if (&story < 4)
{
&story = 4;
}
freeze(1);
&mcounter = create_sprite(320, -50, 9, 371, 1);
freeze(&mcounter);
sp_base_walk(&mcounter, 370);
sp_speed(&mcounter, 2);
move_stop(&mcounter, 2, 100, 1);
say_stop("`3Ok, we're ready for all of ...", &mcounter);
say_stop("`3... you.", &mcounter);
wait(100);
say_stop("Dude, what is going on?", 1);
wait(100);
say_stop("`3I came down to gather the cosplayers.", &mcounter);
say_stop("`3We're ready for the parade.", &mcounter);
wait(100);
say_stop("What kind of monster is a cosplayer?", 1);
wait(100);
say_stop("I just killed a bunch of my doppelgangers down here.", 1);
wait(100);
say_stop("`3Don't you mean 'dopplegangers'?", &mcounter);
wait(100);
say_stop("`3Anyway, cosplayers are people dress up as their favorite hero characters.", &mcounter);
say_stop("`3I know what you're thinking, and it isn't sexual at all.", &mcounter);
wait(100);
say_stop("`3This is the Dink Smallwood convention.", &mcounter);
say_stop("`3Where we meet up and buy overpriced swag.", &mcounter);
wait(100);
say_stop("...", 1);
wait(100);
say_stop("`3Now, you said you killed them all?", &mcounter);
say_stop("`3Is that why there is so much blood?", &mcounter);
wait(100);
choice_start();
"Admit the terrible truth"
"Lie. Lie with abandon"
choice_end();
if (&result == 1)
{
say_stop("Uh, yes.", 1);
wait(100);
say_stop("I thought they were monsters.", 1);
wait(100);
say_stop("`3And you're the real Dink Smallwood?", &mcounter);
wait(100);
say_stop("Yep, that's me.", 1);
wait(100);
say_stop("`3I'm such a fan. You are a legend.", &mcounter);
wait(100);
say_stop("`3Don't worry, let's mop this place up.", &mcounter);
}
if (&result == 2)
{
say_stop("Uh, no.", 1);
wait(100);
say_stop("A doppelganger monster got loose down here.", 1);
say_stop("It killed and ate everyone.", 1);
wait(100);
say_stop("`3Are you the real Dink Smallwood?", &mcounter);
wait(100);
say_stop("No, my name is Link, er Bigwoood.", 1);
wait(100);
say_stop("`3Ugh.", &mcounter);
wait(100);
say_stop("`3I hate volunteering at cons, this happens every time.", &mcounter);
}
move_stop(&mcounter, 8, -50, 1);
sp_active(&mcounter, 0)
say_stop_xy("`%THE END", 20, 300);
unfreeze(1);
 }

  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 6); 

&save_x = sp_x(&current_sprite, -1);
&save_y = sp_y(&current_sprite, -1);
external("emake","medium");
}

void attack( void )
{
playsound(8, 8000,0,0,0);
&mcounter = random(4000,0);
sp_attack_wait(&current_sprite, &mcounter);
}


