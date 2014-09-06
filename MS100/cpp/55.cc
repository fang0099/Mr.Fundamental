/**
 * 题目：如下为类型CMyString的声明，请为该类型添加赋值运算符函数
 * 考虑“异常安全性”
 * class CMyString
 * {
 * public:
 *     CMyString(char* pData = NULL);
 *     CMyString(const CMyString& str);
 *     ~CMyString(void);
 * private:
 *     char* m_pData;
 * };
 */
CMyString& CMyString::operator(const CMyString& str)
{
    if(*this != str)
    {
        CMyString temp(str);
        char* tempData = temp.m_pData;
        temp.m_pData = m_pData;
        m_pData = tempData;
    }
    return *this;
}
