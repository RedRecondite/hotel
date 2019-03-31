//quit

void buttonon( void )
{
  sp_pframe(&current_sprite, 2);
  Playsound(20,22050,0,0,0);
}

void buttonoff( void )
{
  sp_pframe(&current_sprite, 1);
  Playsound(21,22050,0,0,0);
}

void click(void)
{
  Playsound(17,22050,0,0,0);
  kill_game();
}
