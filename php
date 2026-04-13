<?php
$godhara_data = [
    "name" => "Godhara",
    "district" => "Panchmahal",
    "type" => "Municipality",
    "pincode" => 389001,
    "landmarks" => ["Panchamrut Dairy", "Nearby Pavagadh Hill"]
];

echo "<h2>Administrative Info: " . $godhara_data['name'] . "</h2>";
echo "<ul>";
echo "<li><strong>Status:</strong> " . $godhara_data['type'] . "</li>";
echo "<li><strong>District HQ:</strong> " . $godhara_data['district'] . "</li>";
echo "<li><strong>Key Landmarks:</strong> " . implode(", ", $godhara_data['landmarks']) . "</li>";
echo "</ul>";
?>
