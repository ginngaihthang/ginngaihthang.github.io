<template>
  <div class="home">
    <div class="row">
      <HomePage />
    </div>
    <div class="row">
          <AboutPage/>
    </div>
    <div class="row">
      <SkillPage/>
    </div>
    <div class="row">
      <ServicePage/>
    </div>
    <div class="row">
      <PortfolioPage/>
    </div>
    <div class="row">
      <ContactPage/>
    </div>
    
  </div>
</template>

<script>
// @ is an alias to /src
import HomePage from '@/components/HomePage.vue';
import AboutPage from '@/components/AboutPage.vue';
import SkillPage from '@/components/SkillPage.vue';
import ServicePage from '@/components/ServicePage.vue';
import PortfolioPage from '@/components/PortfolioPage.vue';
import ContactPage from '@/components/ContactPage.vue';

export default {
  name: 'HomeView',
  components: {
    HomePage,
    AboutPage,
    SkillPage,
    ServicePage,
    PortfolioPage,
    ContactPage
  }  
}
</script>
<style>
   *{
     margin: 0px;
     padding: 0px;
   }
   body{
     font-family: 'Raleway', sans-serif;
     font-weight: 400;
     
   }
   p.name{
    font-weight: 500;
    }
 
   .gin {
     font-family: 'Oleo Script', cursive;
   }
   .shadow_icon {
    box-shadow:3px 3px 3px #d0d0d0, 3px -3px 3px #f8f8f8;
   }
   .shadow_icon:hover {
      box-shadow: 0 0 0 #d0d0d0, 0 0 0 #f8f8f8;
      transition: all 0.5s ease;
    
   }
  .skillset{
    height: 6px;
    border-radius: 2px;
  }
  .shadow_css {
    box-shadow: 3px 3px 3px #d0d0d0, 3px -3px 3px #f8f8f8;
     transition: all 0.5s ease;
  }
  .shadow_css:hover {
    transform:scale(1.05);
  }

  .skillImg {
     transition: all 0.5s ease;
  }
  .skillImg:hover {
     transform:scale(1.05);
  }

  .personal {
    
     border-radius: 10px;
  }
   .contact {
     box-shadow: rgba(60, 64, 67, 0.3) 0px 1px 2px 0px, rgba(60, 64, 67, 0.15) 0px 2px 6px 2px;
   }
  footer {
    background-color: #263238;
  }
  .ngaih {
    font-family: 'Courgette', cursive;

  } */
   
    
    .btn{
      color: white
    }
</style>