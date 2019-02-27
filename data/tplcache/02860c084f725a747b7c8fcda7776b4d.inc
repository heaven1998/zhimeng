<div class="met-index-product met-index-body">
  <div class="container">
    <h3 class="invisible" data-plugin="appear" data-animate="fade" data-repeat="false">{dede:field name='typename'/}</h3>
    <p class="desc invisible animation-delay-100" data-plugin="appear" data-animate="fadeInDown" data-repeat="false">—— {dede:field name='typenameen'/}——</p>
    <p class="desc invisible animation-delay-200" data-plugin="appear" data-animate="fadeInDown" data-repeat="false">{dede:field name='description'/}</p>
    <div class='invisible animation-delay-300' data-plugin="appear" data-animate="fadeInUp" data-repeat="false">
      <ul class="nav nav-tabs">
        {dede:channel type='son'}
        <li> <a href="[field:typeurl/]" title="[field:typename/]">[field:typename/]</a> </li>
        {/dede:channel}
      </ul>
    </div>
    <div class="slider index_product animation-delay-400" id="product_list" data-show="1 2 4 4 " data-plugin="appear" data-animate="slide-bottom" data-repeat="false" > {dede:arclist titlelen=80 orderby ='pubdate'}
      <div data-type="list_113" >
        <div class="widget widget-shadow">
          <figure class="widget-header cover"> <a href="[field:arcurl/]" title="[field:title/]" target='_self'>
            <div class="mask"> </div>
            <img class="img-responsive" alt="[field:title/]" src="[field:picname/]"/> </a> </figure>
          <h4 class="widget-title"> <a href="[field:arcurl/]" title="[field:title/]" target='_self'>[field:title/]</a>
            <p>[field:description function="cn_substr(@me,80)"/]...</p>
          </h4>
        </div>
      </div>
      {/dede:arclist} 
<!-- 咨询中心--> 
{dede:channelartlist typeid='11,0'}
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