//#include <iostream>
//#include <vector>
//
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        // ����һ�� m x n �Ķ�ά dp ���飬����ʼ��Ϊ 0
//        std::vector<std::vector<int>> dp(m, std::vector<int>(n, 0));
//
//        // ��ʼ��������һ�к͵�һ�е�·������Ϊ 1
//        for (int i = 0; i < m; ++i) {
//            dp[i][0] = 1;
//        }
//        for (int j = 0; j < n; ++j) {
//            dp[0][j] = 1;
//        }
//
//        // ��� dp ����
//        for (int i = 1; i < m; ++i) {
//            for (int j = 1; j < n; ++j) {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//
//        // �������½ǵ�·����
//        return dp[m - 1][n - 1];
//    }
//};
//
//int main() {
//    Solution sol;
//    int m = 3, n = 7;
//    std::cout << "Unique paths for a " << m << "x" << n << " grid: " << sol.uniquePaths(m, n) << std::endl;
//    return 0;
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//
//// ��������ػ�׼Ԫ�ص�����λ��
//int partition(vector<int>& arr, int low, int high)
//{
//    int pivotValue = arr[low];
//    int start = low;
//    int end = high;
//
//    while (start <= end)
//    {
//        while (start <= end && arr[start] <= pivotValue)
//        {
//            start++;
//        }
//
//        while (start <= end && arr[end] >= pivotValue)
//        {
//            end--;
//        }
//
//        // �����ҵ�������Ԫ��
//        if (start < end)
//        {
//            swap(arr[start], arr[end]);
//            cout << "Swapping elements at indices " << start << " and " << end << ": ";
//            for (int i = 0; i < arr.size(); ++i)
//                cout << arr[i] << " ";
//            cout << endl;
//        }
//        
//        
//
//    }
//
//    swap(arr[low], arr[end]); // ����׼Ԫ�طŵ�����λ��
//    cout << "Placing pivot " << pivotValue << " at index " << end << ": ";
//    for (int i = 0; i < arr.size(); ++i)
//        cout << arr[i] << " ";
//    cout << endl;
//    return end;
//
//}
//
//
//void quickSort(vector<int>& arr, int low, int high) 
//{
//    if (low < high)
//    {
//        int pivotIndex = partition(arr, low, high);
//        quickSort(arr, low, pivotIndex - 1);
//        quickSort(arr, pivotIndex + 1, high);
//    }
//
//}
//
//
//
//int main() {
//    vector<int> arr = { 10, 7, 8, 9, 1, 5 }; // ��ʼ������
//    quickSort(arr, 0, arr.size() - 1); // ������������п�������
//
//    cout << "Sorted array: "<<endl; // �������������
//    for (int i = 0; i < arr.size(); ++i)
//        cout << arr[i] << " "; // ��ӡ����Ԫ��
//    cout << endl;
//
//    return 0;
//}






//class Quick {
//
//public:
//	void quicksort(vector<int> &vec, int start, int end)
//	{
//		if (start >= end)
//		{
//			return;
//		}
//
//		int left = start;
//		int right = end;
//		int temp = vec[left];
//
//		while (left<right)
//		{
//			while (left<right && vec[right]>temp)
//			{
//				right--;
//			}
//			if(left<right)
//				vec[left] = vec[right];
//			while (left < right && vec[left] < temp)
//			{
//				left++;
//			}
//			if(right>left)
//				vec[right] = vec[left];
//			
//
//		}
//		vec[left] = temp;
//		quicksort(vec, start, left - 1);
//		quicksort(vec, left + 1, end);
//
//	}
//
//};



//int main()
//{
//    vector<int> nums = { 1, 2, 4, 55, 77, 1, 3, 5, 7, 3, 8, 5, 9 };
//    Quick quick;
//    quick.quicksort(nums, 0, nums.size() - 1);
//    cout << "nihao" << " ";
//    for (int i : nums)
//    {
//        cout << i << " ";
//    }
//    return 0;
////}
////
//
//
//
//class Quick
//{
//public:
//    void quicksort(vector<int>& nums, int start, int end)
//    {
//        if (start >= end)
//            return;
//        int left = start;
//        int right = end;
//        int temp = nums[left];
//        while (left < right)
//        {
//            while (left < right && nums[right] > temp)
//                right--;
//            nums[left] = nums[right];
//            while (left < right && nums[left] < temp)
//                left++;
//            nums[right] = nums[left];
//        }
//        nums[left] = temp;
//        quicksort(nums, start, left - 1);
//        quicksort(nums, left + 1, end);
//    }
//};
//
//
//int main()
//{
//    vector<int> nums = { 11, 23, 4, 3, 5, 7,  80, 9 };
//    Quick quick;
//    quick.quicksort(nums, 0, nums.size() - 1);
//    for (int num : nums)
//    {
//        cout << num << " ";
//    }
//    return 0;
//}


