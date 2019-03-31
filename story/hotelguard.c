void talk(void)
{
 freeze(1);
 freeze(&custom_sprite);
 say_stop("What are you doing here?", 1);
 wait(200);
 say_stop("`1Guarding this here hotel.", &current_sprite);
 wait(200);
 say_stop("I see. What is this hotel called?", 1);
 wait(200);
 say_stop("`1The Dink Hotel. The best inn around.", &current_sprite);
 unfreeze(1);
 unfreeze(&custom_sprite);
}