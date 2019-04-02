void main(void)
{
sp_hard(&current_sprite, 1);
sp_touch_damage(&current_sprite, 1);
wait(1);
draw_hard_sprite(&current_sprite);
}

void touch(void)
{
sp_touch_damage(&current_sprite, 0);
move(1, 2, 231, 0);
say("I need a claw sword to cut this!", 1);
wait(500);
sp_touch(damage(&current_sprite, 1);
}

void hit(void)
{
int &hold = compare_weapon("item-sw2");
if (&hold == 1)
{
sp_hard(&current_sprite, 1);
draw_hard_map();
  playsound(43, 22050,0,0,0);
&hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
  editor_type(&hold, 1); 
sp_active(&current_sprite, 0);
}
}
