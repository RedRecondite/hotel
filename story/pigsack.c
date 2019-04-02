//sack of grain.  again more or less copied from the original game.

void main( void )
{
sp_touch_damage(&current_sprite, -1);
}

void hit(void)
{
say("I hate you, sack of feed!", 1);
}

void talk(void)
{
//removing the freezing because it can lock up the game if you pick it up and talk to it at the same time
//freeze(1);
say_stop("*inhales*", 1);
say_stop("Mmm, the smell of pig feed. Makes me hungry.", 1);
wait(500);
say_stop("...I hope no one heard that.", 1);
//unfreeze(1);
}


void touch(void)
{
//dink touched this sprite
Playsound(10,22050,0,0,0);
sp_brain_parm(&current_sprite, 10);
sp_brain(&current_sprite, 12);
sp_touch_damage(&current_sprite, 0);
sp_timing(&current_sprite, 0);
add_item("item-pig",438, 2);
say("I now have a sack of pig feed.  Aaah, memories.", 1);
  //kill this item so it doesn't show up again for this player
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 1); 

}
