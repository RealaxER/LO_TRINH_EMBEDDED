/*
LỘ TRÌNH ĐƯỢC CHIA LÀM 2 ĐỢT : BASIC AND ADVANCED

========================GIAI ĐOẠN 1 : BASIC(Yêu cầu có kiến thức C cơ bản)============================
Video phụ : Hướng dấn cài đặt công cụ lập trình, và sử dụng công cụ 
Dặn dò : Có thể mua mạch thực tế hoặc chỉ sử dụng mô phỏng(kit và mạch nạp cho giai đoạn 1)
Video phụ : Test kit, mạch nạp code đã chuẩn bị , hướng dẫn nạp code mẫu cho vi điều khiển để test kit,

-BUỔI 1 : Cách đọc data sheet,các công cụ để lập trình (so sánh các ide lập trình đang có hiện nay ) , lộ trình học các ngoại vi cơ bản , ứng dụng C 
trong lập trình,chia sẻ kinh nghiệm lộ trình học 2 đợt basic và advanced (Học như thế nào nên cbi kiến thức nền tảng nào )
BTVN : trả lời các câu hỏi được lấy từ datasheet để kiểm tra xem có biết đọc không

-Buổi 2 : Học về các toán tử logic
BTVN : bài tập tính toán toán tử logic 

-Buổi 3 (GPIO): Ứng dụng toán tử bit vào vi điều khiển,học về ngoại vi cơ bản GPIO,cách cấu hình GPIO, cấu hình xung clock từ thạch anh nội và thạch anh ngoại cho nó.
*output :  Hiểu được các thanh ghi của GPIO, cách chọn xung clock cho vi điều khiển và phân biệt thạch anh nội ngoại 
Example : Blink_led , 8 LED nhấp nháy với chu kì 1(s)
BTVN : led trái tim(proteus), led nhấp nháy từ trái sang phải.

-Buổi 4(GPIO): Chữa bài qua , giới thiệu về input của gpio(buổi trước sẽ chỉ giới thiệu thôi buổi này đi sâu) ,giới thiệu led 7 thanh,đọc trang thái của gpio, ứng dụng của nó 
trong nút nhấn thực tế, cách lọc nhiễu khi bấm nút 
Example : Nhất nút 8 đèn sáng ,LED 7 THANH SÁNG TỪ 1->9;
BTVN (kit): nhấn nút thì led 7 tăng(giảm) 1 đơn vị tăng đến 9 thì về 0(0->9), nhấn giữ nút (1s) thì tất cả đèn tắt ,bấm một phát thì đèn 1 sáng bấm tiếp theo 
đèn 2 sáng và tiếp tục nhảy về led đầu;

- Buổi 5(GPIO,XÂY DỰNG THƯ VIỆN): Chữa bài,xây dựng thư viện button(nút nhấn),gpio sao cho chuẩn cho giống thằng HAL(một thư viện chuẩn được dùng nhiều trong 
các công ty )bằng define
example : ứng dụng thư viện cho các bt đã làm
BTVN : xây dưng thêm cho các hàm chức năng của Lib Button, hàm Tooggle , write_pin

-Buổi 6(INTERRUP) :

*/
