public class Student {
    String name;
    int marks[];
    
 
    public Student(String name, int marks[]) {
        this.name = name;
        this.marks = marks;
    }

  
    public double calculateAverage() {
        int sum = 0;
        for (int m : marks) {
            sum += m;
        }
        return (float) sum / marks.length;
    }

    
    public char calculateGrade() {
        double avg = calculateAverage();

        if (avg >= 95) return 'A';
        else if (avg >= 75) return 'B';
        else if (avg >= 60) return 'C';
        else if (avg >= 50) return 'D';
        else return 'F';
    }

    
    public void display() {
        System.out.println("Name: " + name);
        System.out.print("Marks: ");
        for (int m : marks) {
            System.out.print(m + " ");
        }
        System.out.println();
        System.out.println("Average: " + calculateAverage());
        System.out.println("Grade: " + calculateGrade());
    }

 
    public static void main(String[] args) {
        int[] marks = {90, 94, 80, 95, 90};
        Student s = new Student("Sairam", marks);

        s.display();
    }
}
