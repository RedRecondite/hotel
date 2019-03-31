void main ()
{
  &save_x = &current_sprite;
  
  int &mholdx = sp_x(&current_sprite, -1);
  int &mholdy = sp_y(&current_sprite, -1);
  
  int &mcrap;
  int &scrap;
  int &crapx;
  int &crapy;
  
  
  &mholdy += 50;
  int &junk;
  int &mydir = 2;
  
loop:
  wait(25);
  &mholdx = sp_x(&current_sprite, -1);
  &mholdy = sp_y(&current_sprite, -1);
  
  if (&mydir == 1)
  {
    &mydir = 4;
    goto make;
  }
  
  if (&mydir == 4)
  {
    &mydir = 7;
    goto make;
  }
  
  if (&mydir == 7)
  {
    &mydir = 8;
    goto make;
  }
  
  if (&mydir == 8)
  {
    &mydir = 9;
    goto make;
  }
  
  if (&mydir == 9)
  {
    &mydir = 6;
    goto make;
  }
  
  if (&mydir == 6)
  {
    &mydir = 3;
    goto make;
  }
  
  if (&mydir == 3)
  {
    &mydir = 2;
    goto make;
  }
  
  if (&mydir == 2)
  {
    &mydir = 1;
    goto make;
  }
  
make:
  if (&mydir == 1)
  {
    &mholdx -= 30;
    &junk = create_sprite(&mholdx, &mholdy, 17, 974, 1);
    sp_seq(&junk, 504);
    sp_mx(&junk, -6);
    sp_my(&junk, +4);
  }
  if (&mydir == 4)
  {
    &mholdx -= 30;
    &junk = create_sprite(&mholdx, &mholdy, 17, 974, 1);
    sp_seq(&junk, 504);
    sp_dir(&junk, 4);
  }
  if (&mydir == 7)
  {
    &mholdx -= 30;
    &junk = create_sprite(&mholdx, &mholdy, 17, 974, 1);
    sp_seq(&junk, 504);
    sp_mx(&junk, -6);
    sp_my(&junk, -4);
  }
  if (&mydir == 8)
  {
    &junk = create_sprite(&mholdx, &mholdy, 17, 978, 1);
    sp_seq(&junk, 508);
    sp_dir(&junk, 8);
  }
  if (&mydir == 9)
  {
    &mholdx += 30;
    &junk = create_sprite(&mholdx, &mholdy, 17, 976, 1);
    sp_seq(&junk, 506);
    sp_mx(&junk, +6);
    sp_my(&junk, -4);
  }
  if (&mydir == 6)
  {
    //  &mholdy -= 10;
    &mholdx += 30;
    &junk = create_sprite(&mholdx, &mholdy, 17, 976, 1);
    sp_seq(&junk, 506);
    sp_dir(&junk, 6);
  }
  if (&mydir == 3)
  {
    &mholdx += 30;
    &junk = create_sprite(&mholdx, &mholdy, 17, 976, 1);
    sp_seq(&junk, 506);
    sp_mx(&junk, +6);
    sp_my(&junk, +4);
  }
  if (&mydir == 2)
  {
    &junk = create_sprite(&mholdx, &mholdy, 17, 972, 1);
    sp_seq(&junk, 502);
    sp_dir(&junk, 2);
  }
  
  playsound(17, 8000,0,&junk,0);
  sp_timing(&junk, 0);
  sp_speed(&junk, 6);
  sp_nohit(&junk,1);
  sp_strength(&junk, 18);
  sp_range(&junk, 10);
  sp_flying(&junk, 1);
  sp_script(&junk, "dam-fire");
  sp_brain_parm(&junk, &current_sprite);
  sp_brain_parm2(&junk, &temp2hold);
  goto loop;
}

void damage( void )
{
  playsound(18, 8000,0,0,0);
  
  &crapx = sp_x(&current_sprite, -1);
  &crapy = sp_y(&current_sprite, -1);
  
  if (&missile_target == 0)
  {
    sp_active(&current_sprite, 0);
  }
  
  if (sp_brain(&missile_target, -1) == 0)
  {
    sp_active(&current_sprite, 0);
  }
  if (sp_brain(&missile_target, -1) == 6)
  {
    sp_active(&current_sprite, 0);
  }
  if (sp_hitpoints(&missile_target, -1) > 0)
  {
    goto loop;
  }
  &scrap = create_sprite(&crapx , &crapy, 0 , 167, 1);
  sp_seq(&scrap, 167);
  sp_pseq(&scrap, 167);
  sp_frame(&scrap, 1);
  sp_brain(&scrap, 7);
  sp_nohit(&scrap, 1);
  
  &mcrap = sp_y(&scrap, -1);
  &mcrap -= 35;
  sp_y(&scrap, &mcrap);
  goto loop;
}
