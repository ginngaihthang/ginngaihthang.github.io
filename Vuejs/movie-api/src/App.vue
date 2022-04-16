<template>
    <nav class="navbar navbar-expand-lg navbar-dark py-1" style="background-color: #202020;">
      <div class="container-fluid">
        <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarSupportedContent">
          <ul class="navbar-nav me-auto mb-2 mb-lg-0">
            <li class="nav-item">
              <router-link to="/" class="nav-link active"><span class="h5" style="color: rgb(255, 0, 0);font-weight: bold">API</span> MOVIES</router-link>
            </li>
             
          </ul>
          <!-- <form class="d-flex" @submit.prevent="">
            <input class="form-control me-2" v-model="this.$store.state.search"  type="search" placeholder="Search" aria-label="Search">
            <button class="btn btn-outline-success" type="submit">Search</button>
          </form> -->
        </div>
      </div>
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
            axios.get(`http://www.omdbapi.com/?apikey=${venv.apikey}&s=${this.search}`)
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
