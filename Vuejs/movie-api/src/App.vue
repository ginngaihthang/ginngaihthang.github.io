<template>
    <nav class="navbar navbar-expand-lg navbar-dark py-1" style="background-color: #202020;">
      <router-link to="/" class="nav-link active text-white ps-xl-3 ps-sm-0 ps-0"><span class="h5" style="color: rgb(255, 0, 0);font-weight: bold">API</span> MOVIES</router-link>
    </nav>
    <div class="container">
      <router-view/>
    </div>
  
</template>

<script>
import venv from '@/venv.js'
const axios = require('axios').default;
export default {
    data(){
      return{
        search: "",
        movie: [],
      }
    },
    methods:{
      SearchMovies(){
        if(this.search!= ""){
          console.log(this.search)
            axios.get(`https://www.omdbapi.com/?apikey=${venv.apikey}&s=${this.search}`)
              .then(response => {
                  this.movie = response.data.Search
                  console.log(this.movie)
                  this.search = "";
              })
        }
      }

    }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  color: #2c3e50;
  background-color: #292929;

}

nav {
  padding: 30px;
}

nav a {
  font-weight: bold;
  color: #2c3e50;
}

nav a.router-link-exact-active {
  color: #42b983;
}
</style>
