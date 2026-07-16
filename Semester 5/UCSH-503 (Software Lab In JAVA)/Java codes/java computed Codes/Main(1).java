public class Main
{
public static void main(String[] args)
    {
        Bird bird = new Bird();
        Insect insect = new Insect();
        Rodent rodent = new Rodent();
        Reptile reptile = new Reptile();
        int i = 0;
        while (i < 1)
        {
            bird.display();
            bird.move();
            insect.display();
            insect.move();
            rodent.display();
            rodent.move();
            reptile.display();
            reptile.move();

            i = i + 1;
      }
  }
}
