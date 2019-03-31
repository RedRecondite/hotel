//main.c run before start.c
//Test of a comment
void main()
{
  //dink stats
  make_global_int("&strength", 1);
  make_global_int("&defense", 0);
  make_global_int("&magic", 0);
  make_global_int("&lifemax", 10); 
  make_global_int("&life", 10);
  make_global_int("&exp",0);
  make_global_int("&gold", 0);
  make_global_int("&level", 1);

  make_global_int("&player_map", 0);
  make_global_int("&cur_weapon", 0);
  make_global_int("&cur_magic", 0);
  make_global_int("&magic_level", 0);
  make_global_int("&vision", 0);
  make_global_int("&result", 0);
  make_global_int("&speed", 1);
  make_global_int("&timing", 0);
  make_global_int("&last_text", 0);
  make_global_int("&update_status", 0);
  make_global_int("&missile_target", 0);
  make_global_int("&missle_source", 0);
  make_global_int("&enemy_sprite", 0);
  make_global_int("&magic_cost", 0);
  make_global_int("&save_x", 0);
  make_global_int("&save_y", 0);

  //load SOUNDS
  load_sound("QUACK.WAV", 1);
  load_sound("PIG1.WAV", 2);
  load_sound("PIG2.WAV", 3);
  load_sound("PIG3.WAV", 4);
  load_sound("PIG4.WAV", 5);
  load_sound("BURN.WAV", 6);
  load_sound("OPEN.WAV", 7);
  load_sound("SWING.WAV", 8);
  load_sound("PUNCH.WAV", 9);
  load_sound("SWORD2.WAV", 10);
  load_sound("SELECT.WAV", 11);
  //#12 empty
  load_sound("PICKER.WAV", 13);
  load_sound("GOLD.WAV", 14);
  load_sound("GRUNT1.WAV", 15);
  load_sound("GRUNT2.WAV", 16);
  load_sound("SEL1.WAV", 17);
  load_sound("ESCAPE.WAV", 18);
  load_sound("NONO.WAV", 19);
  load_sound("SEL2.WAV", 20);
  load_sound("SEL3.WAV", 21);
  load_sound("HIGH2.WAV", 22);
  load_sound("FIRE.WAV", 23);
  load_sound("SPELL1.WAV", 24);
  load_sound("CAVEENT.WAV", 25);
  load_sound("SNARL1.WAV", 26);
  load_sound("SNARL2.WAV", 27);
  load_sound("SNARL3.WAV", 28);
  load_sound("HURT1.WAV", 29);
  load_sound("HURT2.WAV", 30);
  load_sound("ATTACK1.WAV", 31);
  load_sound("CAVEENT.WAV", 32);
  load_sound("LEVEL.WAV", 33);
  load_sound("SAVE.WAV", 34);
  load_sound("SPLASH.WAV", 35);
  load_sound("SWORD1.WAV", 36);
  load_sound("BHIT.WAV", 37);
  load_sound("SQUISH.WAV", 38);
  load_sound("STAIRS.WAV", 39);
  load_sound("STEPS.WAV", 40);
  load_sound("ARROW.WAV", 41);
  load_sound("FLYBY.WAV", 42);
  load_sound("SECRET.WAV", 43);
  load_sound("BOW1.WAV", 44);
  load_sound("KNOCK.WAV", 45);
  load_sound("DRAG1.WAV", 46);
  load_sound("DRAG2.WAV", 47);
  load_sound("AXE.WAV", 48);
  load_sound("BIRD1.WAV", 49);

  kill_this_task();
}
