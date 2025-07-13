<?php
include 'config.php';
$id     = (int) $_GET['id'];
$result = $connection->query("SELECT * FROM students WHERE id = $id");
$row    = $result->fetch_assoc();

if ($_SERVER["REQUEST_METHOD"] === 'POST') {
    $name  = $_POST['fullname'];
    $email = $_POST['email'];
    $age   = (int) $_POST['age'];
    $sql   = "UPDATE students SET fullname='"
           . $connection->real_escape_string($name) . "', email='"
           . $connection->real_escape_string($email) . "', age=$age WHERE id=$id";

    if ($connection->query($sql)) {
        header("Location: index.php");
        exit;
    } else {
        echo "Error al actualizar: " . $connection->error;
    }
}
include 'includes/header.php';
?>
<h2>Editar Estudiante</h2>
<form class="w3-form" action="update.php?id=<?= $row['id'] ?>" method="post">
    <label>Nombre completo:</label>
    <input class="w3-input w3-border" type="text" name="fullname" value="<?= htmlspecialchars($row['fullname']) ?>" required>

    <label>Email:</label>
    <input class="w3-input w3-border" type="email" name="email" value="<?= htmlspecialchars($row['email']) ?>" required>

    <label>Edad:</label>
    <input class="w3-input w3-border" type="number" name="age" value="<?= $row['age'] ?>" required>

    <button class="w3-button w3-blue w3-section" type="submit">Actualizar</button>
</form>
<?php include 'includes/footer.php'; ?>
