<div class="met-index-news met-index-body">
  <div class="container">
    <h3 class="invisible" data-plugin="appear" data-animate="fade" data-repeat="false">{dede:field name='typename'/}</h3>
    <p class="desc invisible animation-delay-100" data-plugin="appear" data-animate="fadeInDown" data-repeat="false">—— {dede:field name='typenameen'/} ——</p>
    <p class="desc invisible animation-delay-200" data-plugin="appear" data-animate="fadeInDown" data-repeat="false">{dede:field name='description'/}</p>
    <ul class="blocks-2" data-scale='0.6'>
      {dede:arclist titlelen=80 orderby ='pubdate' row='6'}
      <li class="invisible animation-delay-300" data-plugin="appear" data-animate="fadeInRight" data-repeat="false">
        <div class="media media-lg">
          <div class="media-body">
            <h4 class="media-heading"> <span class="news_time">[field:pubdate function="MyDate('Y-m-d',@me)"/]</span> <a href="[field:arcurl/]" title="[field:title/]" target='_self' > [field:title/]</a> </h4>
            <p class="des">[field:description function="cn_substr(@me,180)"/]...</p>
            <p class="info"> </p>
          </div>
        </div>
      </li>
      {/dede:arclist}
    </ul>
    <a href="{dede:field name='typeurl'/}"  class="more" title="{dede:field name='typename'/}" target='_self'></a> </div>
</div>