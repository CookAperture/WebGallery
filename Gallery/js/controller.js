class controller{
    constructor() {
        this._viewHandlerInstance  = new viewHandler;
        this._interactorInstance = new interactor;
    }
    
    main() {
        this._viewHandlerInstance._onChangeToLoginViewButton.onclick = this._viewHandlerInstance.onChangeToLoginView;
    }
}