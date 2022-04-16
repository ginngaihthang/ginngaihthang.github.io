<template>
  <div class="about">
    {{allBoy}}
    {{this.$store.state.name}}
    <input type="text" v-model="this.$store.state.name">
    <h1>This is an about page</h1>
    <button @click="changeData">Change</button>
  </div>
</template>

<script>
export default {
  data(){
    return{

    }
  },
  mounted(){

  },
  methods:{
    getData(){

    },
    storeData(){

    },
    changeData(){
      this.$store.dispatch('change')
    }
  },
  computed:{
    allBoy(){
      return this.$store.getters.boys
    }
  }
}
</script>
