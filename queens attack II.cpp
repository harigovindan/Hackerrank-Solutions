import java.util.*;
import java.awt.Point;

public class Solution {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int k = in.nextInt();

        Point queen = new Point(in.nextInt(), in.nextInt());

        HashSet<Point> obstacles = new HashSet<Point>();

        for(int i = 0; i < k; i++){
            obstacles.add(new Point(in.nextInt(), in.nextInt()));
        }

        Stack<Direction> directions = getAllDirections();
        int possiblePoints = 0;

        while(!directions.empty()){
            Direction d = directions.pop();
            Point cur = new Point(queen);
            cur.translate(d.x, d.y);

            while(isInside(cur, n) && !obstacles.contains(cur)){
                possiblePoints++;
                cur.translate(d.x, d.y);
            }
        }

        System.out.println(possiblePoints);
    }

    private static boolean isInside(Point p, int n){
        return p.x > 0 && p.y > 0 && p.x <= n && p.y <= n;
    }

    private static Stack<Direction> getAllDirections(){
        Stack<Direction> directions = new Stack<Direction>();
        directions.push(new Direction(0, 1));
        directions.push(new Direction(1, 1));
        directions.push(new Direction(1, 0));
        directions.push(new Direction(1, -1));
        directions.push(new Direction(0, -1));
        directions.push(new Direction(-1, -1));
        directions.push(new Direction(-1, 0));
        directions.push(new Direction(-1, 1));
        return directions;
    }

    private static class Direction {
        int x, y;
        public Direction(int x, int y){
            this.x = x;
            this.y = y;
        }
    }
}
