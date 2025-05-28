<?php
include 'config.php';
if ($_SERVER["REQUEST_METHOD"] === 'POST') {
    $name  = $_POST['fullname'];
    $email = $_POST['email'];
    $age   = (int) $_POST['age'];

    $sql = "INSERT INTO students (fullname, email, age) VALUES ('"
         . $connection->real_escape_string($name) . "', '"
         . $connection->real_escape_string($email) . "', $age)";

    if ($connection->query($sql)) {
        header("Location: index.php");
        exit;
    } else {
        echo "Error al insertar: " . $connection->error;
    }
}
include 'includes/header.php';
?>
<h2>Agregar Estudiante</h2>
<form class="w3-form" action="insert.php" method="post">
    <label>Nombre completo:</label>
    <input class="w3-input w3-border" type="text" name="fullname" required>

    <label>Email:</label>
    <input class="w3-input w3-border" type="email" name="email" required>

    <label>Edad:</label>
    <input class="w3-input w3-border" type="number" name="age" required>

    <button class="w3-button w3-green w3-section" type="submit">Guardar</button>
</form>
<?php include 'includes/footer.php'; ?>
