// sizeof는 배열의 크기를 알아낼 떄에도 사용 가능.
// 10개짜리 배열에 sizeof 쓰면 40 나온다.
// (assuming that each integer requires four bytes)
// sizeof(a[0])은 4 뱉음
// 그러므로 sizeof(a) / sizeof(a[0])으로 배열 사이즈 정확하게
// 매번 적기 귀찮으므로
// # define SIZE ( (int) (sizeof(a) / sizeof(a[0]) )으로 미리 정의 가능 