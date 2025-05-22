<?php
include 'config.php';
include 'includes/header.php';

$result = $connection->query("SELECT * FROM students");
?>
<h2>Listado de Estudiantes</h2>
<a class="w3-button w3-blue" href="insert.php">Agregar Nuevo</a>
<?php if ($result->num_rows > 0): ?>
    <table class="w3-table w3-striped w3-bordered w3-hoverable w3-centered">
        <thead>
            <tr>
                <th>Nombre</th>
                <th>Email</th>
                <th>Edad</th>
                <th>Acciones</th>
            </tr>
        </thead>
        <tbody>
        <?php while ($row = $result->fetch_assoc()): ?>
            <tr>
                <td><?= htmlspecialchars($row['fullname']) ?></td>
                <td><?= htmlspecialchars($row['email']) ?></td>
                <td><?= $row['age'] ?></td>
                <td>
                    <a class="w3-button w3-small w3-green" href="update.php?id=<?= $row['id'] ?>">Editar</a>
                    <a class="w3-button w3-small w3-red" href="delete.php?id=<?= $row['id'] ?>">Borrar</a>
                </td>
            </tr>
        <?php endwhile; ?>
        </tbody>
    </table>
<?php else: ?>
    <p>No hay estudiantes cargados.</p>
<?php endif; ?>
<?php include 'includes/footer.php'; ?>
