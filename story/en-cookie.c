void main( void )
{
  &temp2hold = &current_sprite;
  int &mcounter;
  
  //Using the built in sprite gold value as a local
  sp_gold(&current_sprite, 0);
    
  sp_brain(&current_sprite, 9);
  sp_speed(&current_sprite, 3);
  sp_range(&current_sprite, 45);
  sp_distance(&current_sprite, 50);
  sp_timing(&current_sprite, 33);
  sp_exp(&current_sprite, 2600);

  sp_base_walk(&current_sprite, 270);
  sp_base_attack(&current_sprite, 710);
  sp_defense(&current_sprite, 18);
  sp_strength(&current_sprite, 25);
  sp_touch_damage(&current_sprite, 14);
  sp_hitpoints(&current_sprite, 310);
  
  sp_target(&current_sprite, 1);
  //  Attack right away.
  
  //v and h stand for vertical and horizontal. a stands absolute.
  //these are used to find what direction dink is from the monster.
  
  int &dam;
  int &h;
  int &ah;
  int &v;
  int &av;
  
  int &mcounter;
  
  int &mholdx;
  int &mholdy;
  int &junk;
  int &mshadow;
  int &mydir;
  
  &mcounter = random(750, 500);
  //  Adjust time before first shot.
  
mainloop:
  wait(100);
  &mcounter -= 100;
  if (&mcounter > 0)
    goto mainloop;
  &mcounter = random(1000, 500);
  //  Adjust time before additonal shots.
  goto shoot;
}




void hit(void)
{
  playsound(28, 22050,0,&current_sprite, 0);
  sp_target(&current_sprite, 1);
  
  &dam = sp_hitpoints(&current_sprite, -1);
  
  if (&dam < 270)
  {
    sp_timing(&current_sprite, 0);
    sp_speed(&current_sprite, 2);
    &speed = 2;
    sp_frame_delay(&current_sprite, 60);
  }
  
  
  if (&dam < 200)
  {
    &speed = 3;
    sp_speed(&current_sprite, 3);
    sp_frame_delay(&current_sprite, 50);
  }
  
  if (&dam < 100)
  {
    &speed = 4;
    sp_speed(&current_sprite, 4);
    sp_frame_delay(&current_sprite, 40);
  }
  
  if (&dam < 50)
  {
    &speed = 5;
    sp_speed(&current_sprite, 5);
    sp_frame_delay(&current_sprite, 30);
    
  }
  
  &mcounter = random(2, 1);
  
  if (&mcounter != 1)
  {

    if (&dam < 80)   
    {
      return;
    }
    if (&dam < 100)
    {
      say("`#Ain't had a fight this fun since 1997.", &CURRENT_SPRITE);
      return;
    }
    
    if (&dam < 140)
    {
      say("`#Yer gon' be pushin' up sapplings when I'm through!", &CURRENT_SPRITE);
      return;
    }
    
    if (&dam < 160)
    {
      say("`#Robj can hit harder than you!", &CURRENT_SPRITE);
      return;
    }
    
    if (&dam < 180)
    {
      say("`#Yer' actually puttin' up a fight, meatsack...", &CURRENT_SPRITE);
      return;
    }
    
    if (&dam < 240)
    {
      say("`#Well ain't you jes' full o' surprises.", &CURRENT_SPRITE);
      
      return;
    }
    
    if (&dam < 280)
    {
      say("`#That kinda tickled.", &CURRENT_SPRITE);
      return;
    }
  }
  
  goto mainloop;
}





void die( void )
{
  &save_x = sp_x(&current_sprite, -1);
  &save_y = sp_y(&current_sprite, -1);
  external("emake","exsam");
  if (screenlock(-1) == 1)
  {
    //no more brain 9 monsters here, lets unlock the screen
    screenlock(0);
    playsound(43, 22050,0,0,0);
  }
  
  int &hold = sp_editor_num(&current_sprite);
  if (&hold != 0)
    editor_type(&hold, 6);
}





void attack( void )
{
  playsound(36, 22050,0,&current_sprite, 0);
  
  &mcounter = random(5000,1000);
  sp_attack_wait(&current_sprite, &mcounter);
  goto mainloop;
}





