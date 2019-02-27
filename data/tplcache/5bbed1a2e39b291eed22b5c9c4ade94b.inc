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
    <div class="slider index_product animation-delay-400" id="product_list1" data-show="1 2 4 4 " data-plugin="appear" data-animate="slide-bottom" data-repeat="false" > {dede:arclist titlelen=80 orderby ='pubdate'}
      <div data-type="list_113" >
        <div class="widget widget-shadow">
          
        </div>
      </div>
      {/dede:arclist} 
      <!-- End Example Lazy Loading --> 
    </div>
    <a href="{dede:field name='typeurl'/}" class="index_more"></a> <a href="{dede:field name='typeurl'/}" class="more">MORE</a> </div>
</div>