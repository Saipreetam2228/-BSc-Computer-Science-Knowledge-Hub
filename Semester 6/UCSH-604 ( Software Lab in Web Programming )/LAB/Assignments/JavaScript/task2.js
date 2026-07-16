// Task 2 - Student Admission Form Validation
// Demonstrates basic JavaScript concepts

// Function to validate the form
function validateForm(event) {
    // Prevent form from submitting automatically
    event.preventDefault();

    // Reading input values
    let name = document.getElementById("name").value.trim();
    let age = document.getElementById("age").value;
    let email = document.getElementById("email").value.trim();
    let declare = document.getElementById("declare").checked;

    // Check for empty name
    if (name === "") {
        alert("Please enter your full name.");
        return;
    }

    // Check age condition
    if (age === "" || age < 17) {
        alert("Age must be 17 or above.");
        return;
    }

    // Email validation
    if (email === "") {
        alert("Please enter your email address.");
        return;
    }

    // Declaration checkbox
    if (!declare) {
        alert("Please confirm the declaration.");
        return;
    }

    // If all validations pass
    alert("Form submitted successfully!");
}

// Attach event listener to the form after DOM loads
document.addEventListener("DOMContentLoaded", function() {
    document.getElementById("admissionForm").addEventListener("submit", validateForm);
});
