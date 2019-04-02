void main(void)
{
sp_touch_damage(&current_sprite, -1);
}

void touch(void)
{
sp_touch_damage(&current_sprite, 0);
add_magic("item-fb", 437, 1);
say("`%Got Fireball", 1);
Playsound(10,22050,0,0,0);
//shrink to this percent then die
sp_brain_parm(&current_sprite, 5);
sp_brain(&current_sprite, 12);
sp_timing(&current_sprite, 0);

  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
    {
     //this was placed by the editor, lets make it not come back
     editor_type(&hold, 1); 
     //kill food forever
    }
}