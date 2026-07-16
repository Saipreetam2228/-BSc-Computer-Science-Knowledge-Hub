public class AnimalKingdom {
    public static void main(String[] args) {

        System.out.println("\n---------BIRDS------------\n");

        Birds bird = new Birds();
        bird.display();
        System.out.println();
        bird.crow();
        bird.eagle();
        bird.hawk();
        bird.duck();
        bird.parrot();

        System.out.println("\n----------INSECTS-----------\n");
        Insects insect = new Insects();
        insect.display();
        System.out.println();
        insect.mosquito();
        insect.houseFly();
        insect.beetle();

        System.out.println("\n----------RODENTS-----------\n"); 
        Rodents rodent = new Rodents();
        rodent.display();
        System.out.println();
        rodent.rat();
        rodent.squirrel();

        System.out.println("\n----------REPTILES-----------\n");
        Reptiles reptile = new Reptiles();
        reptile.display();
        System.out.println();
        reptile.waterSnake();
        reptile.landSnake();
        reptile.bothHabitatSnake();
    }
}

