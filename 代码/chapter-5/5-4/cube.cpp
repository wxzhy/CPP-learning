        #include  "cube.h"

        		//  Cube类的构造函数
        Cube::Cube(float wide, float length, float high):Rectangle(wide, length)
        {
            height = high ;
            volume = area * high ;
        }
