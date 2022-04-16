<template>
  <div class="detail" v-if="country">
    <h1 class="bg-danger">This is Detail page</h1>
          <div class="card mb-3  bg-transparent">
                    <div class="row g-0">
                         <div class="col-md-4">
                              <img :src="country.flags.png" class="img-fluid " alt="IMG">
                         </div>
                         <div class="col-md-8">
                              <div class="card-body  mp-0">
                                   <h5 class="card-text">Name : {{country.name.common}}</h5>
                                   <p class="card-text">Capital : {{country.capital[0]}}</p>
                                   <p class="card-text">Region : {{country.region}}</p>
                                   <p class="card-text">Area : {{country.area}}</p>
                                   <p class="card-text">Population : {{country.population}}</p>
                              </div>
                         </div>
                    </div>
               </div>
  </div>
</template>

<script>
const axios = require('axios').default;
export default {
     data(){
          return {
               country: null,
          }
     },
     mounted(){
          let name = this.$route.params.name
          console.log(name)
          axios.get("https://restcountries.com/v3.1/name/"+name)
               .then(response => {
               
                    this.country = response.data[0]
                    
               })
     }
}
</script>


