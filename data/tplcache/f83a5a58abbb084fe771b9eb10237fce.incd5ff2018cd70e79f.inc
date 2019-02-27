<?php
$z[0]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->GetOne(\$sql);\r\n            @me=is_array(\$row)?'dropdown-toggle':'';\r\n            ",56,327);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",350,376);
$z[1][4]=array();
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);\r\n            @me=is_array(\$row)?'data-toggle=\"dropdown\" \r\n            data-hover=\"dropdown\"\r\n            aria-expanded=\"false\" \r\n            role=\"button\" ':'';\r\n            ",393,807);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("field","",841,869);
$z[3][4]=array();
$z[3][4]['name']="typeurl";
$z[4]=Array("field","",900,929);
$z[4][4]=array();
$z[4][4]['name']="typename";
$z[5]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);\r\n            @me=is_array(\$row)?'<i class=\"fa fa-angle-down\"></i>':'';\r\n            ",930,1254);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("field","\r\nglobal \$dsql;\r\n\$sql = \"SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n\$row = \$dsql->\r\n              GetOne(\$sql);\r\n              @me=is_array(\$row)?'class=\"dropdown-menu dropdown-menu-right bullet \" role=\"menu\"':'style=\"display:none\"';\r\n              ",1276,1633);
$z[6][4]=array();
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n              <li class=\"animation-fade animation-delay-\"><a href=\"[field:typeurl/]\" class=\" animation-fade \"  title=\"[field:typename/]\">[field:typename/]</a></li>\r\n              ",1651,1872);
$z[7][4]=array();
$z[7][4]['type']="son";

?>