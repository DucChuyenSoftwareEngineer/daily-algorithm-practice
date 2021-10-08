## 1. rotation-array
YÊU CẦU BÀI TOÁN :
1. Cho 1 mảng số ngẫu nhiên VD:( 1 2 3 4 5 6 7 8)
2. Chia tách mảng trên thành 2 mảng con nhưng vẫn thuộc mảng trên sau đó đảo vị của 2 mảng con đó cho nhau
3. Có 3 bước thực hiện để giải bài toán này :
     Đầu tiên tách ra 1 số lượng phần tử nhất định trong mảng bằng cách tạo ra mảng mới để lưu trữ lại số lượng phần tử đó .Vd ở mảng trên ta lấy ra (1 2) lúc này trong mảng còn        lại (3 4 5 6 7 8):
     
     ![Capture123](https://user-images.githubusercontent.com/89003971/136580586-4447cffe-15de-4aef-8fe8-b581c22a6965.PNG)

     Tiếp theo ta đẩy toàn bộ phần tử đứng sau lên trước .VD đẩy (3 4 5 6 7 8 )lên trước .
     
     ![Capture122](https://user-images.githubusercontent.com/89003971/136580953-30ba8720-4964-47ae-9999-ce8f3bc0aea7.PNG)

     Cuối cùng là sau khi đã đẩy toàn bộ các giá trị phần tử đứng sau lên trước thì bây giờ ta sẽ gán toàn bộ giá trị mảng ta tạo để lưu giá trị bị lấy ra lúc đầu (1 2 )vào những      vị trí còn lại của mảng .
     
     ![Capture 111](https://user-images.githubusercontent.com/89003971/136581275-3e8ea099-7f94-46ca-bf43-221d47a96a8a.PNG)

[xinchao.txt](https://github.com/DucChuyenSoftwareEngineer/daily-algorithm-practice/files/7312354/xinchao.txt)
