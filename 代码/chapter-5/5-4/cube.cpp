        #include  "cube.h"

        		//  Cube��Ĺ��캯��
        Cube::Cube(float wide, float length, float high):Rectangle(wide, length)
        {
            height = high ;
            volume = area * high ;
        }
