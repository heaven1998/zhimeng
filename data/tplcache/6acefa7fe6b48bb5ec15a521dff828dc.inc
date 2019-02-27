<div class="recommend news-list-md">
              <h3>为您推荐</h3>
              <ul class="list-group list-group-bordered">
                {dede:arclist titlelen=80 orderby ='pubdate' row='5'   flag='c'}
                <li class="list-group-item"><a href="[field:arcurl/]" title="[field:title/]" target='_self'>[field:title/]</a></li>
                {/dede:arclist}
              </ul>
            </div>
            <ul class="column">
              <li><a href="{dede:field name='typeurl'/}" title="所有文章" target='_self'>所有文章</a></li>
              {dede:channel type='son'}
              <li><a href="[field:typeurl/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>