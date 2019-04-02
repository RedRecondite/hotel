void main(void)
{
sp_base_walk(&current_sprite, 250);
sp_speed(&current_sprite, 1);
sp_brain(&current_sprite, 16);
}

void talk(void)
{
freeze(&current_sprite);
freeze(1);
choice_start();
"Say hello"
"Enquire about the hotel"
"Not worth my time"
choice_end();
if (&result == 1)
{
say_stop("Why hello there.", 1);
wait(100);
say_stop("`5*sniff*", &current_sprite);Z
wait(100);
say_stop("Uh, why are you smelling me?", 1);
wait(100);
say_stop("`5You *sniff* smell *sniff* like *sniff* a pig farmer?", &current_sprite);
wait(100);
say_stop("I guess you could say that.", 1);
wait(100);
say_stop("`5There's a hungry pig a couple screens to the east of this hotel.", &current_sprite);
wait(100);
say_stop("That's, uh, nice.", 1);
wait(100);
say_stop("`5You should feed it.", &current_sprite);
wait(100);
say_stop("Oh boy, I can't wait.", 1);
}
if (&result == 2)
{
say_stop("So... what is this place, anyway?", 1);
wait(100);
say_stop("`5Welcome to the Dink Hotel.", &current_sprite);
wait(100);
say_stop("`5It's such a lovely place, and there's plenty of room.", &current_sprite);
wait(100);
say_stop("`5Any time of the year, you can find it here.", &current_sprite);
wait(100);
say_stop("`5Also, you can check out any time, but you can't quite leave.", &current_sprite);
wait(500);
say_stop("Oh...well, it sounds like this could be heaven or this could be Hell.", 1);
}
unfreeze(&current_sprite);
unfreeze(1);
}