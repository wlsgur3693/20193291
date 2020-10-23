
// 장진혁View.h: C장진혁View 클래스의 인터페이스
//

#pragma once


class C장진혁View : public CView
{
protected: // serialization에서만 만들어집니다.
	C장진혁View() noexcept;
	DECLARE_DYNCREATE(C장진혁View)

// 특성입니다.
public:
	C장진혁Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 구현입니다.
public:
	virtual ~C장진혁View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	int Length(CPoint m_pt1, CPoint m_pt2);
	CPoint m_pt1;
	CPoint m_pt2;
	int m_Radius;
};

#ifndef _DEBUG  // 장진혁View.cpp의 디버그 버전
inline C장진혁Doc* C장진혁View::GetDocument() const
   { return reinterpret_cast<C장진혁Doc*>(m_pDocument); }
#endif

