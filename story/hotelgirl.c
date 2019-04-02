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
unfreeze(&current_sprite);
unfreeze(1);
}