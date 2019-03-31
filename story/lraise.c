//Modified Level-Up script

void raise(void)
{
  
  playsound(33, 22000, 0, 0, 0);
  script_attach(1000);
  playsound(10,22050, 0, 0, 0);
  wait(1000);
  &level += 1

//Stat bonus! Check if Dink's level is a multiple of 3.
  int &lvboost = 0; 

  if (&level == 3)
  {
    &lvboost = 1;
  }
  if (&level == 6)
  {
    &lvboost = 1;
  }
  if (&level == 9)
  {
    &lvboost = 1;
  }
  if (&level == 12)
  {
    &lvboost = 1;
  }
  if (&level == 15)
  {
    &lvboost = 1;
  }
  if (&level == 18)
  {
    &lvboost = 1;
  }
  if (&level == 21)
  {
    &lvboost = 1;
  }
  if (&level == 24)
  {
    &lvboost = 1;
  }
  if (&level == 27)
  {
    &lvboost = 1;
  }
  if (&level == 30)
  {
    &lvboost = 1;
  }
  if (&level == 33)
  {
    &lvboost = 1;
  }
  if (&level == 36)
  {
    &lvboost = 1;
  }

  stop_entire_game(1);
  
  //Here's the modified choice menu. The rest of the script is generally how
  //the default level script goes.
  //On level ups in a multiple of 3, grant a bonus stat.
  
  choice_start()
    set_y 240
    title_start();
      Your experience has empowered you to level &level
      How do you want to change yourself?
    title_end();
    
    (&lvboost == 1)"Hit the Gym - Attack and Defense"
    (&lvboost == 1)"Kill Stuff Better - Magic and Attack"
    (&lvboost == 1)"Act Scholarly - Magic and Defense"
    (&lvboost != 1)"Total Agression - Focus on Attack"
    (&lvboost != 1)"Can't Touch This - Focus on Defense"
    (&lvboost != 1)"Power Overwhelming - Focus on Magic"
    
  choice_end();
  
  //Dink chooses one of the options; Increase the stat(s) he chose!
  
  if (&result == 1)
  {
    &strength += 1;
    &defense += 1;
    say("Macho Appeal +1!", 1);
  }
  
  if (&result == 2)
  {
    &strength += 1;
    &magic += 1;
    say("Cogito ergo bibo!", 1);
    //Latin for "I think, therefore I drink"
  }
  
  if (&result == 3)
  {
    &defense += 1;
    &magic += 1;
    say("I wanna be a Necromancer!", 1);
    
  }

  if (&result == 4)
  {
    &strength += 1;
    say("REEEEEEEEEEEE", 1);
  }
  
  if (&result == 5)
  {
    &defense += 1;
    say("Can't touch this!", 1);
    
  }
  
  if (&result == 6)
  {
    &magic += 1;
    say("Power Overwhelming!", 1);
    
  }
  kill_this_task();
  
}
