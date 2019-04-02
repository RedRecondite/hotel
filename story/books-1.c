void main(void)
{
}

void talk(void)
{
freeze(&current_sprite);
freeze(1);
say_stop("There's a lot of books here...where to start?", 1);
choice_start();
"The History of Dink Smallwood"
"Robj's Adventure"
"Encyclopedia of Tal"
"Reading is for losers"
choice_end();
if (&result == 1)
{
say_stop("I'm trying to read it, but it's so thick I can't find where it starts or ends!", 1);
}

if (&result == 2)
{
say_stop("I'm trying to read it, but it seems it's not a book, it's a cookie.", 1);
}
if (&result == 3)
{
say_stop("There are no words in this book.", 1);
wait(100);
say_stop("Only lots and lots of pictures of ducks with bananas.", 1);
wait(100);
}

unfreeze(&current_sprite);
unfreeze(1);
}

void hit(void)
{
 say("Book it, books!", 1);
}

