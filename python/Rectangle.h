namespace shapes {
    class Rectangle {
    public:
        Rectangle(int x0, int y0, int x1, int y1);
        ~Rectangle();
        int getLength();
        int getHeight();
        int getArea();
        void move(int dx, int dy);
        int x0, y0, x1, y1;
    };
}
