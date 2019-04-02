//script for burnable tree to spawn a staircase access for screen 143
//not used due to lack of screen 143 during the D-Mod Jam development phase countdown
void main( void )
{
  preload_seq(167);
  
}

void die( void)
{
  sp_seq(&missile_target, 20);
  playsound(6, 8000,0,&missile_target,0);
  wait(500);
  wait(500);
  playsound(43, 22050,0,0,0);
  
  &save_x = sp_x(&current_sprite, -1);
  &save_y = sp_y(&current_sprite, -1);
  int &mcrap = create_sprite(&save_x, &save_y, 7, 167, 1);
  sp_seq(&mcrap, 143);
  
  sp_brain(&current_sprite, 0);
  sp_size(&current_sprite, 100);
  sp_touch_damage(&current_sprite, -1);
  sp_seq(&current_sprite, 0);
  sp_pseq(&current_sprite, 89);
  sp_pframe(&current_sprite, 10);
  
}

void touch(void)
{
  
  if (&life < 1) return;
    playsound(39, 22050,0,0,0);
  script_attach(1000);
  &player_map = 175;
  sp_x(1, 313);
  sp_y(1, 320);
  load_screen(175);
  draw_screen();
  kill_this_task();
}
