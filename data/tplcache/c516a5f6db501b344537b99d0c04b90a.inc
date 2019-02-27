<li class="invisible animation-delay-300" data-plugin="appear" data-animate="fadeInRight" data-repeat="false">
        <div class="media media-lg">
          <div class="media-body">
            <h4 class="media-heading"> <span class="news_time">[field:pubdate function="MyDate('Y-m-d',@me)"/]</span> <a href="[field:arcurl/]" title="[field:title/]" target='_self' > [field:title/]</a> </h4>
            <p class="des">[field:description function="cn_substr(@me,180)"/]...</p>
            <p class="info"> </p>
          </div>
        </div>
      </li>