<div class="met-index-service met-index-body">
  <div class="container">
    <h3 class="invisible" data-plugin="appear" data-animate="fade" data-repeat="false">{dede:field name='typename'/}</h3>
    <p class="desc invisible animation-delay-100" data-plugin="appear" data-animate="fadeInDown" data-repeat="false">—— {dede:field name='typenameen'/} ——</p>
    <p class="desc invisible animation-delay-200" data-plugin="appear" data-animate="fadeInDown" data-repeat="false">{dede:field name='description'/}</p>
    <div class="slider invisible animation-delay-300" data-plugin="appear" data-animate="slide-bottom" data-repeat="false" id="serviceSlick" data-show="1 2 4 4 "> {dede:channel type='son'}
      <div class="service_item"> <a href="[field:typeurl/]" title="[field:typename/]"> <img class="img-responsive" alt="[field:typename/]" src="[field:typeimg/]" />
        <h4>[field:typename/]</h4>
        <p>[field:description/]</p>
        </a> </div>
      {/dede:channel} </div>
  </div>
</div>