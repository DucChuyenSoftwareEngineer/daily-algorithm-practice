## 1. rotation-array
YÊU CẦU BÀI TOÁN :
PROBLEM REQUIREMENTS:

1. Cho 1 mảng số ngẫu nhiên VD:( 1 2 3 4 5 6 7 8)

   Given a random number eg: 1 2 3 4 5 6 7 8)

3. Chia tách mảng trên thành 2 mảng con nhưng vẫn thuộc mảng trên sau đó đảo vị của 2 mảng con đó cho nhau
   
   Split the above array into 2 arrays but still exist arrays on it then switch the positions of those 2 arrays to each other 
5. Có 3 bước thực hiện để giải bài toán này :
     Đầu tiên tách ra 1 số lượng phần tử nhất định trong mảng bằng cách tạo ra mảng mới để lưu trữ lại số lượng phần tử đó .Vd ở mảng trên ta lấy ra (1 2) lúc này trong mảng còn        lại (3 4 5 6 7 8):
   
   There are 3 steps to solve this problem: The first syntax outputs a certain number of elements in the array by creating a new array to store that number of elements. For example, in the above array, we take out (1 2 ) now in the remaining array (3 4 5 6 7 8):  
     
     ![Capture123](https://user-images.githubusercontent.com/89003971/136580586-4447cffe-15de-4aef-8fe8-b581c22a6965.PNG)

     Tiếp theo ta đẩy toàn bộ phần tử đứng sau lên trước .VD đẩy (3 4 5 6 7 8 )lên trước .
   
   Next, we push all the elements behind it to the front. For example, push (3 4 5 6 7 8) forward.
     
     ![Capture122](https://user-images.githubusercontent.com/89003971/136580953-30ba8720-4964-47ae-9999-ce8f3bc0aea7.PNG)

     Cuối cùng là sau khi đã đẩy toàn bộ các giá trị phần tử đứng sau lên trước thì bây giờ ta sẽ gán toàn bộ giá trị đứng trước được lưu trữ ở mảng mới tạo lúc đầu vào những vị trí đứng sau của mảng chính ,VD(1 2 )gắn vào những vị trí sau của mảng .
   
     Finally, after pushing all the following element values to the front, we will now assign all previous values stored in the newly created array to the following positions of the main array, eg (1 2 ) append to the following positions of the array . .
     
   ![Capture 111](https://user-images.githubusercontent.com/89003971/136639826-c1f16b27-884c-430e-93b4-bdc3ff7f9a83.PNG)



[pratise1.txt](https://github.com/DucChuyenSoftwareEngineer/daily-algorithm-practice/files/7314799/pratise1.txt)

