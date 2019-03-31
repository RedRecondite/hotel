void main(void)
{
  int &crap;
  int &temphold = &current_sprite;
  sp_brain(&temphold, 0);
  sp_pframe(&temphold, 2);
  sp_frame(&temphold, 2);
  playmidi("denube.mid");
}

void hit(void)
{
  if (get_sprite_with_this_brain(9, &current_sprite) == 0)
  {
    freeze(1);
      wait(400);
      
      preload_seq(271);
      preload_seq(273);
      preload_seq(277);
      preload_seq(279);
      preload_seq(712);
      preload_seq(714);
      preload_seq(716);
      preload_seq(718);
      
      playmidi("battle.mid");
      &crap = create_sprite(380,450, 9, 0, 0);
      freeze(&crap);
      sp_base_walk(&crap, 270);
      sp_base_attack(&crap, 710);
      sp_speed(&crap, 1);
      
      move_stop(&crap, 7,250, 1);
      
      say_stop("`0Hey Cookie the Animal!!", &temphold);
      wait(200);
      say_stop("`#IT'S!! JUST!! COOKIE!!", &crap);
      wait(200);
      say_stop("`0This Lumberjack wants to say hi.", &temphold);
      wait(500);
      sp_dir(1, 2);
      say_stop("Uh-oh.", 1);
      unfreeze(1);
      
      unfreeze(&crap);
      
      sp_script(&crap, "en-cookie");
    screenlock(1);
  }
  say_stop("`0We shall have our revenge.", &carp);
}

void talk(void)
{
  freeze(1)
  say_stop("`0I am the best Tree", &temphold)
  wait(200)
  say_stop("`0My home is on One-Four-Three", &temphold)  
  wait(200);
  say_stop("`0An eternal Meme.", &temphold)
  unfreeze(1);
}