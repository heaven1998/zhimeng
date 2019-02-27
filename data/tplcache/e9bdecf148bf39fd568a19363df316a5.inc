<div class="met-index-about met-index-body">
  <div class="container ">
    <div class="about_img col-sm-12 col-md-4 col-lg-4" data-animate="zoomIn"  data-plugin="appear" data-repeat="false"> <img data-original="{dede:field name='typeimg'/}" /></div>
    <div class="about_cont col-sm-12 col-md-8 col-lg-8">
      <h3 class="invisible" data-plugin="appear" data-animate="fade" data-repeat="false">{dede:field name='typename'/}</h3>
      <p class="desc invisible animation-delay-100" data-plugin="appear" data-animate="fadeInDown" data-repeat="false" >{dede:field name='typenameen'/}</p>
      <p class="desc invisible animation-delay-200" data-plugin="appear" data-animate="fadeInDown" data-repeat="false"></p>
      <div class="met-editor no-gallery lazyload clearfix invisible animation-delay-300" data-plugin="appear" data-animate="fadeInDown" data-repeat="false"> {dede:sql sql='Select content from dede_arctype where id=3'}[field:content function='cn_substr(html2text(@me),800)'/] {/dede:sql} ... </div>
      <a href="{dede:field name='typeurl'/}" class="more" data-animate="bounceIn"></a> </div>
  </div>
</div>