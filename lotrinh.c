/*
LỘ TRÌNH ĐƯỢC CHIA LÀM 2 ĐỢT : BASIC AND ADVANCED

========================GIAI ĐOẠN 1 : BASIC(Yêu cầu có kiến thức C cơ bản)============================
Video phụ : Hướng dấn cài đặt công cụ lập trình, và sử dụng công cụ 
Dặn dò : Có thể mua mạch thực tế hoặc chỉ sử dụng mô phỏng(kit và mạch nạp cho giai đoạn 1)
Video phụ : Test kit, mạch nạp code đã chuẩn bị , hướng dẫn nạp code mẫu cho vi điều khiển để test kit,

=== NGOẠI VI CƠ BẢN ====

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
- Các ngoại vi khác cũng vậy cứ học xong thì bắt phải xây dựng thư viện cho ngoại vi đó

-Buổi 6(INTERRUP) : Chữa bài,Thế nào là interrup,interrup của hệ thống khác gì interrup hardware,sử dụng nút nhấn với interrup
Example : sử dụng nút nhấm với interrup điều khiển led
BTVN : xây dựng thư viện cho nó các hàm yêu cầu (interrup_init() : gọi trong hàm main gọi là thanh ghi interrup đã được config )...

-Buổi 7 :(ADC) : Chữa bài,Thế nào adc, adc của các vi điều khiển của các thanh ghi khác sẽ như thế nào , thế nào analog thế nào là digital ,hiểu được adc và cách tính toán các 
giá trị của vi điều khiển trả về khi đọc giá trị adc
Example : đọc giá trị adc hiển thị lên led 7 thanh , 
BTVN : Sử dụng 1 biến trở để điều chỉnh điện áp thay đổi từ 0-5V. Sử dụng chức năng ADC của vi điều khiển để đo điện áp, hiển thị giá trị lên LED 7 thanh. Sử dụng 1 
nút bấm: nếu ấn nút lần thứ nhất thì LED hiển thị điện áp với 1 chữ số thập phân, nếu ấn nút lần thứ 2 thì LED hiển thị điện áp với 2 chữ số thập phân....

-Buổi 8(ADC) :Chưa bài, Đọc adc đa kênh , đọc nhiều kênh cùng lúc , adc kết hợp cùng interrupt
Example : Đọc cùng lúc 2 kênh adc đo biến trở hiển thị led 7 thanh
BTVN :  *Bài 1 Lập trình sử dụng chức năng ADC để đo điện áp và nhiệt độ, hiển thị lên 2 con LED 7 thanh .Điện áp đưa vào chân ADC0, nhiệt độ đưa vào chân ADC1. -
Sử dụng 2 nút bấm nối vào PD0 và PD1 .
Ấn nút 1 thì LED sẽ hiển thị đo điện áp với 1 chữ số thập phân  
Ấn nút 2 thì LED sẽ hiển thị đo nhiệt độ.
*Bài 2 : Lập trình sử dụng chức năng ADC để đo điện áp. Có 4 đầu vào điện áp cấp vào chân ADC0,ADC1,ADC2,ADC3. Sử dụng 2 LED 7 thanh hiện thị điện áp.
Sử dụng 4 nút bấm vào PC0,PC1,PC2,PC3. 
Khi bấm nút 1 thì LED sẽ hiển thị điện áp ở chân ADC0, 
Ấn nút 2 thì LED sẽ hiển thị điện áp ở chân ADC1 , 
Ấn nút 3 thì LED sẽ hiển thị áp ở chân ADC2
Ấn nút 4 thì LED sẽ hiển thị điện áp ở chân ADC3.

-Buổi 9(TIMER) : Chưa bài, thế nào timer cách tính toán timer(bộ đếm ) , timer counter normal ứng dụng của nó để viết hàm delay 
Example : delay_ms, delay_us,GetTick();
BTVN : xây dựng thư viện delay, đếm counter tỉmer led nháy với chu kì 1s

-Buổi 10 (TIMER) : Chữa bài , Timer Input Capture Mode là gì , cách dùng timer với interrupt (ứng dụng viết hàm GetTick);
Example : viết thư viện button với hàm GetTick;
BTVN : tạo thư viện button với hàm GetTick; 
Bài 2 :Thiết kế mạch sử dụng vđk atmega16 lập trình hiển 4 LED 7 thanh bằng pp quét , sử dụng 3 nút bấm nối vào PA0,PA1,PA2
Thiết lập TIMER 0 hoạt động ở chế độ Normal , kích hoặc ngắt tràn
Lựa chọn một tần số hoạt động cho Timer , ghi lại chú thích về cách tính toán thời gian 1(s) vào chương trình phục vụ ngắt
Số ban đầu hiện thị là 1000
Ấn nút 1(sau đó nhả ra) thì số hiện thị tự động tăng sau mỗi 1(s) tăng tối đa đến 9000 thì dừng lại
Ấn nút 2(sau đó nhả ra) thì số hiện thị tự động giảm sau mỗi 1(s) tăng tối đa đến 0 thì dừng lại
Ấn nút 3(sau đó nhả ra) thì số hiện thị tự động dừng lại ngay lập tức

-Buổi 11 :(TIMER) : CTC mode timer ,ứng dụng của nó và so sánh với các chế độ cũ giới thiệu về PWM là gì 
Example : PWM sáng tắt đèn led , pwm điều khiển động cơ
BTVN : Sử dụng 1 nút nhấm với 2 đèn 


- Đồ án : LCD hiển thị giá trị nhiệt độ và điện áp ấn nút thì đọc nhiệt độ or điện áp (ở đây các bạn có thể đem con này và con sau này đi thi trên trường cũng được rồi)

- Đồ án  tự đăng kí : Xe dò line

==== GIAO THỨC TRUYỀN THÔNG ====
- UART(3 buổi)
- Đồ án : xe điều khiển từ xa bằng bluetooth ứng dụng các thứ đã học ở trên 
- I2C (3 buổi)
- Đồ án : Giao tiếp 2 lcd và 2 con vi điều khiển thông qua i2c , tiết kiệm chi phí thì chỉ cần giao tiếp vđk với lcd sử dụng i2c
- SPI (2 buổi) ( mô phỏng proteus giao tiêp 2 vđk)
- Bootloader(2 buổi)
- Đồ án kết thúc giai đoạn 1 : Đồng hồ vạn niên hiên thị giờ ngày tháng năm , nhiệt độ , độ ẩm, cảnh báo cháy ở xa với chuông bluetooth , với các nút 
bấm và chức năng khác nhau,
========================GIAI ĐOẠN 2 : ADVANCDED(lập trình vđk 32bit lõi arm (STM32))============================
- Cài đặt keilC 
- Tải các tài liệu lq 
- Học các kiến thức về lõi arm , cách cấu hình clock chi tiết cho vđk 32 bit,ứng dụng và sử dụng static ,volatile ,cách đọc datasheet để cấu hình các ngoại
vi như trên ,
- Giới thiệu về thằng HAL thư viện có sẵn của ST
(thế nào là makefile  ứng dụng struct ,union trong xây dựng thư viện các ngoại vi stm32 , lập trình stm32 với tầng devie driver và application)
.....
Cách dùng ide visual studio code và compiler GCC để lập trình cho các vđk lõi arm khác

*/
