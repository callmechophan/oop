class ManageMain {
    public:
        ManageMain();
        void init();
    
    private:
        void PrintMenu();
        int GetUserOption();

        // 1
        void PrintHelp();
        // 2
        void PrintMarketStats();
        // 3
        void EnterOffer();
        // 4
        void EnterBid();
        // 5
        void PrintWallet();
        // 6
        void GoToTheNextTimeFrame();

        void ProcessUserOption(int user_option);
};