class controller{
    constructor() {}
    
    static main() {
        viewHandler._onChangeToLoginViewButton = document.getElementById('onChangeToLoginViewButton');
        viewHandler._onChangeToLoginViewButton.onclick  = viewHandler.onChangeToLoginView();
    }
}