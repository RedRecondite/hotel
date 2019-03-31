//runs after main.c
void main( void )
{
  //color of screen behind title, 0 is black 255 is white
  fill_screen(255);
  //unlock screen if dink died in a screenlocked room
  screenlock(0);

  //mouse pointer
  sp_seq(1, 0);
  sp_brain(1, 13);
  sp_pseq(1,10);
  sp_pframe(1,8);
  sp_que(1,20000);
  sp_noclip(1, 1);

  //title screen
  int &crap = create_sprite(426,344, 0, 453, 1);
  sp_que(&crap, -800);
  sp_noclip(&crap, 1);

  //start
  &crap = create_sprite(76, 434, 14, 192, 1);
  sp_script(&crap, "start-1");
  sp_noclip(&crap, 1);
  sp_touch_damage(&crap, -1);

  //load
  &crap = create_sprite(314, 434, 14, 193, 1);
  sp_script(&crap, "start-2");
  sp_noclip(&crap, 1);
  sp_touch_damage(&crap, -1);

  //exit
  &crap = create_sprite(560, 434, 14, 194, 1);
  sp_noclip(&crap, 1);
  sp_script(&crap, "start-3");
  sp_touch_damage(&crap, -1); 

  //is this necessary? kept it just to be safe.
  //(who the hell runs dink off a CD?)
  stopcd();
  kill_this_task();
}
