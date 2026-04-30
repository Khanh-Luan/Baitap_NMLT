# Bai tap diem danh
# 📌 Bài toán: Điểm danh
# 🧠 Mô tả

# Lớp học có 30 sinh viên, nhưng chỉ có 28 bạn có mặt. 
# Yêu cầu: tìm ra 2 sinh viên vắng mặt dựa trên danh sách đã điểm danh.

# 💡 Ý tưởng giải
# Sử dụng mảng đánh dấu (boolean array) để lưu trạng thái có mặt
# Ban đầu: tất cả = false (chưa có mặt)
# Khi đọc input:
# Sinh viên có mặt → đánh dấu true
# Duyệt từ 1 → 30:
# Những vị trí vẫn là false → sinh viên vắng
# ⚙️ Thuật toán
# Khởi tạo mảng bool diemdanh[31] = {false}
# Nhập 28 số (MSSV có mặt)
# Đánh dấu diemdanh[x] = true
# Duyệt từ 1 → 30:
# Nếu diemdanh[i] == false → in ra
