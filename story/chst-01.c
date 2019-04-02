//script for chest with some gold pieces
void main( void)
{
preload_seq(175);
}

void hit ( void )
 {
  say("Haha! I love stealing!", 1);
  //play noise
  int &hold = sp_editor_num(&current_sprite);

  if (&hold != 0)
    {
     //this was placed by the editor, lets make the chest stay open
     editor_type(&hold, 4); 
     editor_seq(&hold, 175);
     editor_frame(&hold, 4);
     //type means show this seq/frame combo as background in the future
    }
  &save_x = sp_x(&current_sprite, -1);
  &save_y = sp_y(&current_sprite, -1);
  &strength += 20;
  &magic += 20;
  &defense += 20;
  //hellfire
  add_magic("item-sfb", 437, 2);
  //lightsword
  add_item("item-sw3", 438, 21);
  &cur_magic = 1;
  arm_magic();
  &cur_weapon = 2;
  arm_weapon();
  draw_status();
  //INCREMENTS STORY
  &story = 2;

  sp_seq(&current_sprite, 175);
  sp_script(&current_sprite, "");
  sp_notouch(&current_sprite, 1);
  sp_nohit(&current_sprite, 1);
  kill_this_task();
 }