void shoot( void )
{
shoot:
  &av = sp_y(&current_sprite, -1)
  &ah = sp_x(&current_sprite, -1)
  &v = sp_y(1, -1)
  &h = sp_x(1, -1)
  // aim at whoever the enemy is, not just dink.
  // One quirk to be aware of, if this guy shoots another monster
  // that monster will respond by getting mad at dink, as if he fired the shot.
  
  //Substract monster's absolute v and h from dink's to get relative v and h
  &v -= &av
  &h -= &ah
  
  //now the confusing part, copy the relative v&h into &av and &ah so that
  //it can be reused to save memory and make the program make less sense.
  &av = &v
  &ah = &h
  
  //if true, dink is above the lich.
  if(&v < 0)
  {
    &av *= -1;
    //if true, dink is to the lich's left.
    if(&h < 0)
    {
      &ah *= -1;
      &av *= 2;
      //If true, dink is much more left then up.
      if(&av < &ah)
      {
        sp_dir(&current_sprite, 4);
        goto done;
      }
      &ah *= 4;
      //If true, dink is much more up then left.
      if(&ah < &av)
      {
        sp_dir(&current_sprite, 8);
        goto done;
      }
      //if neither of the last to were true,
      //then dink is about equally up and left.
      sp_dir(&current_sprite, 7);
      goto done;
    }
    //Dink wasn't to the lich's left, so he must be to the right!
    
    &av *= 2;
    //If true, dink is much more right then up.
    if(&av < &ah)
    {
      sp_dir(&current_sprite, 6);
      goto done;
    }
    &ah *= 4;
    //If true, dink is much more up then right.
    if(&ah < &av)
    {
      sp_dir(&current_sprite, 8);
      goto done;
    }
    //if neither of the last to were true,
    //then dink is about equally up and left.
    sp_dir(&current_sprite,9);
    goto done;
  }
  //if dink wasn't above the lich, he must be below it!
  //I trust you have the idea now.
  
  if(&h < 0)
  {
    &ah *= -1;
    &av *= 2;
    if(&av < &ah)
    {
      sp_dir(&current_sprite, 4);
      goto done;
    }
    &ah *= 4;
    if(&ah < &av)
    {
      sp_dir(&current_sprite, 2);
      goto done;
    }
    sp_dir(&current_sprite, 1);
    goto done;
  }
  &av *= 2;
  if(&av < &ah)
  {
    sp_dir(&current_sprite, 6);
    goto done;
  }
  &ah *= 4;
  if(&ah < &av)
  {
    sp_dir(&current_sprite, 2);
    goto done;
  }
  sp_dir(&current_sprite, 3);
  
  //Now that the lich is facing the right way, it works almost like dink's
  //fireball spell. In my d-mod the fireball looks the same from evrey side
  //so it doesn't add the fireballs direction to the base seq.
  
done:
  &mydir = sp_dir(&current_sprite, -1);
  
  //disallow diagonal fireballs for now
  
  if (sp_dir(&current_sprite, -1) == 1)
    sp_dir(&current_sprite, 4);
  if (sp_dir(&current_sprite, -1) == 3)
    sp_dir(&current_sprite, 6);
  if (sp_dir(&current_sprite, -1) == 7)
    sp_dir(&current_sprite, 4);
  if (sp_dir(&current_sprite, -1) == 9)
    sp_dir(&current_sprite, 6);
  
  &mholdx = sp_x(&current_sprite, -1);
  &mholdy = sp_y(&current_sprite, -1);
  
  wait(300);
  
  if (&mydir == 1)
  {
    //    &mholdx -= 30;
    //    &mholdy -= 30;
    //    You can do this to adjust this to fine-tune where the shot comes from.
    //    For example, you probably don't want the shot to come out of the guy's
    //    head (unless it's a psyonic bolt or something) or out of thin air next to him
    //    Play with the numbers ontil it looks good.
    //    I've left them out and as you can see, it looks a little off.
    
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    //    sp_seq(&junk, 163);
    //    If the shot looks different going each way,
    //    take out the one at the end andput sp_seq here...
    sp_mx(&junk, -4);
    sp_my(&junk, +4);
  }
  
  if (&mydir == 4)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    //    ...and here, etc.
    sp_dir(&junk, 4);
  }
  
  if (&mydir == 6)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    sp_dir(&junk, 6);
  }
  
  if (&mydir == 3)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    sp_mx(&junk, +4);
    sp_my(&junk, +4);
  }
  
  if (&mydir == 2)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    sp_dir(&junk, 2);
  }
  
  if (&mydir == 7)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    sp_mx(&junk, -4);
    sp_my(&junk, -4);
  }
  
  if (&mydir == 8)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    sp_dir(&junk, 8);
  }
  
  if (&mydir == 9)
  {
    &junk = create_sprite(&mholdx, &mholdy, 11, 170, 1);
    sp_mx(&junk, +4);
    sp_my(&junk, -4);
  }
  
  sp_seq(&junk, 170);
  
  //create fake shadow effect
  playsound(17, 3000, 0, &junk, 0);
  
  sp_timing(&junk, 0);
  sp_speed(&junk, 4);
  sp_strength(&junk, 25);
  sp_range(&junk, 10);
  //this makes it easier to hit stuff
  sp_flying(&junk, 1);
  //Here we apply Firespin to the shot, for shotception
  sp_script(&junk, "dam-fspn");
  sp_nohit(&junk, 1);
  //when the fireball hits something, it will look to this script, this way
  //we can burn trees when appropriate
  &mshadow = create_sprite(&mholdx, &mholdy, 15, 432, 3);
  sp_brain_parm(&mshadow, &junk);
  sp_nohit(&mshadow, 1);
  sp_que(&mshadow, -500);
  //will be drawn under everything
  
  //set fireball to not be able to damage the shooting enemy
  sp_brain_parm(&junk, &current_sprite);
  
  
  
  goto mainloop;
}
