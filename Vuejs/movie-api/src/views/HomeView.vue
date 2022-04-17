<template>
  <div class="home">
    <form class="d-flex mt-2 w-75 m-auto" @submit.prevent="SearchMovies()">
      <input class="form-control outline-none rounded-0  text-white " style="background-color: #121212;border-color: #202020;" v-model="search"  type="search" placeholder="Search">
      <button class="btn  rounded-0 px-4" style="background-color: #313131;" type="submit">
        <svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" fill="currentColor" class="bi bi-search text-white" viewBox="0 0 16 16">
          <path d="M11.742 10.344a6.5 6.5 0 1 0-1.397 1.398h-.001c.03.04.062.078.098.115l3.85 3.85a1 1 0 0 0 1.415-1.414l-3.85-3.85a1.007 1.007 0 0 0-.115-.1zM12 6.5a5.5 5.5 0 1 1-11 0 5.5 5.5 0 0 1 11 0z"/>
        </svg>
      </button>
    
    </form>
    
    <div class="row" v-if="allmovie == null">
      <div class="col-md-2 col-sm-4 col-6  my-3" v-for="movie in movies" :key="movie.imdbID">
        <router-link :to="{name: 'imform',params: {id: movie.imdbID}}"  style="text-decoration: none;">
          <div class="card h-100 " style="background-color: #1e1e1e;">
            <img :src="movie.Poster" class="card-img-top " alt="IMG">
            <div class="card-body  pe-0 py-1">
              <p class=" text-muted mb-0"><small>{{movie.Year}}</small></p>
              <p class="card-text text-white"><small>{{movie.Title}}</small></p>
            </div>
          </div>
        </router-link>
      </div>
      </div>
  </div>

  
  <div class="row my-3">
    <div class="col-md-7 col-sm-12 col-12" v-if="movie0 != '' ">
      <router-link :to="{name: 'detail',params: {id : movie0.imdbID}}">
        <img :src="movie0.Poster" class=" w-100" alt="" style="min-height: 345px;">
      </router-link>
    </div>
    <div class="col-md-5 col-sm-12 col-12">
      <div class="row">
        <div class="col-md-12 col-sm-12" v-if="movie1 != ''">
          <router-link :to="{name: 'detail',params: {id : movie1.imdbID}}" style="text-decoration: none;">
            <div class="card mb-2 bg-transparent" >
              <div class="row g-0">
                <div class="col-md-2">
                  <img :src="movie1.Poster" class="img-fluid " alt="">
                </div>
                <div class="col-md-10">
                  <div class="card-body py-0">
                    <p class="card-text mb-0"><small class="text-muted">{{movie1.Year}}</small></p>
                    <p class="card-text text-light mb-0"><small>{{movie1.Title}}</small></p>
                    <p class="card-text mb-0"><small class="text-muted"><small>Lorem ipsum dolor sit amet consectetur adipisicing elit. Quasi tempore doloremque ullam .</small></small></p>
                  </div>
                </div>
              </div>
            </div>
          </router-link>
        </div>
        <div class="col-md-12 col-sm-12" v-if="movie1 != ''">
          <router-link :to="{name: 'detail',params: {id : movie2.imdbID}}" style="text-decoration: none;">
            <div class="card mb-2 bg-transparent" >
              <div class="row g-0">
                <div class="col-md-2">
                  <img :src="movie2.Poster" class="img-fluid " alt="">
                </div>
                <div class="col-md-10">
                  <div class="card-body py-0">
                    <p class="card-text mb-0"><small class="text-muted">{{movie2.Year}}</small></p>
                   <p class="card-text text-light mb-0"><small>{{movie2.Title}}</small></p>
                   <p class="card-text mb-0"><small class="text-muted"><small>Lorem ipsum dolor sit amet consectetur adipisicing elit. Quasi tempore doloremque ullam facilis.</small></small></p>
                  </div>
                </div>
              </div>
            </div>
          </router-link>
        </div>
        <div class="col-md-12 col-sm-12" v-if="movie1 != ''">
          <router-link :to="{name: 'detail',params: {id : movie3.imdbID}}" style="text-decoration: none;">
            <div class="card mb-2 bg-transparent" >
              <div class="row g-0">
                <div class="col-md-2">
                  <img :src="movie3.Poster" class="img-fluid" alt="">
                </div>
                <div class="col-md-10">
                  <div class="card-body py-0">
                    <p class="card-text mb-0"><small class="text-muted">{{movie3.Year}}</small></p>
                    <p class="card-text text-light mb-0"><small>{{movie1.Title}}</small></p>
                    <p class="card-text mb-0"><small class="text-muted"><small>Lorem ipsum consectetur adipisicing elit. Quasi tempore doloremque ullam mollitia facilis.</small></small></p>
                  </div>
                </div>
              </div>
            </div>
          </router-link>
        </div>
      </div>
    </div>
  </div>
  <div class="row">
          <div class="col-xl-3 col-lg-3 col-md-3 col-sm-4 col-12 my-3" v-for="m in allmovie" :key="m.imdbID">
            <router-link :to="{name: 'movie',params: {id: m.imdbID}}" class="text-decoration-none">
              <div class="card h-100" style="background-color: #1e1e1e;">
                  <img :src="m.Poster" class="card-img-top " alt="IMG">
                  <div class="card-body text-center  pe-0 py-1">
                    <p class="card-text text-white pb-0 mb-0"><small>{{m.Title}}</small></p>
                    <p class="card-text text-muted pe-0 mb-0"><small>{{m.Year}}</small></p>
                  </div>
              </div>
              </router-link>
            </div>
          </div>
</template>

<script>
import venv from '@/venv.js';
const axios = require('axios').default;
export default {
  data(){
    return {
      movies: "",
      search: "",
      allmovie: null,
      movie0: [],
      movie1: [],
      movie2: [],
      movie3: [],
      movie4: [],

    }
  },
  mounted(){
    axios.get(`https://www.omdbapi.com/?apikey=${venv.apikey}&s=movie`)
              .then(response => {
                  this.movies = response.data.Search
                 
                  console.log(this.movies)
                
              })
  },
  methods:{
      SearchMovies(){
        if(this.search!= ""){
          console.log(this.search)
            axios.get(`https://www.omdbapi.com/?apikey=${venv.apikey}&s=${this.search}`)
              .then(response => {
                  this.allmovie = response.data.Search.slice(5,-1)
                  this.movie0 = response.data.Search[0]
                  this.movie1 = response.data.Search[1]
                  this.movie2 = response.data.Search[2]
                  this.movie3 = response.data.Search[3]
                  this.movie4 = response.data.Search[4]
                  console.log(this.movie1)
                  this.search = "";
              })
        }
      }
    }
  
}
</script>

<style>
    
    img{
        width: 100%;
        height: 300px;
        object-fit: cover;
        
    }
    
</style>
