package JavaOOP;

import java.text.MessageFormat;

public class Animal {
    private String name;
    private String species;
    private int age;
    private Boolean alive;
    private String breed;

    public Animal(String petName, String petSpecies, int petAge, boolean alive, String breed) {
        this.name = petName;
        this.species = petSpecies;
        this.age = petAge;
        this.alive = alive;
        this.breed = breed;
    }

    public static String outputString(Animal animalName) {
        return MessageFormat.format("This is {0}. They are a {1} who are {2} years old. They\'\'re a {3} {1}", animalName.name, animalName.species, animalName.age, animalName.breed);
    }
    public static void main(String[] args) {
        Animal Polly = new Animal("Polly", "Dog", 1, false, "Cavachon");
        Animal Pablo = new Animal("Pablo", "Cat", 4, true, "Ginger");
        System.out.println(outputString(Polly));
        System.out.println(outputString(Pablo));
    }
}