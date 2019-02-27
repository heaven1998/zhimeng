<li class="dropdown margin-left-30"> <a 
							class="{dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->GetOne($sql);
            @me=is_array($row)?'dropdown-toggle':'';
            {/dede:field} animation-zoomIn link {dede:field.currentstyle/}"  
            {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);
            @me=is_array($row)?'data-toggle="dropdown" 
            data-hover="dropdown"
            aria-expanded="false" 
            role="button" ':'';
            {/dede:field}
            
            href="{dede:field name='typeurl'/}" 
            
            >{dede:field name='typename'/} {dede:field name=typeid runphp="yes"}
            global $dsql;
            $sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
            $row = $dsql->GetOne($sql);
            @me=is_array($row)?'<i class="fa fa-angle-down"></i>':'';
            {/dede:field}</a>
            <ul {dede:field name=typeid runphp="yes"}
global $dsql;
$sql = "SELECT id From `#@__arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 ";
$row = $dsql->
              GetOne($sql);
              @me=is_array($row)?'class="dropdown-menu dropdown-menu-right bullet " role="menu"':'style="display:none"';
              {/dede:field} >
              {dede:channel type='son'}
              <li class="animation-fade animation-delay-"><a href="[field:typeurl/]" class=" animation-fade "  title="[field:typename/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </li>