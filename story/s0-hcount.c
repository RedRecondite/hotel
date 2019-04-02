void main(void)
{
 int &x = sp_x(&current_sprite, -1);
 int &y = sp_y(&current_sprite, -1);
 &y -= 50;
 int &crap;
 
 &crap = create_sprite(&x, &y, 0, 381, 1);
}

void talk(void)
{
 freeze(1);

 say_stop("`3Hi, welcome to Hotel Dink!", &crap);

 choice_start();
 "What is this establishment?"
 "Why have I never heard of this place?"
 "Shouldn't I be getting royalties or something?"
 "Ask to stay the night."
 "leave"
 choice_end();

 if (&result == 1)
 {
  say_stop("`3This is the Dink Hotel!", &crap);
  wait(200);
  say_stop("Well, that's cool. I have a hotel named after me.", 1);
  wait(200);
  say_stop("`3That's right. It's the perfect place to relax.", &crap);
  wait(200);
  say_stop("`3So go ahead and take a look around. Outside too. Enjoy yourself.", &crap);
 }
 if (&result == 2)
 {
  say_Stop("`3I'm not sure why you've never heard of us..", &crap);
  say_stop("`3We generate quite a healthy amount of business for travellers in this area!", &crap);
  wait(200);
  say_stop("Interesting..", 1);
 }
 if (&result == 3)
 {
  say_stop("`3Um well.. you see, uh..", &crap);
  say_stop("No.", &crap);
  wait(200);
  say_Stop("No?  Why?  For what reason? I want your money damnit!", 1);
  wait(200);
  say_stop("`3We'll let you stay for free", &crap);
  wait(200);
  say_stop("Well, I guess I'll take what I can get", 1);
 }
 if (&result == 4)
 {
  say_stop("`3You'd like a room, sure!", &crap);
  say_stop("`3We have one left.. the other is taken", &crap);
  wait(200);
  say_stop("Wait, you only have 2 rooms?", 1);
  wait(200);
  say_Stop("`3Well, you know, it keeps our demand high, looks good for the books.", &crap);
  say_stop("`3Anyway, upstairs and to your right.", &crap);
  say_stop("Thanks..", 1);
  &story = 2;
 }
 unfreeze(1);
}