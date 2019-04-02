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
"The Ins and Outs of Ethel"
"Bluedy's Biography"
"Cooking with Ex-Chefevn, volume 13"
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

if (&result == 4)
{
say_stop("It seems this book was written by Quackers.", 1);
wait(100);
say_stop("I don't think I'm going to read it.", 1);
}

if (&result == 5)
{
say_stop("A book about someone called Bluedy.", 1);
wait(100);
say_stop("The critics' quotes on the cover all give it five stars out of five.", 1);
wait(100);
say_stop("Why, this must be the greatest book ever made!", 1);
}
if (&result == 6)
{
say_stop("A cooking pamphlet... Hey!", 1);
wait(100);
say_stop("Someone tore the recipes out, this is just the front cover.", 1);
wait(100);
say_stop("And a picture of a delicious looking cake-flavored pizza pie.", 1);
}

unfreeze(&current_sprite);
unfreeze(1);
}

void hit(void)
{
  int &mcrap = random(4, 1);
  if (&mcrap == 1)
  {
    say("Too many books!", 1);
  }
  if (&mcrap == 2)
  {
    say("OUCH! Papercut.", 1);
    hut(1, 4);
  }
  if (&mcrap == 3)
  {
    say("Knowledge has empowered me! I think.", 1);
  }
  if (&mcrap == 3)
  {
     say("Book it, books!", 1);
  }
}

