<?php
$result = drush_invoke_process('@self', 'dl', $modules_to_download, array('yes' => TRUE));